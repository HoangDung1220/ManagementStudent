#include "NVHD.h"
#include <iostream>
using namespace std;

int main(){
    Date1 d(20,02,2001);
    NVHD nv("01","HoangDung",d,true,20,2);
    NVHD n;
    n.show();
    nv.show();
    
    return 0;
}