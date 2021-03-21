#include "matrix.h"

matrix::matrix(){

}

matrix::matrix(int row,int col,int value){
    this->row=row;
    this->col=col;
    this->data = new int *[this->row];
    for (int i=0;i<this->row;i++)
    {
        *(this->data+i)= new int [this->col];
    
    for (int j=0;j<=this->col;j++){
        *(*(this->data+i)+j)=value;
    }
    }
}

matrix::~matrix(){
    for (int i=0;i<this->row;i++){
        delete[] *(this->data+i);
    }
}

void matrix::show(){
    cout<<"Matrix: "<<endl;
    for (int i=0;i<this->row;i++){
        for (int j=0;j<this->col;j++)
      //  cout<< *(*(this->data+i)+j)<<" ";
      cout<<(*this)(i,j)<<" ";
    
    cout<<endl;
    }
}

ostream& operator<<(ostream& o, const matrix& m) {
    o << "Matrix:" << endl;
    for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.col; j++) {
            o << *(*(m.data + i) + j) << " ";
        }
        o << endl;
    }
    return o;
}

int& matrix::operator()(const int& i, const int& j) {
    static int error = -100;
    return ((i >= 0 && i < this->row) && (j >= 0 && j < this->col)) ? *(*(this->data + i) + j) : error;
}


