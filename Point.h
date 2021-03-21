#include <iostream>
using namespace std;

class Point{
    private:
      int xval;
      int yval;
    public:
      Point();
      Point(int,int);
   //   Point(const Point&);
      void show();
      friend Point operator+(const Point&,const Point&);
      Point operator+(const Point&);
      friend Point operator-(const Point&,const Point&);
      Point operator-(const Point&);
      friend Point operator*(const Point&,const Point&);
      Point operator*(const Point&);
      Point& operator++();
      const Point operator++(int);
    

};