#pragma once

#include "NhanVien.h"
#include <iostream>
using namespace std;
class NVBC: public NhanVien
{
protected:
    double coefficientSalary;
    double seniority;

public:
    NVBC();
    NVBC(string,string,Date1,bool,double);
    void setCoefficientSalary(double);
    double getCoefficientSalary();
    void setSeniority(double);
    double getSeniority();
    void updateInput();
    void input();
    friend istream& operator>>(istream&,NVBC&);
    void show();
    friend ostream& operator<<(ostream&,NVBC&);
    

    ~NVBC();
};

