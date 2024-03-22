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

int StudentDao::AddStudent(Student student) {


    //declare a sql  sentence
    char insertSql[256];

    ReadProperties::InitProperties(host, user, pw, dbName, port);

    //    cout<<"come to here!"<<endl;

    ConnectDB connectDb(host, user, pw, dbName, port);
    connectDb.connect();

    MYSQL* con = connectDb.getCon();

    //    cout<<"come to here!"<<endl;
        //using sprintf to init sql
    sprintf(insertSql, "insert into student (sname,sex,age,native,dept) values ('%s','%s',%d,'%s','%s')",
        student.getSname().c_str(), student.getSex().c_str(), student.getAge(), student.getNative().c_str(), student.getDept().c_str());

    //execute query
    if (mysql_query(con, insertSql)) {
        fprintf(stderr, "Failed to insert data :Error %s", mysql_error(con));
        printf("≤Â»Î ß∞‹£°\n");
        return 0;
    }

    return 1;
}

int StudentDao::DelStudent(int id) {


    //declare a sql  sentence
    char delSql[256];

    ReadProperties::InitProperties(host, user, pw, dbName, port);

    //    cout<<"come to here!"<<endl;

    ConnectDB connectDb(host, user, pw, dbName, port);
    connectDb.connect();
}
