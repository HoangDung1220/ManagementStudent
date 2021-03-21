#include <iostream>
using namespace std;

class Set
{
    private:
        int *p;
        int max;
        int card;
    public:
        Set(const int size)
        {

        }
        ~Set()
        {
            delete[] p;
            cout<<"Huy"<<endl;
        }
};

Set Test(Set s1)
{
   // Set *s = new Set(50);
    return s1;
}
int main()
{
    Set s1(40), s2(50);
    //s2= Test(s1);
    s1 = Test(s1);
}

 
