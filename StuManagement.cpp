#include "StuManagement.h"
#include<iostream>
#include"Window.h"
#include<conio.h>
#include<stdlib.h>

StuManagement::StuManagement()
{
    //load the backgroundPicture;
    ::loadimage(&backgroundPicture, "./imags/bg.jpg", Window::width(), Window::height());

    //the style of font
    ::settextstyle(25, 0, "ÀŒÃÂ");

    //mainview button init
    menu_btns.push_back(new PushButton("查看学生"));
    menu_btns.push_back(new PushButton("添加学生"));
    menu_btns.push_back(new PushButton("删除学生"));
    menu_btns.push_back(new PushButton("修改学生"));
    menu_btns.push_back(new PushButton("退出系统"));

    //the number of buttons
    int btnNum = menu_btns.size();

    //make the buttons in the center
    int totalHeight = btnNum * menu_btns[0]->getMH();
    //the start height of buttons
    int startHeight = (Window::height() - totalHeight) / 2;


    //set every button
    for (int i = 0; i < menu_btns.size(); i++) {
        //set sizes
        menu_btns[i]->setFixSize(250, 50);
        int bx = (Window::width() - menu_btns[i]->getMW()) / 2;
        int by = startHeight + i * menu_btns[i]->getMH();

        menu_btns[i]->move(bx, by);
    }

    tableHeader = "学号\t姓名\t性别\t年龄\t籍贯\t学院";

    //init the table
    stuTable = new StuTable;
    stuTable->setRowNum(10);
    stuTable->setColNum(6);
    stuTable->setHeader(tableHeader);

    //move to
    //stuTable->move(20,30);


    //made the table in center
    stuTable->move((Window::width() - stuTable->getGridWidth() * stuTable->getColNum())/2,60);

    //init the addBtn
    addBtn.reset(new PushButton("添加",900,300,80,40));

    //init the line
    addStuLine.reset(new EditLine(200, 300,650));

    //set Line
    addStuLine->setTitle("请输入学生信息");
    addStuLine->setTipMessage("按照如下格式\n\t姓名 性别 年龄 籍贯 院系\n输入信息");


    //init the delBtn
    delBtn.reset(new PushButton("删除", 900, 300, 80, 40));

    //init the line
    delStuLine.reset(new EditLine(200, 300, 650));

    //set Line
    delStuLine->setTitle("请输入学生学号");
    delStuLine->setTipMessage("输入学生学号");

    //modify
    updateBtn.reset(new PushButton("提交", 900, 300, 80, 40));

    updateLine.reset(new EditLine(150, 260, 500, 40));
    updateLine->move((Window::width() - updateLine->getMW()) / 2, 260);

}

void StuManagement::run() {
    int op = menu();

    vector<Student>stuLsit;

    //get the StudentList
    stuLsit = showAllStu();

    stuTable->setData(stuLsit);

    ////setRowNum
    //stuTable->setRowNum(stuLsit.size());

    Window::beginDraw();

    while (true)
    {
       
        Window::clear();
        //start to draw the background
        drawBackground();

        //test the window class
        if (Window::hasMessage()) {
            //getMessage
            message = Window::getMessage();

            //deal with the message
            switch (message.message)
            {
                //when a key was pressed
            case WM_KEYDOWN:
                //back to the mainMenu when ESC was pressed
                cout << "a key was pressed" << endl;
                if (message.vkcode == VK_ESCAPE) {

                    cout << "ESC was pressed!" << endl;
                    op = Menu;

                }
                break;

                //when mouse was clicked
            default:
                eventLoop();

                break;
            }


    }

        switch (op) {
        case StuManagement::ShowAll:
            showAllStu();
            break;
        case StuManagement::Add:
            AddStu();
            break;
        case StuManagement::Del:
            DelStu();
            break;
        case StuManagement::Update:
            UpdateStu();
            break;
        case StuManagement::SearchByName:
            CheckByName();
            break;
        default:
            break;
    
        }
        Window::flushDraw();

    }
    Window::endDraw();
}

int StuManagement::menu() {
    for (int i = 0; i < menu_btns.size(); i++) {
        //draw the button
        menu_btns[i]->show();

        menu_btns[i]->eventLoop(message);

        //if a button is clicked
        if (menu_btns[i]->isClicked()) {

            //show which button is clicked
            cout << menu_btns[i]->getText() << "±ªµ„ª˜£°" << endl;
            //system("pause");

            //return the index of button
            return i;
        }
    }
    

    return Menu;
}

void StuManagement::showAllStu() {
    outtextxy(0, 0, "SHOW");
    
    vector<Student> stuList = studentDao.GetAllStudent();
    
    //return the list
    return stuList;
}

int StuManagement::AddStu() {
    //set the title of addIng student
    const char* addTitle = "请输入学生记录：姓名 性别 年龄 籍贯 院系";

    //set the style of font
    settextstyle(30, 0, "宋体");

    //begin to draw the font
    outtextxy((Window::width() - textwidth(addTitle)) / 2, 200, addTitle);

    //btn show
    addBtn->show();

    addStuLine->show();

    auto str = addStuLine->getContent();

    //when the content is not null
    if (addBtn->isClicked()) {
        if (str.empty()) {
            MessageBox(NULL, "值不能为空", "提示", MB_ICONERROR | MB_OK);
            return -1;
        }
        //cout << addStuLine->getContent() << endl;

        Student stu = Student::StringToStu(str);

        //check the student
        cout << stu << endl;

        if (stu.getAge() <= 0) {
            return -1;
        }

        //insert into database
        studentDao.AddStudent(stu);

        MessageBox(NULL, "插入成功", "提示", MB_OK);

        //clear the content
        addStuLine->clear();
    }

    return 0;
}

int StuManagement::DelStu() {
    //set the title of addIng student
    const char* addTitle = "请输入学生学号";

    //set the style of font
    settextstyle(30, 0, "宋体");

    //begin to draw the font
    outtextxy((Window::width() - textwidth(addTitle)) / 2, 200, addTitle);

    delBtn->show();

    delStuLine->show();

    string num = delStuLine->getContent();

    //when delBtn is clicked
    if (delBtn->isClicked()) {

        //when the num is null
        if (num.empty()) {
            MessageBox(NULL, "值不能为空", "提示", MB_ICONERROR | MB_OK);
            return -1;
        }

        //get the object id
        int id = stoi(num);

        //get the Student and show
        Student s = studentDao.CheckById(id);

        cout << s;

        if (s.getId() == -1) {
            MessageBox(NULL, "查无此人！", "提示", MB_ICONERROR | MB_OK);
            outtextxy(delStuLine->getMX(), delStuLine->getMY(), string("对不起，没有找到学号为" + num + "的学生！").data());
            cout << num << endl;
        }
        else {
            outtextxy(delStuLine->getMX(), delStuLine->getMX(), s.toString().data());
            //delete
            studentDao.DelStudent(id);

        }

        //clear
        delStuLine->clear();

    }

    return 0;
}

int StuManagement::UpdateStu() {
    const char* addTitle = "请按照格式输入修改后的学生信息 学号 姓名 性别 年龄 籍贯 院系";

    //set the style of font
    settextstyle(30, 0, "宋体");

    //begin to draw the font
    outtextxy((Window::width() - textwidth(addTitle)) / 2, 200, addTitle);

    //show
    updateLine->show();

    updateBtn->show();

    string val = updateLine->getContent();

    if (!val.empty()&&updateBtn->isClicked()) {

        cout << "Val:" << val << endl;

        stringstream ss(val);
        string sid, sex, age,sname, dept, native;
        ss >> sid >> sname >> sex >> age >> native >> dept;
        Student s;
        s.setId(stoi(sid));
        s.setSname(sname);
        s.setSex(sex);
        s.setAge(stoi(age));
        s.setNative(native);
        s.setDept(dept);
        cout << s << endl;

        studentDao.UpdateStudent(s);

        updateLine->clear();
        MessageBox(NULL, "更新成功！", "提示", MB_OK);
    }

    return 0;
}

vector<Student> StuManagement::CheckByName() {
    outtextxy(0, 0, "CHECKBYNAME");
    cout << "CHECKBYNAME" << endl;
    return vector<Student>();
}

void StuManagement::drawBackground()
{

    ::putimage(0, 0, &backgroundPicture);

}

void StuManagement::eventLoop()
{
    stuTable->eventLoop(message);

    //add event
    addBtn->event();

    //Line show
    addStuLine->event();

    //del event
    delBtn->event();

    //Line show
    delStuLine->event();

    //line Show
    updateLine->event();

    //event
    updateBtn->event();

    //btn show
    updateBtn->show();
}




