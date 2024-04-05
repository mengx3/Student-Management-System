#include "BasicWidget.h"
#include"Window.h"

BasicWidget::BasicWidget(int mX, int mY, int mW, int mH) : m_x(mX), m_y(mY), m_w(mW), m_h(mH) {}

int BasicWidget::getMX() const {
    return m_x;
}

int BasicWidget::getMY() const {
    return m_y;
}

int BasicWidget::getMW() const {
    return m_w;
}

int BasicWidget::getMH() const {
    return m_h;
}

void BasicWidget::setFixSize(int wid, int heig) {

    this->m_w = wid;
    this->m_h = heig;

}

void BasicWidget::move(int x, int y) {
    this->m_x = x;
    this->m_y = y;

}

bool BasicWidget::isOn()
{

    auto& M_Msg = Window::getMessage();

    if (M_Msg.x >= m_x && M_Msg.x <= m_x + m_w && M_Msg.y >= m_y && M_Msg.y <= m_y + m_h) {
        return true;
    }
    return false;
}

bool BasicWidget::isClicked()
{

    auto& M_Msg = Window::getMessage();

    //check if is on
    if (isOn()) {
        //if is clicked
        if (M_Msg.message == WM_LBUTTONDOWN) {
            return true;
        }
    }
    return false;
}

void BasicWidget::event()
{
    //if mouse is not in button,currentColor = normalColor;
    if (!isOn()) {
        currentColor = commonColor;
    }
    else {
        currentColor = mouseHoverColor;
    }
}

void BasicWidget::setBackColor(COLORREF color)
{
    commonColor = color;
}

void BasicWidget::setMouseHoverColor(COLORREF color)
{
    mouseHoverColor = color;
}