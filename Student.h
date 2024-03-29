#ifndef STUSYSTEMGUI_STUDENT_H
#define STUSYSTEMGUI_STUDENT_H
#include <iostream>
#include<string>
// ‰≥ˆ¡˜£¨”√”⁄÷ÿ‘ÿ<<‘ÀÀ„∑˚
#include <ostream>

using namespace std;

//—ß…˙¿‡
class Student {
private:
    //—ß∫≈
    int id;
    //—ß…˙–’√˚
    string sname;
    //—ß…˙ƒÍ¡‰
    int age;
    //—ß…˙–‘±
    string sex;
    //—ß…˙ºÆπ·
    string native;
    //—ß…˙µƒœµ±
    string dept;

public:
    //Œﬁ≤Œππ‘Ï∫Ø ˝
    Student();

    //”–≤Œππ‘Ï£¨≤ª–Ë“™id£¨ ˝æ›ø‚÷–…Ë÷√Œ™◊‘‘ˆ¡À
    Student(const string& sname, int age, const string& sex, const string& native, const string& dept);

    //
    int getId() const;

    void setId(int id);

    const string& getSname() const;

    void setSname(const string& sname);

    int getAge() const;

    void setAge(int age);

    const string& getSex() const;

    void setSex(const string& sex);

    const string& getNative() const;

    void setNative(const string& native);

    const string& getDept() const;

    void setDept(const string& dept);

    //÷ÿ‘ÿ==‘ÀÀ„∑˚£¨”√”⁄≈–∂œ¡Ω∏ˆ—ß…˙∂‘œÛ «∑Òœ‡µ»
    bool operator==(const Student& rhs) const;

    //÷ÿ‘ÿ!=‘ÀÀ„∏Æ
    bool operator!=(const Student& rhs) const;

    //Œˆππ∫Ø ˝£¨œ˙ªŸ∂‘œÛ
    virtual ~Student();

    //÷ÿ‘ÿ ‰≥ˆ<<‘ÀÀ„∏Æ£¨±„”⁄÷±Ω”≤Èø¥—ß…˙∂‘œÛ
    friend ostream& operator<<(ostream& os, const Student& student);

    //get the student string
    string toString();
};


#endif //STUSYSTEMGUI_STUDENT_H
