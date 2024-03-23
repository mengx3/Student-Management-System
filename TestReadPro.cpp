#include "ReadProperties.h"

/*
 * todo
 *      to test if the ReadProperties can work correctly
 *
 */

int main(){
    //declare 3 string
    char a[30],b[30],c[30],d[30];
    //port
    int e;
    ReadProperties::InitProperties(a,b,c,d,e);
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
    return 0;
}
