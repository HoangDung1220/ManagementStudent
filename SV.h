#include <iostream>
using namespace std;
class SV{
    private:
        int maSV;
        int age;
        double markAvr;
    public:
        SV();
        SV(int,int,double);
        friend ostream& operator<<(ostream&, const SV& );
        ~SV();

};