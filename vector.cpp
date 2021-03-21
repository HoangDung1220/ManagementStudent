#include "vector.h"

vector::vector(){

}

vector::vector(int size,int data){
    this->size=size;
    this->value= new int[this->size];
    for (int i=1;i<=this->size;i++) {
        *(this->value+i)=data;
    }

}

void vector::show(){
    for (int i=1;i<=this->size;i++){
        cout<<*(this->value+i)<<" ";
    }
    cout<<endl;
}

int& vector::operator[](const int& i){
    int tam=0;
    return (i>=1 && i<=this->size)?*(this->value+i):tam;
}

vector::~vector(){
    cout<<"Huy";
}

vector::vector(const vector & v){
     cout<<"copy"<<endl;
    this->size=v.size;
    this->value= new int [this->size];
    for (int i=0;i<v.size;i++){
        (*this)[i]=*(v.value+i);
    }
}

const vector& vector::operator=(const vector & v){
    cout<<"="<<endl;
    this->size=v.size;
    this->value= new int [this->size];
    for (int i=0;i<v.size;i++){
        (*this)[i]=*(v.value+i);
    }
    return (*this);
}