#include "Student.h"
#include <iostream>
using namespace std;
Student::Student(){

}

Student::Student(int maSV, int age, double markAvr)
: maSV(maSV),age(age),markAvr(markAvr){

}

ostream& operator<<(ostream& o, const Student& s ){
    o<<s.maSV<<" "<<s.age<<" "<<s.markAvr<<endl
    return o;
}
