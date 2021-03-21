class Student{
    private:
        int maSV;
        int age;
        double markAvr;
    public:
        Student();
        Student(int,int,double);
       friend ostream& operator<<(ostream&, const Student& );
      

};