#include <iostream>
using namespace std;
class Point
{
protected:
    int xVal;
    int yVal;
public:
    
    Point(int=0,int=0);
    void show();
    friend ostream& operator<<(ostream&,const Point &);
    ~Point();

};