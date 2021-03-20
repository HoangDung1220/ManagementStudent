#pragma once

#include "NhanVien.h"
#include <iostream>
using namespace std;

class NVHD:public NhanVien
{
protected:
    double dayWage;
    int amountDayOff;

public:
   
    NVHD(); 
    NVHD(string,string,Date1,bool,double,int);
    int  calculateAmountDay();
    void setDayWage(double);
    double getDayWage();
    void setAmountDayOff(int);
    int getAmountDayOff();
    void show();
    void input();
    void updateInput();
    friend istream& operator>>(istream&, NVHD &);
    friend ostream& operator<<(ostream&, NVHD &);
    bool operator==(const NVHD&);
    ~NVHD();
};

