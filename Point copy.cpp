#include "Point.h"
Point::Point(int x,int y)
:xVal(x),yVal(y){

}
Point::~Point(){
    cout<<"huy"<<endl;
}

void Point::show(){
    cout<<xVal<<" "<<yVal<<endl;

}

ostream& operator<<(ostream& o,const Point& p){
    o<<p.xVal<<" "<<p.yVal<<endl;
    return o;
}
