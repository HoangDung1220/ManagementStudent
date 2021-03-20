#pragma once
class Date1
{
private:
    int year;
    int month;
    int day;
public:
    Date1();
    Date1(int,int,int);
    int getYear();
    void setYear(int);
    int getMonth();
    void setMonth(int);
    int getDay();
    void setDay(int);
    void show();
    ~Date1();
};

