#ifndef STUSYSTEMGUI_BASICWIDGET_H
#define STUSYSTEMGUI_BASICWIDGET_H

/**
 * abstract class,is not allowed to create an instance
 */

#include<easyx.h>
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


    //check if the mouse is stopping the Button
    bool isOn();

    //check if the button is clicked
    bool isClicked(); 


    virtual void show() = 0;


    //
    virtual void event();

    //setBackGroundColor
    void setBackColor(COLORREF color);

    //set color when mouse hovering in the button
    void setMouseHoverColor(COLORREF color);

protected:
    int m_x;//
    int m_y;
    int m_w;
    int m_h;


    //currrnt button color
    COLORREF currentColor = RGB(232, 232, 236);

    //normal state color
    COLORREF commonColor = RGB(232, 232, 236);

    //when a mouse was hovering    
    COLORREF mouseHoverColor = RED;

};


#endif //STUSYSTEMGUI_BASICWIDGET_H
