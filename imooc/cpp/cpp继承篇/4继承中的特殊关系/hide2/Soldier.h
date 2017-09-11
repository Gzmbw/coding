#ifndef SOLDIER_H
#define SOLDIER_H
#include"Person.h"
class Soldier:public Person
{
public:
    Soldier();
    void play(int x);//试一试改变参数会不会有隐藏
    void work();
protected:
    string m_strName;
};

#endif // SOLDIER_H
