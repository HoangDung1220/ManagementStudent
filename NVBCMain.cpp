#include "NVBC.h"
#include "time.h"
 int main(){
     Date1 d(10,2,2001);
     NVBC a("001","Hoang Dung",d,true,2.9f);
   /*  time_t now = time(NULL);
   tm *t = localtime(&now);
   int year = t->tm_year+1900;
   int month = t->tm_mon+1;
   int dayOfMonth = t->tm_mday;

   int chenh = year - a.getDateOfStartWork().getYear();
   cout<<chenh;
    */
   a.show();
   NVBC b;
   b.show();
   return 0;
 }