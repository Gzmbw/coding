#ifndef TANK_H
#define TANK_H
class Tank{
public:
    Tank(char code);
    ~Tank();
    void fire();
    static int getCount();//静态成员函数
    //static int getCount() const;//看看静态成员函数能不能加const
    //答案是不可以的，因为加const的本质就给它的隐形函数this指针加const，而做为静态的函数根本就没有this指针，
    //所以是不可以的
private:
    static int s_iCount;//静态数据成员
    char m_cCode;
};

#endif // TANK_H
