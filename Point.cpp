#include "Point.h"

Point::Point(){

}

Point::Point(int x,int y)
: xval(x),yval(y){

}

/*Point::Point()
: xval(1),yval(1){

}*/

void Point::show(){
  //  cout<<"Show...."<<endl;
    cout<<this->xval<<" "<<this->yval<<endl;
} 

Point operator+(const Point& p1, const Point& p2){
    return Point(p1.xval+p2.xval,p1.yval+p2.yval);

}

Point Point::operator+(const Point& p){
    return Point(p.xval+this->xval,p.yval+this->yval);
}

Point operator-(const Point& p1,const Point &p2){
    return Point(p1.xval-p2.xval,p1.yval-p2.yval);
}

Point Point::operator-(const Point &p){
    return Point(this->xval-p.xval,this->yval-p.yval);
}

Point operator*(const Point& p1, const Point& p2){
    return Point(p1.xval*p2.xval,p1.yval*p2.yval);

}

Point Point::operator*(const Point& p){
    return Point(p.xval*this->xval,p.yval*this->yval);
}


Point& Point::operator++(){
    this->xval++;
    this->yval++;
    return (*this);
}

const Point Point::operator++(int){
    Point before = (*this);
    this->xval++;
    this->yval++;
    return before;
}