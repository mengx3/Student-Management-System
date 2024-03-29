#ifndef STUSYSTEMGUI_STUMANAGEMENT_H
#define STUSYSTEMGUI_STUMANAGEMENT_H

#include "Student.h"
#include"Window.h"
#include<vector>
#include"PushButton.h"
#include "StudentDao.h"
#include"StuTable.h"
using namespace std;

class StuManagement {
private:

    //∑‚◊∞≤Ÿ◊˜Œ™√∂æŸ±‰¡ø
    enum Operation {
        ShowAll,
        Add,
        Del,
        Update,
        SearchByName
        Menu=66
    };

public:
    StuManagement();

    //∆Ù∂Øπ‹¿Ì¿‡
    void run();

    //≤Àµ•ΩÁ√Ê
    int menu();

    // ≤Èø¥À˘”–µƒ—ß…˙
    vector<Student>showAllStu();

    //‘ˆÃÌ—ß…˙
    int AddStu();

    //…æ≥˝—ß…˙
    int DelStu();

    //∏¸–¬—ß…˙
    int UpdateStu();

    //≤È’“
    vector<Student>CheckByName();

    //draw the background
    void drawBackground();

    //eventLoop
    void eventLoop();

private:
    ExMessage message;	

    //background picture
    IMAGE backgroundPicture;

    vector<PushButton*> menu_btns; 

    StudentDao studentDao;

private:

    //the student's table
    StuTable* stuTable;

    //table's header
    string tableHeader;

};


#endif //STUSYSTEMGUI_STUMANAGEMENT_H
