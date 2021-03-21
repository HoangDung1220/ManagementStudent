#include <iostream>
using namespace std;
class kethua
{
protected:
   int xVal,yVal;
public:
    kethua(int=0 ,int=0);

    ~kethua();
    friend ostream& operator<<(ostream&,const kethua&);
    void Show();
};

