#include<iostream>
#include<stdlib.h>
#include"Tank.h"
using namespace std;

/*静态数据成员与静态成员函数
 *      要求：定义Tank类，数据成员：坦克编号：m_cCode,坦克数量：s_iCount
 *                     成员函数：构造函数，析构函数，fire,getCount
 */
int main()
{
    //cout<<Tank::getCount()<<endl;//打印一下初始化的值
    //实例化一个对象
    //Tank t1('A');
    //cout<<Tank::getCount()<<endl;
    //也可以通过t1直接来访问s_iCount;访问静态的成员函数和静态的数据成员
    //cout<<t1.getCount()<<endl;
 /*
    Tank *p=new Tank('A');
    cout<<Tank::getCount()<<endl;
    Tank *q=new Tank('B');
    cout<<q->getCount()<<endl;
    delete p;
    delete q;
    cout<<Tank::getCount()<<endl;
    return 0;
 */
    //实验：看看对于静态的成员函数可不可以加const，答案是不可以的。

}
