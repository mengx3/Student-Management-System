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
    
    //check if the file is open successfully
    if (file.is_open()) {
        //represent a line in file "properties.txt"
        string line;
        //using getline() function to read every line
        while (getline(file, line)) {
            //because the format in file like key=value,so we need to split them like dictionary
            string key, value;

            //get the position of '='
            int pos = line.find('=');
            //            cout<<"pos=="<<endl;

                        //the ket here is a temporary variable
                        //it represent the value in the left next to "="
            key = line.substr(0, pos);
            //the '=' should be ignored
            value = line.substr(pos + 1);
