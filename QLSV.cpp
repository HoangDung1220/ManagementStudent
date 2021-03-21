#include <iostream>
#include "QLSV.h"
#include "SV.h"

using namespace std;
 
 
 /*SV& QLSV::operator[](const int& i){
   
   return *(this->data+i);
 }

 void QLSV::Add(const SV& s){
   if (this->n==0){
     this->data = new SV[this->n+1];
     this->data[this->n] = s;
   }
    else
   {
     SV a[this->n];
     for (int i=0;i<this->n;i++){
       a[i] = this->data[i];
     }

     this->data = new SV[this->n+1];
     for (int i=0;i<this->n;i++)
     {
       this->data[i]=a[i];
     }

     this->data[n]=s;
   }
   this->n++;
 }

ostream& operator<<(ostream& o,const QLSV& s){
  o<<"DSSV: "<<endl;
  for (int i=0;i<s.n;i++){
    o<<*(s.data+i);
  }  
  return o;
}
*/