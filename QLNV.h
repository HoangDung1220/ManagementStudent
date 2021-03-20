#pragma once

#include <iostream>
using namespace std;
template<class T> 
class QLNV      
{
private:
    int size;
    T* data;
public:
    QLNV();
    void insert(const T&);
    void remove(const T&);
    T& show1(int );
    int getSize();
    ~QLNV();
};

