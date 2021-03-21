#include "ManagementSt.h"
#include "Student.h"
#include <iostream>
using namespace std;

ManagementSt::ManagementSt(){
  this->size=0;
}

void ManagementSt::add(const Student &s){
    if (this->size==0){
        this->data = new Student[this->size+1];
        this->data[size]=s;
    }
    else{
        Student a[this->size];
     for (int i=0;i<this->size;i++){
       a[i] = this->data[i];
     }

     this->data = new Student[this->size+1];
     for (int i=0;i<this->size;i++)
     {
       this->data[i]=a[i];
     }

     this->data[size]=s;
   }
   this->size++;
    
}