#include "matran.h"
matran::matran(int row,int col)
:row(row),col(col)
{
    this->data = new int*[row];
    for (int i=0;i<row;i++){
        this->data[i]= new int[col];


    }
   int m=0;
    for (int i=0;i<row;i++)
     for (int j=0;j<col;j++)
     {
         data[i][j]=m;
         m++;
     }

}

void matran::show(){
     for (int i=0;i<row;i++)
     {
     for (int j=0;j<col;j++)
     cout<<*(*(this->data+i)+j)<<" ";
     cout<<endl;
     }

}

int& matran::operator()(const int& i,const int& j){
    return *(*(this->data+i)+j);
}

matran::~matran(){
    cout<<"Huy";
}
