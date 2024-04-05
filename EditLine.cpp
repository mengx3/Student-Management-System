#pragma once
#include "BasicWidget.h"
#include<string>
using namespace std;


class EditLine :
    public BasicWidget
{

public:
    EditLine(int x = 0, int y = 0, int width = 200, int height = 40);


    //rewrite show method
    void show() override;

    //set title
    inline void setTitle(const string& t) { title = t; }

    //set tip
    inline void setTipMessage(const string& mes) { tipMessage = mes; }

    //get the content
    inline const string& getContent()const { return content; }

    //clear the content
    void clear() { content.clear(); }


private:

    //the content
    string content;

    //title
    string title;

    //tip Message
    string tipMessage;

};

