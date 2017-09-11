#ifndef SOLDIER_H
#define SOLDIER_H
#include"Person.h"
class Soldier:private Person{//1.这里把公有继承改为保护继承//2.改成私有继承
public:
    Soldier();
    ~Soldier();
    void work();
protected:
    int m_iAge;
private:

};
//进行保护继承，基类中的public和protected下面所有的数据成员和成员函数，都会被继承到子类的protected下面来。
//这就意味着通过子类对象只能够访问到子类自己的public下的数据成员和成员函数，而无法访问到其基类public下的数据成员
#endif // SOLDIER_H
