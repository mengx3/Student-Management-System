
#ifndef STUSYSTEMGUI_PUSHBUTTON_H
#define STUSYSTEMGUI_PUSHBUTTON_H

#include "BasicWidget.h"
#include "Configure.h"

class PushButton :public BasicWidget {

private:
    string text;
    // Message
    ExMessage M_Msg;

