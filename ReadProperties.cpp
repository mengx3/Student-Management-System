/**
 *
 * the parameter p here must using int &p
 *  using & in c++ grammar mean you want to change the real parameter
 */

#include "ReadProperties.h"


 //read properties from file
void ReadProperties::InitProperties(char* host, char* user, char* password, char* dbName, int& p) {

    //declare and open the file
    fstream file(R"(D:\C++file\StuSystemGui\com\properties.txt)", ios::in);
