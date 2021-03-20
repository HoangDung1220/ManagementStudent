#include "NVHD.h"
#include "QLNV.h"
#include "NVBC.h"
#include <iostream>
using namespace std;

template<class T> QLNV<T>::QLNV()
:size(0),data(nullptr)
{

}

template<class T> void QLNV<T>::insert(const T& e){
         if (this->size == 0){
             this->data = new T[size+1];
             this->data[size]=e;
         } else 
         {
             T *a = new T[size];
             for (int i=0;i<this->size;i++){
                 a[i]= this->data[i];
             }

             this->data = new T[size+1];
             for (int i=0;i<this->size;i++){
                 this->data[i]=a[i];
             }
             this->data[size]=e;

         }
         this->size++;
}

template<class T> void QLNV<T>::remove(const T& nv){
   int kq=-1;
   for (int i=0;i<this->size;i++){
       if (this->data[i]==nv){
          kq=i;
       }
       }
       if (kq!=-1){
           cout<<kq<<endl;
           this->size--;
           for (int i=kq;i<this->size;i++)
           this->data[i]=this->data[i+1];
       } else {
           cout<<"NV unvaliable"<<endl;
       }
   


}
template<class T>
T& QLNV<T>::show1(int i){
    
     return this->data[i];
    
}

template<class T>
int QLNV<T>::getSize(){
    return size;
}




template<class T> QLNV<T>::~QLNV(){
     cout<<"Huy"<<endl;
}
/*
default private
*/
