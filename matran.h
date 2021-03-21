#include <iostream>
using namespace std;

class matran{
    private:
    int **data;
    int row;
    int col;

    public:
    matran(int=0,int=0);
    void show();
    int& operator()(const int&,const int&);
    ~matran();

};