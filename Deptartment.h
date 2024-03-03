
#ifndef STUSYSTEMGUI_DEPTARTMENT_H
#define STUSYSTEMGUI_DEPTARTMENT_H
#include<iostream>
using namespace std;


class Deptartment {

private:

    //系id
    int did;

    //系名
    string name;

    //系主任
    string director;

    //系容量
    int capcity;
    //
    //现有容量
    int num;

public:
    //构造函数，did自增
    Deptartment(const string& name, const string& director, int capcity, int num);

    //无参构造
    Deptartment();

    int getDid() const;

    void setDid(int did);

    const string& getName() const;

    void setName(const string& name);

    const string& getDirector() const;

    void setDirector(const string& director);

    int getCapcity() const;

    void setCapcity(int capcity);

    int getNum() const;

    void setNum(int num);

    //重载==运算符
    bool operator==(const Deptartment& rhs) const;

    //重载!=运算符
    bool operator!=(const Deptartment& rhs) const;

    //重载<<
    friend ostream& operator<<(ostream& os, const Deptartment& deptartment);
};


#endif //STUSYSTEMGUI_DEPTARTMENT_H
