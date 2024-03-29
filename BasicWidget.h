#ifndef STUSYSTEMGUI_BASICWIDGET_H
#define STUSYSTEMGUI_BASICWIDGET_H

/**
 * abstract class,is not allowed to create an instance
 */

class BasicWidget {

public:
    //constructor
    BasicWidget(int mX, int mY, int mW, int mH);

    //destructor
    virtual ~BasicWidget(){}

    int getMX() const;

    int getMY() const;

    int getMW() const;

    int getMH() const;

    void setFixSize(int wid, int heig);

    void move(int x, int y);

    virtual void show() = 0;

protected:
    int m_x;//
    int m_y;
    int m_w;
    int m_h;
};


#endif //STUSYSTEMGUI_BASICWIDGET_H
