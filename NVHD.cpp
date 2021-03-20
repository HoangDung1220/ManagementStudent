#include "NVHD.h"
#include <time.h>

void createMonth(int monthA[]){
    monthA[1]=31;monthA[3]=31;monthA[4]=30;monthA[5]=31;monthA[6]=30;monthA[7]=31;
    monthA[8]=31;monthA[9]=30;monthA[10]=31;monthA[11]=30;monthA[12]=31;
}

void processDay(int dayOfWeek,int dayOfMonth){
    
     if (dayOfWeek==7 || dayOfWeek==6 ){
        if (dayOfMonth>=3) {
            dayOfWeek -=2;
            dayOfMonth -=2;
            } else {
                dayOfMonth +=2;
                dayOfWeek = (dayOfWeek+2)%7;
            }
    }
}

void menu1(){
    cout<<"............MENU..............."<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"1.Update Accord to Fullname"<<endl;
    cout<<"2.Update Accord to DayWage"<<endl;
    cout<<"3.Update Accord to Gender"<<endl;
    cout<<"4.Update Accord to Amount Day-Off"<<endl;
}

int calculate(int year,int month,int dayOfWeek,int dayOfMonth){
       int monthA[13];
       int amountDay=0;
       int before, after,dayAfter,beforeRest,before1;

       createMonth(monthA);
       processDay(dayOfWeek,dayOfMonth);
    
     if (dayOfWeek==0) dayOfWeek=7;

     if (year%4==0) monthA[2]=29; else monthA[2]=28;

    before1 = dayOfMonth - dayOfWeek;
    before = before1/7;
    amountDay = amountDay+before*2;

    beforeRest = before1-before*7;

    if (beforeRest == 1) amountDay+=1; 
    if (beforeRest >= 2) amountDay+=2; 


    after = monthA[month]-dayOfMonth;

    int kt = 7-dayOfWeek;

    if (after >= kt){
        after = after-kt;
        amountDay = amountDay+2;
        int after2 = after/7;
        amountDay = amountDay+after2*2;
        int rest = after+after2*7;
        if (rest== 6) amountDay+=1;
        
   } else {
       dayOfWeek+=after;
       if (dayOfWeek==6) amountDay+=1;
       if (dayOfWeek==7) amountDay+=2;
   }

   return monthA[month]-amountDay;
}

void checkID(string idd)
{
if (idd.size()!=8){
    throw "this length must have 8 character ";
}


}

int NVHD::calculateAmountDay(){

   time_t now = time(NULL);
   tm *t = localtime(&now);
   int year = t->tm_year+1900;
   int month = t->tm_mon+1;
   int dayOfMonth = t->tm_mday;
   int dayOfWeek = t->tm_wday;

   int dem = calculate(year,month,dayOfWeek,dayOfMonth);
   return dem;
}

void NVHD::updateInput(){
    
    int choice1,dayOff;
    string name;
    double dayWage1;
    bool gender1;
    menu1();

    cout<<"My choice1: ";cin>>choice1;
    do{
    switch (choice1)
    {
    case 1:
    {
        cout<<"Enter new fullname: ";std::fflush(stdin);getline(cin,name);
        this->setFullname(name);
        break;
    }

    case 2:
    {   cout<<"Enter DayWage: ";cin>>dayWage1;
        this->setDayWage(dayWage1);
        this->setSalary((this->calculateAmountDay()-this->getAmountDayOff())*dayWage1);
        break; 
    }
    case 3:
    {
        cout<<"Enter gender ";cin>>gender1;
        this->setGender(gender1);
        break;
    }
 
    case 4:
    {
        cout<<"Enter AmountDayOff: ";cin>>dayOff;
        this->setAmountDayOff(dayOff);
        this->setSalary((this->calculateAmountDay()-dayOff)*this->getDayWage());

        break;
    }
    }
        menu1();
        cout<<"My choice1: ";cin>>choice1;
    }
    while (choice1!=0);
}


NVHD::NVHD()
:NhanVien()
{
    this->amountDayOff=0;
    this->dayWage=0;

}

NVHD::NVHD(string id,string fullname,Date1 date,bool gender,double dayWage,int dayOff)
:NhanVien(id,fullname,date,gender)
{

    this->dayWage=dayWage;
    this->amountDayOff= dayOff;
    this->salary=(this->calculateAmountDay()-dayOff)*dayWage;
}



void NVHD::setDayWage(double wage){
    this->dayWage=wage;
}

double NVHD::getDayWage(){
    return dayWage;
}

void NVHD::setAmountDayOff(int day){
    this->amountDayOff=day;
}

int NVHD::getAmountDayOff(){
    return amountDayOff;
}



void NVHD::show(){
    string st;
    if (gender==1)  st ="Nu" ; else st = "Nam";
    cout<<"ID :"<<id<<" Fullname: "<<fullname<<" DateOfStartWork: ";
    dateOfStartWork.show();
    cout<<" Gender: "<<st<<" DayWage: "<<dayWage<<" AmountDay: "<<amountDayOff<<" Salary: "<<salary<<endl;
}
void NVHD::input(){
    cin>>(*this);

}
istream& operator>> (istream& in,NVHD & nv){
    int day,month,year;
    do{
     cout<<"Enter ID: ";std::fflush(stdin); getline(in,nv.id);
     try {
         checkID(nv.id);
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
     cout<<"Enter dayWage: ";in>>nv.dayWage;
     cout<<"Enter amountDay-Off: ";in>>nv.amountDayOff;
     nv.setSalary((nv.calculateAmountDay()-nv.amountDayOff)*nv.dayWage);

     return in;
}
bool NVHD::operator==(const NVHD& nv){
    return this->id==nv.id;
}

ostream& operator<<(ostream& o,NVHD& nv){
    o<<nv.id<<" "<<nv.fullname<<" "<<nv.gender<<" "<<nv.salary<<" "<<nv.amountDayOff<<" "<<nv.dayWage<<endl;
    return o;
}

NVHD::~NVHD(){
}



