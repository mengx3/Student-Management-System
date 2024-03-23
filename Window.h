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

