#ifndef STUSYSTEMGUI_COURSE_H
#define STUSYSTEMGUI_COURSE_H

#include<string>
#include<iostream>
using namespace std;

class Course {
    int id;
    string name;
    int score;
    int value;

public:
    Course(int id, const string& name, int score, int value);

    Course();

    int getId() const;

    void setId(int id);

    const string& getName() const;

    void setName(const string& name);

    int getScore() const;

    void setScore(int score);

    int getValue() const;

    void setValue(int value);

    int getTid() const;

    void setTid(int tid);

    virtual ~Course();

    friend ostream& operator<<(ostream& os, const Course& course);
};


#endif //STUSYSTEMGUI_COURSE_H
