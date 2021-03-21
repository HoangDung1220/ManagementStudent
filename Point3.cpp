#include "Point3.h"

Point3::Point3(int x,int y,int z)
:Point(x,y)
{
    this->zVal=z;
}

Point3::~Point3(){
    cout<<"Huy Point3"<<endl;
}

void Point3::Show(){
    cout<<this->xVal<<" "<<this->yVal<<" "<<this->zVal<<endl;

}
