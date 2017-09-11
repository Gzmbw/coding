#ifndef WORKER_H
#define WORKER_H
#include"Person.h"//别忘了加这个头文件
class Worker:public Person{
public:
    Worker();
    ~Worker();
    void work();
    int m_iSalary;
};

#endif // WORKER_H
