#include<iostream>
#include<string>
#include<stdlib.h>
#include"Teacer.h"
using namespace std;
/*
 * Teacher类
 *    自定义拷贝构造函数
 * 数据：
 *   名字
 *   年龄
 * 成员函数：
 *   数据成员的封装函数
 *
 */
void test(Teacher t)
{
    cout<<"参数传递也会自动调用拷贝构造函数"<<endl;
}

int main()
{
    Teacher t1;
    //Teacher t2=t1;
    //Teacher t3(t1);拷贝构造函数不仅会以这样的方式调用构造函数。在参数传递时也会自动调用拷贝构造函数。
    //如上例子
    test(t1);//调用test并传递一个参数进去
    cout<<t1.getName()<<" "<<t1.getAge()<<endl;
    return 0;
}
