#include "QLNV.cpp"
#include <iostream>
using namespace std;

int main(){

NVHD *q;
NVHD *q1;
NVHD q2;
NVHD q3;
NVBC p1;
NhanVien *nv;

QLNV<NhanVien> *p= new QLNV<NhanVien>;

//NVBC q1;

/*
  int check;
  
  QLNV<NVHD> NVHopDong; 
    Date1 d(20,02,2001);
    NVHD nv1("01","Hoang Dung",d,true,50,2); 

    NVHD nv2("02","Hoang Anh",d,true,10,0);

    NVHD nv3("03","Hoang",d,true,90,1);
       NVHopDong.insert(nv1);
       NVHopDong.insert(nv2);
       NVHopDong.insert(nv3);

   do{
       NVHD e;
       cin>>e;
       NVHopDong.insert(e);
       cout<<"Enter Check: ";cin>>check;
       cout<<"Please enter number 1 to stop or number 0 to continue"<<endl;
   }   while (check==0) ;
   for (int i=0;i<NVHopDong.getSize();i++){
       NVHopDong.show1(i).show();
   }
 cout<<NVHopDong.getSize();
   NVHD e;
   string idd;
   cout<<"Enter id ";std::fflush(stdin);getline(cin,idd);
   e.setId(idd);
   NVHopDong.remove(e);
cout<<"------------------------------------------"<<endl;
   
   for (int i=0;i<NVHopDong.getSize();i++){
       NVHopDong.show1(i).show();
   }
cout<<"------------------------------------------"<<endl;
cout<<NVHopDong.getSize();*/

   return 0;

}