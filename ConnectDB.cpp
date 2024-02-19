#include "ConnectDB.h"

const char* ConnectDB::getHost() const {
    return host;
}

void ConnectDB::setHost(const char* host) {
    ConnectDB::host = host;
}

const char* ConnectDB::getUser() const {
    return user;
}

void ConnectDB::setUser(const char* user) {
    ConnectDB::user = user;
}

const char* ConnectDB::getPw() const {
    return pw;
}

void ConnectDB::setPw(const char* pw) {
    ConnectDB::pw = pw;
}

const char* ConnectDB::getDbName() const {
    return dbName;
}

void ConnectDB::setDbName(const char* dbName) {
    ConnectDB::dbName = dbName;
}

const int ConnectDB::getPort() const {
    return port;
}

MYSQL* ConnectDB::getCon() const {
    return con;
}

void ConnectDB::setCon(MYSQL* con) {
    ConnectDB::con = con;
}

ConnectDB::ConnectDB(const char* host, const char* user, const char* pw, const char* dbName, const int port) : host(host),
user(user),
pw(pw),
dbName(dbName),
port(port) {}

void ConnectDB::connect() {
    //ÉùÃ÷Êý¾Ý¿âÁ¬½ÓÖ¸Õë
    con = mysql_init(NULL);
    //ÉèÖÃ±àÂë
    mysql_options(con, MYSQL_SET_CHARSET_NAME, "GBK");

    if (!mysql_real_connect(con, host, user, pw, dbName, port, NULL, 0)) {
        printf("Failed to connect!%s\n", mysql_errno(con));
        return;
    }
}

ConnectDB::~ConnectDB() {
    mysql_close(con);
    cout << "Êý¾Ý¿âÁ¬½ÓÒÑ¾­¹Ø±Õ£¡\n";
}
