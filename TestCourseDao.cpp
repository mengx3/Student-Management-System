#include<iostream>
#include"CourseDao.h"
using namespace std;

int main() {

	CourseDao cd;

	Course c1(21, "gMaa", 23, 5);

	cd.AddCourse(c1);

  cd.DelCourse(21);


	c1.setName("geography");

	c1.setId(16);

	cd.UpdateCourse(c1);

	vector<Course>cList;
	cList = cd.GetAllCourse();
	for (Course c : cList) {
		cout << c << endl;
	}

	char cname[10];
	strcpy(cname, "gM");

	cList = cd.GetAllCourseByName(cname);
	for (Course c1 : cList) {
		cout << c1 << endl;
	}

	return 0;
