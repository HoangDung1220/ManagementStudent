#include <iostream>
#include "Student.h"
using namespace std;

class ManagementSt{
    private:
       int size;
       Student *data;
    public:
        ManagementSt();
        void add(const Student & );
      //  friend ostream& operator<<(ostream& ,const Student &);

};