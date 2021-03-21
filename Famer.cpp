#include "Famer.h"

Famer::Famer(){
  // cout<<"Ham duoc tao"<<endl;
}

Famer::Famer(string a,int b){
    this->name=a;
    this->age=b;
}

void Famer::show(){
    cout<<age<<" "<<name<<endl;
}

Famer::~Famer(){

    cout<<"Huy"<<endl;
}

