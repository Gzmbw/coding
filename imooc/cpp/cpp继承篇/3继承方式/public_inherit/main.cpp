#include<iostream>
#include"Person.h"
#include"Worker.h"
using namespace std;

/*继承方式：公有继承
 *    要求：
 *    1.定义Person类，要求含有m_strName和m_iAge两个数据成员及构造函数和析构函数、eat函数
 *    2.定义Worker类，要求公有继承Person类，含有数据成员m_iSalary、构造函数、析构函数、work函数
 *
 */

int main()
{
   /*
    Worker *p = new Worker();//通过子类的对象或者对象指针可以访问从父类继承下来的数据成员和成员函数
    //当这种继承是从父类的public访问限定符继承下来的时也会继承到子类的public访问限定符下，否则无法通过这种方式访问。
    p->m_strName="jim";
    p->m_iAge=10;
    p->eat();
    p->m_iSalary=1000;
    p->work();
    delete p;
    p=NULL;
    return 0;
    */

    Worker worker;//从堆中实例化一个对象
    //worker.m_strName="guoo";
    //worker.m_iAge=10;
    worker.eat();
    worker.m_iSalary=1000;
    worker.work();
    return 0;

    //Person person;
    //person.eat();//eat是public型
    //person.m_strName="merry";//出错不能访问
    //person.m_iAge=10;//也不能访问
    return 0;
}
