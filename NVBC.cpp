#include "NVBC.h"
#include <time.h>
const double wage = 1390;

void menu(){
    cout<<"............MENU..............."<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"1.Update Accord to Fullname"<<endl;
    cout<<"2.Update Accord to CoefficientSalary"<<endl;
    cout<<"3.Update Accord to Gender"<<endl;

}

NVBC::NVBC()
:NhanVien()
{
    this->salary=0;
    this->seniority=0;
    this->coefficientSalary=0;

}

NVBC::NVBC(string id,string name,Date1 date,bool gender,double coefficientSalary)
:NhanVien(id,name,date,gender)
{
    double chenh1;
    this->coefficientSalary=coefficientSalary;

    time_t now = time(NULL);
    tm *t = localtime(&now);
    int year = t->tm_year+1900;
    int month = t->tm_mon+1;
    int dayOfMonth = t->tm_mday;

    int chenh = year - this->getDateOfStartWork().getYear();
    if (month<this->getDateOfStartWork().getMonth()) chenh--;
    if (chenh<5) chenh1=0; else chenh1=(double)chenh/100;
    this->seniority = chenh1;
    this->salary = (coefficientSalary*wage)*(1+chenh1);
}

double NVBC::getCoefficientSalary(){
    return coefficientSalary;
}

void NVBC::setCoefficientSalary(double coefficient){
    this->coefficientSalary=coefficient;
}

double NVBC::getSeniority(){
    return seniority;
}

void NVBC::setSeniority(double seniority){
    this->seniority=seniority;
}

void NVBC::updateInput(){
    int choice1;
    string name;
    double coefficientSalary1;
    bool gender1;

    

    menu();
    cout<<"My choice: ";cin>>choice1;
    do{
    switch (choice1)
    {
    case 1:
    {
        cout<<"Enter new fullname: ";std::fflush(stdin);(cin,name);
        this->setFullname(name);
        break;
    }

    case 2:
    {
        cout<<"Enter CoefficientSalary";cin>>coefficientSalary1;
        this->setCoefficientSalary(coefficientSalary1);
        this->salary = (coefficientSalary1*wage)*(1+this->seniority);
        break;
    }
    case 3:
    {
        cout<<"Enter gender ";cin>>gender1;
        this->setGender(gender1);
        break;
    }
    }
         menu();
        cout<<"My choice: ";cin>>choice1;
    
  

}
    while (choice1!=0);
}

void NVBC::show(){
    cout<<"ID :"<<id<<" Fullname :"<<fullname<<" DateOfStartWork: ";
    dateOfStartWork.show();
    cout<<" Gender: "<<gender<<" CoefficientSalary :"<<coefficientSalary<<" Seniority: "<<seniority<<" Salary: "<<salary<<endl;
}


void NVBC::input(){
    cin>>(*this);

}

void checkID1(string idd)
{
if (idd.size()!=8){
    throw "this length must have 8 character ";
}


}

istream& operator>> (istream& in,NVBC & nv){
    int day,month,year;
   //  cout<<"Enter ID: ";std::fflush(stdin); getline(in,nv.id);
     //Check ID
     do{
     cout<<"Enter ID: ";std::fflush(stdin); getline(in,nv.id);
     try {
         checkID1(nv.id);
     }
     catch (const char* e)
     {
         cerr<<e<<endl;
     }
     catch (...){
         cout<<"oleeea"<<endl;
     }
    } while (nv.id.size()!=8);
     cout<<"Enter Fullname: ";std::fflush(stdin);getline(in,nv.fullname);
     std::fflush(stdin);
     cout<<"Enter DateOfStartWork  "<<endl;
     cout<<"Enter day: ";in>>day;
     cout<<"Enter month: ";in>>month;
     cout<<"Enter year: ";in>>year;
     Date1 d(day,month,year);
     nv.dateOfStartWork = d;

     cout<<"Enter gender <Nam: false=0 or Nu: true=1>: ";in>>nv.gender;
    do{
     cout<<"Enter coefficientSalary (2.34<x<10): ";in>>nv.coefficientSalary;
    }
    while (nv.coefficientSalary<2.34 );
    double chenh1;

    time_t now = time(NULL);
    tm *t = localtime(&now);
     year = t->tm_year+1900;
     month = t->tm_mon+1;
    int  dayOfMonth = t->tm_mday;

    int chenh = year - nv.getDateOfStartWork().getYear();
    if (month<nv.getDateOfStartWork().getMonth()) chenh--;
    if (chenh<5) chenh1=0; else chenh1=(double)chenh/100;
    nv.seniority = chenh1;
    nv.salary = (nv.coefficientSalary*wage)*(1+chenh1);
     return in;
}


ostream& operator<<(ostream& o, NVBC& nv){
    o<<nv.id<<" "<<nv.fullname<<" "<<nv.gender<<" "<<nv.salary<<" "<<nv.seniority<<" "<<nv.coefficientSalary<<endl;
    return o;
}

NVBC::~NVBC(){
}