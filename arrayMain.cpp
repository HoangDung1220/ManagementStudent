#include "array.h"

int main(){
    array a(5);
    cout<<"A1"<<endl;
    array a1=a;
    cout<<"A2"<<endl;
    array a2;
    a2=a;
    cout<<"a3"<<endl;
    array a3(a2);
    cout<<a[3]<<endl;
    cout<<a.operator[](2);
    array a4;
    a4.operator=(a1);
    cout<<"Hello world"<<endl;
    cout<<a1<<a2<<a3<<a4<<"Hello word";
    operator<<(cout,a4)<<endl;
    array a6;
    array a7(3);
    return 0;


}
