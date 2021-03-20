#include "Management.h"
#include <iostream>
#include <string>
using namespace std;
template<class Type> Management<Type>::Management(){
    this->size=0;
}

template<class Type> Management<Type>::Management(int size){
    this->size=size;
    if (this->size>=0) this->data= new Type();
    else this->data= nullptr;
}


template<class Type> Type Management<Type>::operator[](int i){
    Type p;
    if (i>=0 && i<this->size)
     return (this->data[i]); else 
     return p;
}

template<class Type> void Management<Type>::add(const Type& p){
    this->insertAt(p,this->size);
    
}

 template<class Type> void Management<Type>::insertAt(const Type & nv,int index){
     if (index>=0 && index<=this->size){
         Type *list = new Type[this->size+1];
         for (int i=0;i<index;i++)
         list[i]=this->data[i];
         list[index]=nv;
         for (int j=index;j<this->size;j++)
         list[j+1]=this->data[j];
         for (int k=0;k<this->size;k++) 
         delete[] this->data;
         this->size++; 
         this->data=list;

     }
 } 

template<class Type> void Management<Type>::removeAt(int index){

    if (index>=0 && index<this->size)
    {
        cout<<"olala"<<endl;
        for (int i=index;i<this->size;i++) 
       this->data[i]=this->data[i+1];
        this->size--;

    } 
    else 
    {
        cout<<"remove failed , index>limit"<<endl;
    }
}

template<class Type> void Management<Type>::update(const string& st){
    for (int i=0;i<this->size;i++)

    if (this->data[i]->getId()==st){
        this->data[i]->updateInput();
    }

}

template <class Type> void Management<Type>::searchName(const string & name){

    for (int i=0;i<this->size;i++)
        if (this->data[i]->getFullname().find(name)!=-1) this->data[i]->show();
    
   
}



template<class Type> void Management<Type>::show1(){
    for (int i=0;i<this->size;i++){
         this->data[i]->show();    
}

}

template<class Type> int Management<Type>::getSize(){
    return this->size;
}

template<class Type> void Management<Type>::sort(bool Comfunc(string,string)){

    for (int i=0;i<this->size-1;i++)
    for (int j=i+1;j<this->size;j++){
    if (Comfunc(this->data[i]->getFullname(),this->data[j]->getFullname())){
        Type tam;
        tam=this->data[i];
        this->data[i]=this->data[j];
        this->data[j]=tam;
    }
    }
}

template<class Type> void Management<Type>::searchAt(const string & idd){
    int check=0,vt;
    for (int i=0;i<this->size;i++)
    if (this->data[i]->getId()==idd){
        check=1;
        vt =i;
    } 
    cout<<endl;
    if (check==1)
    cout<<"Index of id :"<<vt;
    else 
    cout<<"Non-exits"<<endl;
}

template<class Type> void Management<Type>::checkUniqueID(const string idd){
        int kt =1;
        for (int i=0;i<this->size;i++){
        if (this->data[i]->getId()==idd) kt =0;
        }

        if (kt==0){
            throw "ID is existed. Please enter ID again.. ";
        }
    }