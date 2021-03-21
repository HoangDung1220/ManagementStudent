#include "Point.h"

int main(){
    Point p1(1,2);
    Point p2(3,4);
    Point p3();
    

   /* Point p4a = p1+p2;
    Point p4b = p1.operator+(p2);
    Point p4c = operator+(p1,p2);
    cout<<"Overload +"<<endl;
    p4a.show();
    p4b.show();
    p4c.show();

    Point p5a = p1-p2;
    Point p5b =p1.operator-(p2);
    Point p5c = operator-(p1,p2);
    cout<<"Overload -"<<endl;
    p5a.show();
    p5b.show();
    p5c.show();

    Point p6a = p1*p2;
    Point p6b = p1.operator*(p2);
    Point p6c = operator*(p1,p2);
    cout<<"Overload *"<<endl;
    p6a.show();
    p6b.show();
    p6c.show();
*/
    Point p4 = ++p1;
    p1.show();
    p4.show();


    Point p5 = p1++;
    p5.show();
    p1.show();
    
}