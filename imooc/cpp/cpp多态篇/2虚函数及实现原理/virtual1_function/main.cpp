#include<iostream>
#include<stdlib.h>
#include"Shape.h"
#include"Circle.h"
using namespace std;

/*虚函数表
 *    要求：
 *      1.定义Shape类，成员函数：calcArea(),构造函数，析构函数
 *      2.定义Circle类，成员函数：构造函数，析构函数
 *                    数据成员：m_iR;
 *      概念说明：
 *         1.对象的大小：数据成员所占的内存大小
 *         2.对象的地址：指通过一个类实例化一个对象，
 *                     那么这个对象在内存当中会占有一定的内存单元，这个内存单元的第一个内存单元地址就是对象地址
 *         3.对象成员的地址：指当有一个类实例化一个对象，这个对象可能有一个或多个数据成员，
 *                        那么每一个数据成员所占据的地址就是对象所占的地址
 *         4.虚函数表指针：在具有虚函数情况下实例化一个对象，这个对象第一块内存当中所存储的指针
 *                       这个指针就是虚函数表指针
 */
int main()
{
    Shape shape;
    cout<<sizeof(shape)<<endl;//Shape没有数据成员，应该是0，但是结果为1，只是在标记了这个对象的存在，如果有数据成员这个1就不存在了

    int *p=(int *)&shape;//这里强制转化，打印出的是Shape对象的地址
    cout<<p<<endl;
    cout<<(unsigned int)(*p)<<endl;

    Circle circle(100);
    //cout<<sizeof(circle)<<endl;

    int *q=(int *)&circle;
    cout<<q<<endl;
    cout<<(unsigned int)(*q)<<endl;
    //q++;
    //cout<<(unsigned int)(*q)<<endl;

    return 0;
}
