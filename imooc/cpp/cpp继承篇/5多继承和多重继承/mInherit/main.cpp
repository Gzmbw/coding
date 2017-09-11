#include<iostream>
#include<stdlib.h>
#include"Infantry.h"
using namespace std;

/*多重继承
 *    要求:1.Person类，数据成员:m_strName，成员函数:构造函数、析构函数、play()
 *        2.Soldier类，数据成员:m_iAge,成员函数：构造函数、析构函数、work()
 *        3.Infantry类，数据成员:无，成员函数：构造函数、析构函数、attack()
 *        4.定义函数test1(Person p) test2(Person &p) test3(Person *p)
 */
void test1(Person p)
{
    p.play();
}
void test2(Person &p)
{
    p.play();
}
void test3(Person *p)
{
    p->play();
}

int main()
{
    Infantry infantry;
    test1(infantry);
    test2(infantry);
    test3(&infantry);
    return 0;
}
//结论：无论继承的层级有多少层，他们只要保持着直接或间接的继承关系，子类都可以与自己的直接父类或间接父类
//是一个的关系，并且能通过父类的指针对直接子类或间接子类的对象进行操作
