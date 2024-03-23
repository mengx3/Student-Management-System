/**
 * todo
 *      read the basic properties from file properties.txt
 *
 *
 */

#ifndef STUSYSTEMGUI_READPROPERTIES_H
#define STUSYSTEMGUI_READPROPERTIES_H
#include <fstream>
#include <iostream>
#include <string>
 //this file has function strcpy(),which can give value to cstr
#include<string.h>
using namespace std;

class ReadProperties {


public:
    //static function
    static void InitProperties(char host[], char user[], char password[], char dbName[], int& p);

};


#endif //STUSYSTEMGUI_READPROPERTIES_H
