#include <iostream>
using namespace std;
class array
{
private:
    int size;
    int *data;
    static int maloc;
public:
    array(int =0);
    array(const array&);
    void show();
    int& operator[](const int&);
    //const array &operator=(const array&); 
    friend ostream& operator<<(ostream &, const array&);
    
    ~array();
};

