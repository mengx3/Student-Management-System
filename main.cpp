#include <iostream>
#include <mysql.h>
#include "com/entity/Student.h"
using namespace std;

const char* host = "127.0.0.1";//主机地址
const char* user = "root";
const char* pw = "meng2003";
const char* dbName = "stusytem";
const int port = 3306;

int main() {
    MYSQL* con = mysql_init(NULL);
    mysql_options(con,MYSQL_SET_CHARSET_NAME,"GBK");
//    ConnectMysql();
    if(!mysql_real_connect(con,host,user,pw,dbName,port,NULL,0)){
        printf("Failed to connect!%s\n", mysql_errno(con));
        return -1;
    }
    char sql[256];
    Student student("学生二",28,"男","广东佛山","文学系");

    sprintf(sql,"insert into Student (sname,sex,age,native,dept) values ('%s','%s',%d,'%s','%s')",
            student.getSname().c_str(),student.getSex().c_str(),student.getAge(),student.getNative().c_str(),student.getDept().c_str());

    printf("字符串是%s\n",sql);
    if(mysql_query(con,sql)){
//        fprintf(stderr,"Failed to insert data :Error %s", mysql_error(con));
//        printf("插入失败！\n");
        return -1;
    }
    mysql_close(con);
    return 0;
}