#ifndef WORKER_H
#define WORKER_H
#include"Person.h"
class Worker:public Person
{
public:
    Worker(string name,int age);
    //virtual void work();//虽然没有work这个函数，但是Worker类从Person类继承下来work,Person的work
      //函数是纯函数，所以Worker也是个抽象类。
    //如果实现work这个函数，Worker类就可以实例化对象
    //virtual void work();
private:
    int m_iAge;
};

#endif // WORKER_H
