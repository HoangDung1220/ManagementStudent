#include "Date1.h"
#include <time.h>
#include <iostream>
using namespace std;

Date1::Date1(){
    time_t now = time(NULL);
    tm *t = localtime(&now);
    this->day=t->tm_mday;
    this->month=t->tm_mon+1;
    this->year= t->tm_year+1900;
}

Date1::Date1(int day,int month,int year)
{
    this->day=day;
    this->month=month;
    this->year=year;
}

void Date1::setDay(int day){
    this->day=day;
}

int Date1::getDay(){
    return day;
}

void Date1::setMonth(int month){
    this->month=month;
}

int Date1::getMonth(){
    return month;
}

void Date1::setYear(int year){
    this->year=year;
}

int Date1::getYear(){
    return year;
}

void Date1::show(){
    cout<<this->day<<"-"<<this->month<<"-"<<this->year<<" ";
}

Date1::~Date1(){
}