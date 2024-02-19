#ifndef STUSYSTEMGUI_STUDENT_H
#define STUSYSTEMGUI_STUDENT_H
#include <iostream>
#include<string>
//输出流，用于重载<<运算符
#include <ostream>

using namespace std;

//学生类
class Student {
private:
    //学号
    int id;
    //学生姓名
    string sname;
    //学生年龄
    int age;
    //学生性别
    string sex;
    //学生籍贯
    string native;
    //学生的系别
    string dept;

public:
    //无参构造函数
    Student();

    //有参构造，不需要id，数据库中设置为自增了
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

    //重载==运算符，用于判断两个学生对象是否相等
    bool operator==(const Student& rhs) const;

    //重载!=运算府
    bool operator!=(const Student& rhs) const;

    //析构函数，销毁对象
    virtual ~Student();

    //重载输出<<运算府，便于直接查看学生对象
    friend ostream& operator<<(ostream& os, const Student& student);

};


#endif //STUSYSTEMGUI_STUDENT_H
