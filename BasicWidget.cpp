#include "BasicWidget.h"

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
