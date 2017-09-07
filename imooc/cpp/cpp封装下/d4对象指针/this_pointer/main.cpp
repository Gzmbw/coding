#include<iostream>
#include<stdlib.h>
#include"Array.h"
using namespace std;
/*
 * 示例要求：
 *   定义一个Array类；
 *   数据成员:m_iLen表示数组长度
 *   成员函数：
 *      改造函数
 *      析构函数
 *      len的封装函数
 *      信息输出函数printInfo
 */
int main()
{
    Array arr1(10);
    cout<<arr1.getLen()<<endl;
    return 0;
}
