#include<iostream>
using namespace std;
#include "Course.h"
#include "Deptartment.h"
#include "Student.h"
#include "Teacher.h"

int main() {
    // Create a course object and test output operator <<
    Course c1(17, "Chinese", 88, 4);
    cout << c1 << endl;

    // Create a student object s1
    Student s1("Sier", 19, "male", "Tokiyo", "computer");

    // Student s2
    Student s2("seg", 20, "demale", "oyo", "Eng");

    // Student s3
    Student s3("Sier", 19, "male", "Tokiyo", "computer");

    // Test output operator <<
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    // Test ==
    cout << (s1 == s2) << endl;
    cout << (s1 == s3) << endl;

    // Test !=
    cout << (s1 != s2) << endl;
    cout << (s1 != s3) << endl;

    // Create Teacher t1
    Teacher t1("zhang1", "female", 56, "Maater", 2000, 5);

    // Teacher t2
    Teacher t2("li2", "mail", 56, "usjidf", 23904, 6);

    // Teacher t3
    Teacher t3("zhang1", "female", 56, "Maater", 2000, 5);

    // Test output operator <<
    cout << t1 << endl;
    cout << t2 << endl;
    cout << t3 << endl;

    // Test ==
    cout << (t1 == t2) << endl;
    cout << (t1 == t3) << endl;

    // Test !=
    cout << (t1 != t2) << endl;
    cout << (t1 != t3) << endl;

    // Test Department
    Deptartment d1("Eng", "lisi", 500, 190);
    Deptartment d2("Eng", "lisi", 500, 190);
    Deptartment d3("Eng", "lisi", 500, 190);

    // Test output operator <<
    cout << d1 << endl;
    cout << d2 << endl;
    cout << d3 << endl;

    // Test ==
    cout << (t1 == t2) << endl;
    cout << (t1 == t3) << endl;

    // Test !=
    cout << (t1 != t2) << endl;
    cout << (t1 != t3) << endl;

    return 0;
}
