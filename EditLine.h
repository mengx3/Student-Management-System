#pragma once
#include "BasicWidget.h"
#include<string>
using namespace std;


class EditLine :
    public BasicWidget
{

public:
    EditLine(int x = 0, int y = 0, int width = 200, int height = 40);

private:

    //the content
    string content;

    //title
    string title;

    //tip Message
    string tipMessage;

};

