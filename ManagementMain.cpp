#include "Management.cpp"
#include <iostream>
using namespace std;
int main(){

Management<NhanVien*> list(0);
int choice=1;
NhanVien *p;
do{
  p = new NVBC;
  p->input();
  list.insert(p);
 cout<<"choice= ";cin>>choice;
} while (choice!=0);
list.show1();
    /*NhanVien *p;
  NVHD e;
  cin>>e;
   p= &e;
   list.insert(p);
   p->show();
   list.show1();

   NVBC e1;
   cin>>e1;
   p= &e1;
   list.insert(p);
   p->show();
   list.show1();*/


   /* 
  //  p = new NVHD;
  //  list.insert(p);

    p = new NVHD;
  
    
    list.insert(p);
    p = new NVBC();
    list.insert(p);

    Date1 d(10,2,2001);
     NVBC a("001","Hoang Dung",d,true,2.9f);

     p=&a;
     list.insert(p);
    cout<<list.getSize();
    list.show1();
    
  
    
    cout<<"Hello"<<endl;

    NVHD e;
    cin>>e;
    p=&e;
    list.insert(p);*/
    
    

    












    
   /* Date1 d(20,02,2020);
   NVHD n ("NV001","Dung",d,true,9,3);
    Management<NhanVien*> list;
    NhanVien *p;

    p=&n;
    list.insert(p,0);
    p->show();

    NVBC np;
    p=&np;
    list.insert(p,1);
    p->show();
    cout<<"Mang"<<endl;*/
   
   
  /* for (int i=0;i<list.getSize();i++){  
        list[i]->show();
        cout<<endl;

    }*/
  //  list.show1();
 return 0;    
}