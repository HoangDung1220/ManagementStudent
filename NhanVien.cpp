#include "NhanVien.h"


NhanVien::NhanVien(){
    Date1 d;
    this->id="";
    this->fullname="";
    this->gender=0;
    this->dateOfStartWork=d;
    this->salary=0;
}

NhanVien::NhanVien(string id,string fullname,Date1 date,bool gender){
    this->id= id;
    this->fullname=fullname;
    this->dateOfStartWork=date;
    this->gender=gender;
}

void NhanVien::updateInput(){
    cout<<" "<<endl;
}

void NhanVien::setId(string id){
    this->id=id;
}

string NhanVien::getId(){
    return id;
}

void NhanVien::setFullname(string name){
    this->fullname=name;
}

string NhanVien::getFullname(){
    return  fullname;
}

void NhanVien::setDateOfStartWork(Date1 date){
    this->dateOfStartWork=date;
}

Date1 NhanVien::getDateOfStartWork(){
    return dateOfStartWork;
}

void NhanVien::setGender(bool gender){
    this->gender=gender;
}
bool NhanVien::getGender(){
    return gender;
}

void NhanVien::setSalary(double salary){
    this->salary=salary;
}

double NhanVien::getSalary(){
    return salary;
}

void NhanVien::show(){
    cout<<"Nhan Vien"<<endl;
    cout<<id<<" "<<fullname<<" "<<gender<<" "<<salary<<" ";
    dateOfStartWork.show();
}

void NhanVien::input(){
    cout<<"You are welcom"<<endl;
}

NhanVien::~NhanVien(){
}


