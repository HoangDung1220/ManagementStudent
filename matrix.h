#include <iostream>
using namespace std;

class matrix{
    private:
        int col;
        int row;
        int **data;
    public:
        matrix();
        matrix(int,int,int);
        void show();
        int& operator [](const int&);
        friend ostream& operator<<(ostream&, const matrix&) ;
        int& operator()(const int&, const int& ) ;


        ~matrix();
};