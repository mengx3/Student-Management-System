#pragma once

#include "Configure.h"
using namespace std;

class Window
{
public:

	//constructor
	Window(int w,int h,int flag);

	//exit function
	int exec();

	//set window's title
	void setTitle(const string& titile);

	//get window's width
	static int width();

	//get window's height
	static int height();

	//to clear window
	static void clear();

	static void beginDraw();

	static void flushDraw();

	static void endDraw();

	//the operation of keyboard or mouse to
	//check if there is message
	inline static bool hasMessage() { return ::peekmessage(&message, EX_MOUSE | EX_KEY); }
	inline static const ExMessage& getMessage() { return message; }

private:

	//
	HWND handle;

	//Message
	static ExMessage message;	

};
