#include <iostream>
#include "NVHD.h"
using namespace std;

template<class Type>
class test
{
private:
    Type *a;
    int size;
  
public:
  test();
  void show();
  ~test();
};

template<class T> test<T>::test()
{
  this->size=0;
  
}

template<class T> void test<T>::show(){
  cout<<this->size<<endl;
}

template<class T> test<T>::~test()
{
   cout<<"Huy"<<endl;  
}

int main(){
  test<NVHD> t;
  t.show();
  return 0;
}
