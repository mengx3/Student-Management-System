#include<mysql.h>
#include<iostream>
using namespace std;

#ifndef STUSYSTEMGUI_CONNECTDB_H
#define STUSYSTEMGUI_CONNECTDB_H


class ConnectDB {

private:
    //Ö÷»úµØÖ·
    const char* host = "127.0.0.1";
    //Êý¾Ý¿âÓÃ»§
    const char* user = "root";
    //Êý¾Ý¿âÃÜÂë£¬Ìî×Ô¼ºµÄ
    const char* pw = "meng2003";
    //Êý¾Ý¿âÃû³Æ
    const char* dbName = "stusystem";
    //Êý¾Ý¿â¶Ë¿Ú£¬mysqlÊÇ3306
    const int port = 3306;
    //»ñÈ¡µ½µÄÊý¾Ý¿âÁ¬½Ó
    MYSQL* con = NULL;

public:

    const char* getHost() const;

    void setHost(const char* host);

    const char* getUser() const;

    void setUser(const char* user);

    const char* getPw() const;

    void setPw(const char* pw);

    const char* getDbName() const;

    void setDbName(const char* dbName);

    const int getPort() const;

    MYSQL* getCon() const;

    void setCon(MYSQL* con);

    ConnectDB(const char* host, const char* user, const char* pw, const char* dbName, const int port);

    //ºËÐÄº¯Êý£¬Á¬½ÓÊý¾Ý¿â
    void connect();

    //Îö¹¹º¯Êý
    ~ConnectDB();
};
