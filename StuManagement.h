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
