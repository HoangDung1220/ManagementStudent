#include "constSN.h"
#include <iostream>
using namespace std;
constSN::constSN()
:x(10)
{
    cout<<"copy"<<endl;
}

constSN::constSN(int xx)
:x(xx)
{
    
}

void const constSN::show(){
    cout<<x<<endl;
}

int constSN::getX() const {
    return x;
}

void const constSN::add(int xx){

    cout<<x+xx;

}

constSN::~constSN(){
    cout<<"Huy"<<endl;
}

