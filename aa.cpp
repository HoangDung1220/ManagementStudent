#include <iostream>
#include "NVHD.h"
using namespace std;
template<class T> 

class aa
{
private:
    int size;
    T* data;
public:
    aa();
    void show();
    void insert (const T &);
    T& lay(int i);
};

template<class T> aa<T>::aa()
:size(0)
{
 data = new T[size];
}

template<class T> void aa<T>::insert(const T& e){
         if (this->size == 0){
            data = new T[size+1]; 
            data[size]= e;
          }
          else 
          {
             T *a = new T[size];
             for (int i=0;i<this->size;i++){
                 a[i]= this->data[i];
             }

             this->data = new T[this->size+1];
             for (int i=0;i<this->size;i++){
                 this->data[i]=a[i];
             }
             this->data[size]=e;

         }
         this->size++;
}

template<class T> T& aa<T>::lay(int i){
    return this->data[i];
}




/*template<class T> QLNV<T>::~QLNV(){
     cout<<"Huy"<<endl;
}*/

int main(){
  int *q;
  NhanVien *p = new NhanVien[10];
    
    
    NhanVien n;
    Date1 d1;
    NhanVien n1("02","My My",d1,true);

     aa<NhanVien> quanli;
     quanli.insert(n);
     quanli.insert(n1);


     quanli.lay(0).show();
     quanli.lay(1).show();
     
    
     
   
    return 0;
    


    

}