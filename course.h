#ifndef STUSYSTEMGUI_COURSE_H
#define STUSYSTEMGUI_COURSE_H

#include<string>
using namespace std;

class course {
    int id;
    string name;
    int score;
    int value;
    int tid;
public:
    course(int id, const string &name, int score, int value, int tid);

    course();

    int getId() const;

    void setId(int id);

    const string &getName() const;

    void setName(const string &name);

    int getScore() const;

    void setScore(int score);

    int getValue() const;

    void setValue(int value);

    int getTid() const;

    void setTid(int tid);
};


#endif //STUSYSTEMGUI_COURSE_H
