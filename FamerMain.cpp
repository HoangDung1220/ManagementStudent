#include <iostream>

#include "Famer.h"
using namespace std;
int main(){
    Famer f2;
    Famer f5;
   Famer f3("My",20);
 //  f2.show();
   f3.show();
   Famer f4 = f3;
   f4.show();
    return 0;
    
}