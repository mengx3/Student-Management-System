#include "StudentDao.h"

vector<Student> StudentDao::GetAllStudent() {

    //declare a sql  sentence
    char sql[256];

    ReadProperties::InitProperties(host, user, pw, dbName, port);

    //    cout<<"come to here!"<<endl;

    ConnectDB connectDb(host, user, pw, dbName, port);
    connectDb.connect();

    MYSQL* con = connectDb.getCon();
    //    cout<<"come to here!"<<endl;

        //using sprintf to init sql
    sprintf(sql, "select * from student");

    //execute query
    if (mysql_query(con, sql)) {
        fprintf(stderr, "Failed to query data :Error %s", mysql_error(con));
        printf("≤È—Ø ß∞‹£°\n");
        return vector<Student>();
    }

}
