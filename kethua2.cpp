#include "kethua2.h"

kethua2::kethua2(kethua& k)

{

}

kethua2::kethua2(int x,int y,int z)
:kethua(x,y)
{
    
    this->zVal=z;
    //this->xVal =x;
    //this->yVal =y;
}

void kethua2::show(){
   //this->Show();
    cout<<xVal<<" "<<yVal<<" "<<zVal<<endl;
   // cout<<zVal<<endl;
}

kethua2::~kethua2(){
    cout<<"Huy 2"<<endl;
}

void kethua2::Show(){
    cout<<xVal<<" "<<yVal<<" "<<zVal;
}