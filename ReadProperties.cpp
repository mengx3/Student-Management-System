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
            //init the parameter depend on the keyName
            if (key == "port") {
                //give value to port
                //stoi function is to change a string to a int
                p = stoi(value);
            }
            else if (key == "host") {
                //give value to host
                strcpy(host, value.c_str());
            }
            else if (key == "user") {
                //give value to user
                //it always mean "root"
                //using c_str to change string in C++ to c_str in C
                strcpy(user, value.c_str());
            }
            else if (key == "pw") {
                //give value to password
                strcpy(password, value.c_str());
            }
            else {
                //give value to dbName
                strcpy(dbName, value.c_str());
            }
        }

        //dont forget to close the file
        file.close();

    }
    else {
        //filed to open the file
        printf("failed to open file!\n");
    }
}

