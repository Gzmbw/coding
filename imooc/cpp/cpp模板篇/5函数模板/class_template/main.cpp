#include<stdlib.h>
#include<string>
#include"MyArray.h"
#include<iostream>
using namespace std;

/*类模板
 *    定义类模板MyArray,成员函数：构造函数、析构函数、display函数
 *                    数据成员：m_pArr
 */
int main()
{
    MyArray<int,5,6>arr;//这是模板类定义一个对象，然后通过对象去调用display成员函数
    arr.display();//这里不需要写入参数
    return 0;
}
