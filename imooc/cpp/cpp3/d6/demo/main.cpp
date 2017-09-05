#include<iostream>
#include<stdlib.h>
#include<string>
#include"Teacher.h"//别忘了这个
using namespace std;
/*
 * Teacher类
 *    自定义无参构造函数
 *    自定义有参构造函数
 * 数据：
 *    名字
 *    年龄
 * 成员函数：
 *    数据成员的分装函数
 */


int main()
{
    //实例化一个对象，先通过无参构造函数
    Teacher t1;//因为没有任何参数，它将来调用无参的构造函数
    //通过有参构造函数实例化一个对象
    Teacher t2("merry",23);
    //t.setName("jianguo");
    //t.setAge(25);
    Teacher t3("huahua");
    cout<<t1.getName()<<" "<<t1.getAge()<<endl;//注意这里还是通过get函数来输出
    cout<<t2.getName()<<" "<<t2.getAge()<<endl;
    cout<<t3.getName()<<" "<<t3.getAge()<<endl;
    return 0;
}

