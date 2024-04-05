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


Student::Student() {
    //ƒ¨»œ–¥Œ™0£¨≤Â»Î ˝æ›ø‚÷–ª·◊‘‘ˆ
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
    //cout << "—ß…˙" << this->sname << " has been destroyed" << endl;
}

string Student::toString()
{
    char stuString[512];
    sprintf(stuString, "%d\t%s\t%s\t%d\t%s\t%s",id,sname.c_str(), sex.c_str(), age, native.c_str(), dept.c_str());
    return string(stuString);
}

Student Student::StringToStu(string str)
{

    Student s;
    stringstream ss(str);
    ss >> s.sname >> s.sex >> s.age >> s.native >> s.dept;
    return s;

}

ostream& operator<<(ostream& os, const Student& student) {
    os << "id: " << student.id << " sname: " << student.sname << " age: " << student.age << " sex: " << student.sex
        << " native: " << student.native << " dept: " << student.dept;
    return os;
}

Student::Student(const string& sname, int age, const string& sex, const string& native, const string& dept) : sname(
    sname), age(age), sex(sex), native(native), dept(dept) {
    id = 0;
}

