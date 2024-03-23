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

void Window::setTitle(const string& title)
{

	//set window's title
	::SetWindowText(handle, title.c_str());


}

int Window::width()
{
	return ::getwidth();
}

int Window::height()
{
	return ::getheight();
}

void Window::clear()
{

	::cleardevice();
}
