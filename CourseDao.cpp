#include "CourseDao.h"

int CourseDao::AddCourse(Course c)
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
    sprintf(insertSql, "insert into course (name,score,value) values ('%s',%d,%d)",
        c.getName().c_str(), c.getScore(),c.getValue());

    //execute query
    if (mysql_query(con, insertSql)) {
        fprintf(stderr, "Failed to insert data :Error %s", mysql_error(con));
        printf("≤Â»Î ß∞‹£°\n");
        return 0;
    }

    return 1;
}

int CourseDao::DelCourse(int cid)
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
    sprintf(delSql, "delete from course where id = %d", cid);

    //printf("\ndelSql\n:  %s", delSql);

    //execute query
    if (mysql_query(con, delSql)) {
        fprintf(stderr, "Failed to delete data :Error %s", mysql_error(con));
        printf("…æ≥˝ ß∞‹£°\n");
        return 0;
    }

    return 1;
}

int CourseDao::UpdateCourse(Course course)
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
    sprintf(updateSql, "update course set name='%s',score=%d,value=%d where id = %d",
        course.getName().c_str(),course.getScore(),course.getValue(),course.getId());

    //execute query
    if (mysql_query(con, updateSql)) {
        fprintf(stderr, "Failed to insert data :Error %s", mysql_error(con));
        printf("≤Â»Î ß∞‹£°\n");
        return 0;
    }

    return 1;
}
