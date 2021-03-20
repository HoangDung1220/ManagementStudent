class Date
{
protected:
    int day;
    int month;
    int year;
public:
   
    Date(int=0,int=0,int=0);
    void setDay(int);
    int getDay();
    void setMonth(int);
    int getMonth();
    void setYear(int);
    int getYear();
    void show();
    ~Date();
};

