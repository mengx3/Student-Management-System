//
// Created by bingfenhaochi on 2024/3/13.
//

#include "PushButton.h"

PushButton::PushButton(const string& text, int mX, int mY, int mW, int mH) : BasicWidget(mX, mY, mW, mH), text(text) {}

void PushButton::show() {

    //set color
    setfillcolor(RGB(232, 232, 236));

    ::fillroundrect(m_x, m_y, m_x + m_w, m_y + m_h,10,10);

    //set the color of font
    settextcolor(RED);
    int xx = m_x + (m_w - textwidth(text.c_str())) / 2;
    int yy = m_y + (m_h - textheight(text.c_str())) / 2;


    //put the title in center
    ::outtextxy(xx, yy, text.c_str());

    //cout << getText() << endl;

}

string PushButton::getText()
{
    return text;
}

bool PushButton::isOn()
{
    if (M_Msg.x >= m_x && M_Msg.x <= m_x + m_w && M_Msg.y >= m_y && M_Msg.y <= m_y + m_h) {
        return true;
    }
    return false;
}

bool PushButton::isClicked()
{
    //check if is on
    if (isOn()) {
        //if is clicked
        if (M_Msg.message == WM_LBUTTONDOWN) {
            return true;
        }
    }
    return false;
}

void PushButton::eventLoop(const ExMessage& msg)
{
    M_Msg = msg;
}
