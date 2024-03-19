
/**
 * todo
 *      to test if the StudentDao can work correctly
 */

#include "StudentDao.h"
#include "Student.h"


int main() {
//declare a studentdao
    StudentDao studentDao;

    //put the result into list
    vector<Student>slist = studentDao.GetAllStudent();

    //check every element in the list,and print
    for (Student student : slist) {
        //because studnet overwrte the "<<" operator
        //so you can use cout<<student here
        cout << student << endl;
    }

    return 0;
}
