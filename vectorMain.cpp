#include <iostream>
#include "vector.h"
using namespace std;

int main(){
    vector v1(3,2);
    v1.show();
    for (int i=1;i<=3;i++) cout<<v1[i]<<" ";
    vector v2(v1);
    vector v3=v1;
    vector v4;
    v4=v1;
    return 0;
}