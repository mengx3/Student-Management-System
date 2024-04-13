#pragma once

#include"Course.h"
#include<iostream>
#include<vector>
#include"ReadProperties.h"
#include<mysql.h>
#include"ConnectDB.h"
using namespace std;


class CourseDao
{
private:

    //个人主机的地址，一般为127.0.0.1
    char host[20];
    //数据库用户
    char user[20];
    //数据库密码，填自己的
    char pw[20];
    //数据库名称
    char dbName[20];
    //数据库端口，mysql是3306
    int port;

    //database connector
    MYSQL* con;

public:

    //Add
    int AddCourse(Course c);

    //del
    int DelCourse(int cid);

    //update
    int UpdateCourse(Course course);

    //check
    vector<Course>GetAllCourse();

    //vague check
    vector<Course>GetAllCourseByName(char* cname);


};
