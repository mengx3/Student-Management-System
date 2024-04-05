
#ifndef STUSYSTEMGUI_PUSHBUTTON_H
#define STUSYSTEMGUI_PUSHBUTTON_H

#include "BasicWidget.h"
#include "Configure.h"

class PushButton :public BasicWidget {

private:
    string text;
    // Message
    ExMessage M_Msg;


public:
    PushButton(const string& text = "BUTTON", int mX = 0, int mY = 0, int mW = 100, int mH = 30);

    //rewrite show method
    void show() override;

    //getText
    string getText();

    //check if the mouse is stopping the Button
    bool isOn();

    //check if the button is clicked
    bool isClicked();

    //the circle of event
    void eventLoop(const ExMessage& msg);

};


#endif //STUSYSTEMGUI_PUSHBUTTON_H
