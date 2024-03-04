
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

const string& Teacher::getTitle() const {
    return title;
}

void Teacher::setTitle(const string& title) {
    Teacher::title = title;
}

int Teacher::getSalary() const {
    return salary;
}

void Teacher::setSalary(int salary) {
    Teacher::salary = salary;
}

int Teacher::getCoid() const {
    return coid;
}

void Teacher::setCoid(int coid) {
    Teacher::coid = coid;
}

ostream& operator<<(ostream& os, const Teacher& teacher) {
    os << "tid: " << teacher.tid << " tname: " << teacher.tname << " sex: " << teacher.sex << " age: " << teacher.age
        << " title: " << teacher.title << " salary: " << teacher.salary << " coid: " << teacher.coid;
    return os;
}

bool Teacher::operator==(const Teacher& rhs) const {
    return tid == rhs.tid &&
        tname == rhs.tname &&
        sex == rhs.sex &&
        age == rhs.age &&
        title == rhs.title &&
        salary == rhs.salary &&
        coid == rhs.coid;
}

bool Teacher::operator!=(const Teacher& rhs) const {
    return !(rhs == *this);
}

Teacher::~Teacher() {
    //
    cout << "½ÌÊ¦¶ÔÏó" << this->tname << "ÒÑ¾­Ïú»Ù" << endl;
}


