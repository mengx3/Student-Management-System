
#include "Student.h"

int Student::getId() const {
    return id;
}

void Student::setId(int id) {
    Student::id = id;
}

const string& Student::getSname() const {
    return sname;
}

void Student::setSname(const string& sname) {
    Student::sname = sname;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int age) {
    Student::age = age;
}

const string& Student::getSex() const {
    return sex;
}

void Student::setSex(const string& sex) {
    Student::sex = sex;
}

const string& Student::getNative() const {
    return native;
}

void Student::setNative(const string& native) {
    Student::native = native;
}

const string& Student::getDept() const {
    return dept;
}

void Student::setDept(const string& dept) {
    Student::dept = dept;
}

Student::Student(const string& sname, int age, const string& sex, const string& native, const string& dept)
    :sname(sname), age(age), sex(sex), native(native), dept(dept) {
    //Ä¬ÈÏ½«idÉèÖÃÎª0
    this->id = 0;
}

Student::Student() {
    //Ä¬ÈÏÐ´Îª0£¬²åÈëÊý¾Ý¿âÖÐ»á×ÔÔö
    this->id = 0;
}

bool Student::operator==(const Student& rhs) const {
    return id == rhs.id &&
        sname == rhs.sname &&
        age == rhs.age &&
        sex == rhs.sex &&
        native == rhs.native &&
        dept == rhs.dept;
}

bool Student::operator!=(const Student& rhs) const {
    return !(rhs == *this);
}

Student::~Student() {
    cout << "Ñ§Éú" << this->id << " ÒÑ¾­±»Ïú»Ù" << endl;
}

ostream& operator<<(ostream& os, const Student& student) {
    os << "id: " << student.id << " sname: " << student.sname << " age: " << student.age << " sex: " << student.sex
        << " native: " << student.native << " dept: " << student.dept;
    return os;
}
