#include "NhanVien.h"

int main(){
    NhanVien e("001","Hoang Dung",true);
    Date1 date(20,02,2001);
        NhanVien e1("002","Hoang Dung",date,true);


    cout<<e.getId()<<" "<<e.getFullname()<<" "<<e.getGender()<<endl;
        cout<<e1.getId()<<" "<<e1.getFullname()<<" "<<e1.getGender()<<" ";
        e1.getDateOfStartWork().show();



}