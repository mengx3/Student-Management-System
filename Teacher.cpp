
#include "Teacher.h"

Teacher::Teacher(const string& tname, const string& sex, int age, const string& title, int salary, int coid) : tname(
    tname), sex(sex), age(age), title(title), salary(salary), coid(coid) {}

int Teacher::getTid() const {
    return tid;
}

void Teacher::setTid(int tid) {
    Teacher::tid = tid;
}

const string& Teacher::getTname() const {
    return tname;
}
