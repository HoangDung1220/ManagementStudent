#include "array.h"

array::array(int m){
    this->size = m;
    this->data = new int[this->size];
    for (int i=0;i<this->size;i++){
        *(this->data+i)=i;
    }
}

int& array::operator[](const int & i){
    int m = 1000000;
    return (i>=0&&this->size>i)?*(this->data+i):m;
}

array::array(const array& a){
    cout<<"COPY: "<<endl;
    this->size = a.size;
    this->data = new int [this->size];
    for (int i=0;i<this->size;i++){
        this->data[i]=a.data[i];
    }
}

/*const array& array::operator=(const array& a){
    cout<<"=: "<<endl;
    this->size = a.size;
    this->data = new int [this->size];
    for (int i=0;i<this->size;i++){
        this->data[i]=a.data[i];
    }
    return *this;
}
*/
ostream& operator<<(ostream& o, const array & a){
    for (int i=0;i<a.size;i++){
        o<<a.data[i]<<" ";
    }
    o<<endl;
    return o;
}

array::~array(){
    cout<<"Huy";
    delete []this->data;
}

void array::show(){
    for (int i =0;i<this->size;i++){
        cout<<(*this)[i];
    }
}