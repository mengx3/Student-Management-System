
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

void Teacher::setTname(const string& tname) {
    Teacher::tname = tname;
}

const string& Teacher::getSex() const {
    return sex;
}

void Teacher::setSex(const string& sex) {
    Teacher::sex = sex;
}

int Teacher::getAge() const {
    return age;
}

void Teacher::setAge(int age) {
    Teacher::age = age;
}
