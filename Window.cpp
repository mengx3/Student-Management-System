#include "Window.h"
#include<iostream>

//static variable should be defined
ExMessage Window::message;


Window::Window(int w, int h, int flag)
{
	//using global  init
	handle = ::initgraph(w, h, flag);

	::setbkmode(TRANSPARENT);
}

int Window::exec()
{
	return getchar();
}
