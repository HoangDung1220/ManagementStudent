#pragma once
#include "NVHD.h"
#include "NVBC.h"

template<class Type>
class Management
{
private:
    int size;
    Type *data;
public:
    Management();
    Management(int);
    void add(const Type& );
    void show1();
    void removeAt(int );
    void remove(const string&);
    int getSize();
    void update(const string& );
    Type operator[] (int );
    void searchName(const string &);
    void sort(bool Comfunc(string,string));
    void insertAt(const Type&,int );
    void searchAt(const string &);
    void checkUniqueID(const string idd);
};

