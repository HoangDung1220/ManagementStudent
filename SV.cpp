#include "SV.h"

SV::SV(){

}

SV::SV(int maSV, int age, double markAvr)
: maSV(maSV),age(age),markAvr(markAvr){

}

ostream& operator<<(ostream& o, const SV& s){
    o<<s.maSV<<" "<<s.age<<" "<<s.markAvr<<endl;
    return o;


}


