#pragma once

#include"Deptartment.h"
#include<vector>
#include"ReadProperties.h"
#include<mysql.h>
#include"ConnectDB.h"

class DeptDao
{

private:

    //local host 127.0.0.1
    char host[20];
    //user
    char user[20];
    //password
    char pw[20];
    //name of the database
    char dbName[20];
    //port 3306
    int port;

    //database connector
    MYSQL* con;

public:

    //Add
    int AddDept(Deptartment d);

    //del
    int DelDept(string did);

    //update
    int UpdateCourse(Deptartment dept);

    //check
    vector<Deptartment>GetAllDepts();

    //vague check
    vector<Deptartment>GetAllDeptsByName(char* cname);

};

