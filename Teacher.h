#include <string>
#include<iostream>
using namespace std;

#ifndef STUSYSTEMGUI_TEACHER_H
#define STUSYSTEMGUI_TEACHER_H


class Teacher {
    int tid;

    string tname;

    string sex;

    int age;

    string title;

    int salary;

    int coid;

public:
    Teacher(const string& tname, const string& sex, int age, const string& title, int salary, int coid);

    Teacher();

    int getTid() const;

    void setTid(int tid);

    const string& getTname() const;

    void setTname(const string& tname);

    const string& getSex() const;

    void setSex(const string& sex);

    int getAge() const;

    void setAge(int age);

    const string& getTitle() const;

    void setTitle(const string& title);

    int getSalary() const;

    void setSalary(int salary);

    int getCoid() const;

    void setCoid(int coid);

    friend ostream& operator<<(ostream& os, const Teacher& teacher);

    bool operator==(const Teacher& rhs) const;

    bool operator!=(const Teacher& rhs) const;

    virtual ~Teacher();
};


#endif //STUSYSTEMGUI_TEACHER_H
