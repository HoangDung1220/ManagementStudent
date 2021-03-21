#include <iostream>
using namespace std;
class vector{
    private:
        int size;
        int *value;
    public:
        vector(int,int);
        vector();
        vector(const vector&);
        void show();
        int& operator[] (const  int&);
        ~vector();
        const vector& operator= (const vector &);
        
};