#ifndef STUSYSTEMGUI_STUMANAGEMENT_H
#define STUSYSTEMGUI_STUMANAGEMENT_H

#include "Student.h"
#include<vector>
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
    };

public:

    //∆Ù∂Øπ‹¿Ì¿‡
    void run();

    //≤Àµ•ΩÁ√Ê
    int menu();

    // ≤Èø¥À˘”–µƒ—ß…˙
    void showAllStu();

    //‘ˆÃÌ—ß…˙
    int AddStu();

    //…æ≥˝—ß…˙
    int DelStu();

    //∏¸–¬—ß…˙
    int UpdateStu();

    //≤È’“
    vector<Student>CheckByName();

};


#endif //STUSYSTEMGUI_STUMANAGEMENT_H
