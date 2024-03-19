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

    MYSQL_RES* res = mysql_store_result(con);

    MYSQL_ROW row;
    vector<Student>stuList;
    while ((row = mysql_fetch_row(res))) {
        Student stu;
        stu.setId(atoi(row[0]));
        stu.setSname(row[1]);
        stu.setSex(row[2]);
        stu.setAge(atoi(row[3]));
        stu.setNative(row[4]);
        stu.setDept(row[5]);
        stuList.push_back(stu);
        //        cout<<"here!"<<endl;
    }

    return stuList;

}
