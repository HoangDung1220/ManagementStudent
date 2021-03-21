#include <iostream>
#include "SV.h"
using namespace std;

class QLSV{
    private :
        SV *data;
        int n;
    public :
        QLSV();
        void Add(const SV& );
        void insert(const SV&,int &);
        void indexof(const SV&);
        void remove(const SV&);
        void removeAt(int &i);
        SV operator[](const int &);
        friend ostream& operator<<(ostream&, const QLSV&);
        const QLSV& operator=(const QLSV &);

        
}