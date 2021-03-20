/*#include <iostream>
#include "NVHD.h"
#include "NVBC.h"
#include "vector"
using namespace std;


int main(){
NhanVien *p;
NhanVien *q;
NVHD k;
NVBC kk;
vector<NhanVien*> list;

q =&k;
p=q;


list.push_back(p);
p=&kk;
list.push_back(p);

NhanVien n = list.at(0);


for (int i=0;i<list.size();i++){
    list.at(i)->show();
}


}*/




#include <string>
#include <iostream>
using namespace std;

int main(){
    string st="Anh Duyen";
    string st1="Dung";

    string st2 = st.substr(3);
    cout<<st2<<endl;
    if (st>st1) cout<<st; else cout<<st1;
    //int i = st.find("ng");
    //cout<<i;
    return 0;
}