#pragma once
/*
the class is to operate the database
*/

#include"Teacher.h"
#include<iostream>
#include<vector>
#include"ReadProperties.h"
#include<mysql.h>
#include"ConnectDB.h"

using namespace std;

class TeacherDao
{
private:


    //local host adress
    char host[20];
    //database user
    char user[20];
    //password
    char pw[20];
    //database name
    char dbName[20];
    //database port
    int port;

    //database connector
    MYSQL* con;


public:



	/*Add the teacher*/
	int AddTeacher(Teacher t);


	/* Del the teacher by tid*/
	int DelTeacher(int tid);

	/*Update the teacher by teacher object*/
	int UpdateTeacher(Teacher t);

    //*select all the teacher*/
    vector<Teacher>GetAllTeachers();


	/*select the teacher by tname (vague select)*/
	vector<Teacher> GetTeacherByTname(char *tname);

};

