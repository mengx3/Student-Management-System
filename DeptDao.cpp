#include "DeptDao.h"

int DeptDao::AddDept(Deptartment d)
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
    sprintf(insertSql, "insert into department (did,name,director,capcity,num) values ('%s','%s','%s',%d,%d)",
        d.getDid().c_str(),d.getName().c_str(),d.getDirector().c_str(),d.getCapcity(),d.getNum());

    //execute query
    if (mysql_query(con, insertSql)) {
        fprintf(stderr, "Failed to insert data :Error %s", mysql_error(con));
        printf("fail！\n");
        return 0;
    }

    return 1;
}

int DeptDao::DelDept(string did)
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
    sprintf(delSql, "delete from department where did = '%s'", did.c_str());

    //printf("\ndelSql\n:  %s", delSql);

    //execute query
    if (mysql_query(con, delSql)) {
        fprintf(stderr, "Failed to delete data :Error %s", mysql_error(con));
        printf("fail！\n");
        return 0;
    }

    return 1;
}

int DeptDao::UpdateCourse(Deptartment dept)
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
    sprintf(updateSql, "update department set name='%s',director='%s',capcity=%d,num=%d where did='%s'",
        dept.getName().c_str(), dept.getDirector().c_str(), dept.getCapcity(), dept.getNum(), dept.getDid().c_str());

    //execute query
    if (mysql_query(con, updateSql)) {
        fprintf(stderr, "Failed to insert data :Error %s", mysql_error(con));
        printf("fail！\n");
        return 0;
    }

    return 1;
}

vector<Deptartment> DeptDao::GetAllDepts()
{
    vector<Deptartment>dList;

    //declare a sql  sentence
    char sql[256];

    ReadProperties::InitProperties(host, user, pw, dbName, port);

    //    cout<<"come to here!"<<endl;

    ConnectDB connectDb(host, user, pw, dbName, port);
    connectDb.connect();

    MYSQL* con = connectDb.getCon();

    //    cout<<"come to here!"<<endl;

        //using sprintf to init sql
    sprintf(sql, "select * from department");

    //execute query
    if (mysql_query(con, sql)) {
        fprintf(stderr, "Failed to query data :Error %s", mysql_error(con));
        printf("fail！\n");
        return vector<Deptartment>();
    }

    MYSQL_RES* res = mysql_store_result(con);

    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {

        Deptartment dept;
        dept.setDid(row[0]);
        dept.setName(row[1]);
        dept.setDirector(row[2]);
        dept.setCapcity(atoi(row[3]));
        dept.setNum(atoi(row[4]));
        dList.push_back(dept);
    }

    return dList;
}
