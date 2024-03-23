#include<iostream>
#include"Window.h"
#include"StuManagement.h"
using namespace std;


int main() {


	//init window
	Window w(960, 640, EX_SHOWCONSOLE);

	//set title
	w.setTitle("StudentManageMentSystem");

	StuManagement sm;
	sm.run();

	//to avoid exit suddenly
	return w.exec();


}
