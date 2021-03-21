class lopA{
    private:
      int a;
    public:
      void show();
      friend class lopB;

};

class lopB{
    private :
    int b;
   
    public:
     lopA A;
    void show1(){
        //cout<<A.a;
    };

};

int main(){
   
    
}