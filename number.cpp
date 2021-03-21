#include "number.h"


number::number(){

}

number::number(double x):
data(x)
{

}


number & number::operator-(const number &n){
    return (number) this->data-n.data;
}

number& operator+(const number& a,const number& b){
    return (number) a.data+b.data;
}

number::~number(){
    cout<<"Huy"<<endl;
}