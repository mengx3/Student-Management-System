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
}

int StuManagement::menu() {
    //Ã· æ”√ªß’‚ «≤Àµ•£¨∫Û–¯ÕÍ…∆
    cout << "menu" << endl;
    int op = 0;
    //ªÒ»°”√ªß ‰»Îµƒ÷∏¡Ó
    cin >> op;
    return op;
}

void StuManagement::showAllStu() {

}

int StuManagement::AddStu() {
    return 0;
}

int StuManagement::DelStu() {
    return 0;
}

int StuManagement::UpdateStu() {
    return 0;
}

vector<Student> StuManagement::CheckByName() {
    return vector<Student>();
}
