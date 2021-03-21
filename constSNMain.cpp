#include "constSN.h"
#include <iostream>
using namespace std;
int main(){
    constSN c;
    constSN c1(100);
    constSN c2 =c1;

    constSN c3;
    c3=c1;
 /*   c.show();
    c1.show();
    c1.add();
    cout<<endl;
    c1.show();
    const constSN c3;
    cout<<"ham const"<<c1.getX()<<endl;
   // c3.show();

    */
    return 0;
}