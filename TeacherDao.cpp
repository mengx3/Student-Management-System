#include "TeacherDao.h"

int TeacherDao::AddTeacher(Teacher t)
{


    //declare a sql  sentence
    char insertSql[256];

    ReadProperties::InitProperties(host, user, pw, dbName, port);

    //    cout<<"come to here!"<<endl;

    ConnectDB connectDb(host, user, pw, dbName, port);
    connectDb.connect();

    MYSQL* con = connectDb.getCon();

    //    cout<<"come to here!"<<endl;

        //using sprintf to init sql
    sprintf(insertSql, "insert into teacher (tname,sex,age,title,salary,coid) values ('%s','%s',%d,'%s',%d,%d)",
        t.getTname().c_str(), t.getSex().c_str(), t.getAge(), t.getTitle().c_str(), t.getSalary(),t.getCoid());

    //execute query
    if (mysql_query(con, insertSql)) {
        fprintf(stderr, "Failed to insert data :Error %s", mysql_error(con));
        printf("²åÈëÊ§°Ü£¡\n");
        return 0;
    }

    return 1;
}

int TeacherDao::DelTeacher(int tid)
{



    //declare a sql  sentence
    char delSql[256];

    ReadProperties::InitProperties(host, user, pw, dbName, port);

    //    cout<<"come to here!"<<endl;

    ConnectDB connectDb(host, user, pw, dbName, port);
    connectDb.connect();

    MYSQL* con = connectDb.getCon();

    //    cout<<"come to here!"<<endl;

        //using sprintf to init sql
    sprintf(delSql, "delete from teacher where tid = %d", tid);

    //printf("\ndelSql\n:  %s", delSql);

    //execute query
    if (mysql_query(con, delSql)) {
        fprintf(stderr, "Failed to delete data :Error %s", mysql_error(con));
        printf("É¾³ýÊ§°Ü£¡\n");
        return 0;
    }

    return 1;
}

int TeacherDao::UpdateTeacher(Teacher t)
{

    //declare a sql  sentence
    char updateSql[256];

    ReadProperties::InitProperties(host, user, pw, dbName, port);

    //    cout<<"come to here!"<<endl;

    ConnectDB connectDb(host, user, pw, dbName, port);
    connectDb.connect();

    MYSQL* con = connectDb.getCon();

    //    cout<<"come to here!"<<endl;

        //using sprintf to init sql
    sprintf(updateSql, "update teacher set tname='%s',sex='%s',age=%d,title='%s',salary=%d,coid=%d where tid = %d",
        t.getTname().c_str(), t.getSex().c_str(), t.getAge(), t.getTitle().c_str(), t.getSalary(), t.getCoid(),t.getTid());

    //execute query
    if (mysql_query(con, updateSql)) {
        fprintf(stderr, "Failed to insert data :Error %s", mysql_error(con));
        printf("²åÈëÊ§°Ü£¡\n");
        return 0;
    }

    return 1;

}

