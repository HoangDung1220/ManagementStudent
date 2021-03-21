#include <iostream>
using namespace std;
class number{
private :
    double data;
public:
    number();
    number(double);
    friend number& operator+(const number &,const number &);
    number& operator-(const number&);
    
    ~number();



};