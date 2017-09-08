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
    //一种方法是用引用，另一种是用指针，都可以改变值。注意形式上的不同
    //arr1.printInfo().setLen(5).printInfo();//因为arr1.printInfo()返回的是*this是一个对象
    //这里使用setLen()并没有改变arr1的值，这是因为Array Array::printInfo() 返回的*this是一个临时对象不是arr1对象，所以使用引用就可以解决
    //cout<<"len="<<arr1.getLen()<<endl;
    arr1.printInfo()->setLen(5)->printInfo();
    cout<<&arr1<<endl;//打印arr1的地址，看看是否和this一样
    return 0;
}
