/**
 * todo
 *      communicate with the database in table 'student'
 *
 */
#ifndef STUSYSTEMGUI_STUDENTDAO_H
#define STUSYSTEMGUI_STUDENTDAO_H

#include "ConnectDB.h"
#include "Student.h"
#include "ReadProperties.h"
#include <mysql.h>
#include<vector>


class StudentDao {

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

    //getAllStudent function
    vector<Student>GetAllStudent();

    //AddStudent function
    int AddStudent(Student student);

    //Delete function
    int DelStudent(int id);

    //update function
    int UpdateStudent(Student student);

    //get Student by name
    vector<Student> CheckByName(char name[]);

};

#endif //STUSYSTEMGUI_STUDENTDAO_H

