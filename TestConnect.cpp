#include <iostream>
#include <mysql.h>
#include "Student.h"
#include "ConnectDB.h"
#include <vector>

using namespace std;



//主机地址
const char* host = "127.0.0.1";
//数据库用户
const char* user = "root";
//数据库密码，填自己的
const char* pw = "meng2003";
//数据库名称
const char* dbName = "stusystem";
//数据库端口，mysql是3306
const int port = 3306;

int main() {

    //测试插入sql
    char insertSql[256];

    //    Student student("学生二",19,"男","广西桂平","文学系");
    //
    // 为sql赋值
    //    sprintf(insertSql,"insert into Student (sname,sex,age,native,dept) values ('%s','%s',%d,'%s','%s')",
    //            student.getSname().c_str(),student.getSex().c_str(),student.getAge(),student.getNative().c_str(),student.getDept().c_str());

    //    printf("插入字符串是%s\n",insertSql);
    //声明连接数据库对象
    ConnectDB connectDb(host, user, pw, dbName, port);
    //连接数据库
    connectDb.connect();
    //得到数据库
    MYSQL* con = connectDb.getCon();
    //    if(mysql_query(con,insertSql)){
    //        fprintf(stderr,"Failed to insert data :Error %s", mysql_error(con));
    //        printf("插入失败！\n");
    //        return -1;
    //    }

        //测试更新学生
    //    char updateSql[256];
    //    Student student("学生二",19,"男","江苏盐城","英语系");
    //    student.setId(22);
    //
    //     // 为sql赋值
    //    sprintf(updateSql,"update student set sname='%s',sex='%s',age=%d,native='%s',dept='%s' where id=%d",
    //            student.getSname().c_str(),student.getSex().c_str(),student.getAge(),student.getNative().c_str(),student.getDept().c_str(),student.getId());
    //
    //    printf("更新字符串是%s\n",updateSql);
    //
    //    if(mysql_query(con,updateSql)){
    //        fprintf(stderr,"Failed to update data :Error %s", mysql_error(con));
    //        printf("更新失败！\n");
    //        return -1;
    //    }
    //
    //    //删除
    //    char delSql[256];
    //     // 为sql赋值
    //    sprintf(delSql,"delete from student where id = %d",21);
    //    printf("删除字符串是%s\n",delSql);
    //
    //    if(mysql_query(con,delSql)){
    //        fprintf(stderr,"Failed to delete data :Error %s", mysql_error(con));
    //        printf("删除失败！\n");
    //        return -1;
    //    }
        //查询

    char quereSql[256];
    //全部查询
    sprintf(quereSql, "select * from student");
    if (mysql_query(con, quereSql)) {
        fprintf(stderr, "Failed to query data :Error %s", mysql_error(con));
        printf("查询失败！\n");
        return -1;
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
    }
    for (Student s : stuList) {
        cout << s << endl;
    }
    //    mysql_close(con);
    return 0;
}
