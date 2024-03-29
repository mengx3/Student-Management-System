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
    menu_btns.push_back(new PushButton("≤Èø¥—ß…˙"));
    menu_btns.push_back(new PushButton("ÃÌº”—ß…˙"));
    menu_btns.push_back(new PushButton("…æ≥˝—ß…˙"));
    menu_btns.push_back(new PushButton("–ﬁ∏ƒ—ß…˙"));
    menu_btns.push_back(new PushButton("≤È’“—ß…˙"));
    menu_btns.push_back(new PushButton("ÕÀ≥ˆœµÕ≥"));

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

    tableHeader = "—ß∫≈\t–’√˚\t–‘±\tƒÍ¡‰\tºÆπ·\t—ß‘∫";

    //init the table
    stuTable = new StuTable;
    stuTable->setRowNum(10);
    stuTable->setColNum(6);
    stuTable->setHeader(tableHeader);

    //move to
    //stuTable->move(20,30);


    //made the table in center
    stuTable->move((Window::width() - stuTable->getGridWidth() * stuTable->getColNum())/2,60);


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
    outtextxy(0, 0, "AddStu");
    cout << "ADDSTU" << endl;
    return 0;
}

int StuManagement::DelStu() {
    outtextxy(0, 0, "DELSTU");
    cout << "DELSTU" << endl;
    return 0;
}

int StuManagement::UpdateStu() {
    outtextxy(0, 0, "UPDATESTU");
    cout << "UPDATE" << endl;
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
}




