    #include <conio.h>
    #include <string.h>
    #include <math.h>
    #include <iostream>
    using namespace std;
    Class ps
    {
    Private:
    Int t,m;
    Public:
    Ps()
    {
    T = m = 0;
    }
    Ps(int t1, int m1)
    {
    T = t1; m = m1;
    }
    Ps operator++()
    {
    T += m ;
    Return *this ;
    }
    Void in()
    {
    Cout << "\nps= " << t << "/" << m;
    }
    Void nhap()
    {
    cout << "\n nhap tu va mau: " ;
    Cin >> t >> m;
    }
    } ;
    Void main()
    {
    Int t1=-3, m1=5;
    Const ps p = ps(abs(t1)+2,m1+2); // khai báo đối tượng hằng
    Clrscr();
    P.in();
    ++p;
    P.in();
    Getch();
    }