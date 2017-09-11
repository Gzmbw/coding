#include<iostream>
#include<stdlib.h>
#include"Migrantworker.h"
using namespace std;

/*
 * 多继承
 *    要求：1.Farmer类，数据成员：m_strName,成员函数：构造函数、析构函数、sow();
 *         2.Worker类，数据成员:m_strCode,成员函数：构造函数、析构函数、carry()
 *         3.MigrantWorker类，数据成员：无，成员函数：构造函数、析构函数
 */
int main()
{
    MigrantWorker *p = new MigrantWorker("Merry","100");
    p->carry();
    p->sow();
    delete p;
    p=NULL;
    return 0;
}
