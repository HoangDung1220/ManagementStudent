#pragma once
#include <iostream>
#include "Date1.h"
using namespace std;

class NhanVien
{
protected:
    string id;
    string fullname;
    Date1 dateOfStartWork;
    bool gender;
    double salary;
public:
    NhanVien();
    NhanVien(string,string,Date1,bool);
    void setId(string);
    string getId();
    void setFullname(string);
    string getFullname();
    void setDateOfStartWork(Date1);
    Date1 getDateOfStartWork();
    void setGender(bool);
    bool getGender();
    void setSalary(double);
    double getSalary();
    virtual void input();
    virtual void show();
    virtual void updateInput();
    friend iostream& operator<<(istream&,NhanVien&);
    ~NhanVien();
};
