class constSN
{
private:
    int x;
    static int k;
public:
    constSN();
    constSN(int);
    const void add(int =6);
    ~constSN();
    const void show();
     int getX() const;
    
};


