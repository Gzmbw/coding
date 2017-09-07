#include<iostream>
#include<stdlib.h>
#include"Coordinate.h"
#include"Line.h"
using namespace std;

/*
 * 对象成员指针
 * 要求：
 *    定义两个类：
 *       坐标类：Coordinate
 *       数据成员：横坐标m_iX,纵坐标m_iY
 *       成员函数:构造函数、析构函数、数据封装函数
 *       线段类：Line
 *       数据成员：点A指针m_pCoorA,点B指针m_pCoorB
 *       成员函数：构造函数、析构函数、信息打印函数
 */
int main()
{
    Line *p=new Line(1,2,3,4);
    p->printInfo();
    delete p;
    p=NULL;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(Line)<<endl;
    return 0;
}
