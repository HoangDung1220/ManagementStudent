#include "kethua.h"
#include <iostream>
using namespace std;


kethua::kethua(int x,int y)
:xVal(x),yVal(y)
{

}

void kethua::Show(){
    cout<<xVal<<" "<<yVal<<endl;
}

kethua::~kethua(){
    cout<<"Huy "<<endl;
}

ostream& operator<<(ostream & o,const kethua& p){
    o<<p.xVal<<" "<<p.yVal;
    return o;
}