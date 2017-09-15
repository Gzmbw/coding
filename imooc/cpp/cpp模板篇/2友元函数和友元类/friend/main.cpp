#include<iostream>
#include<stdlib.h>
#include"Time.h"
#include"Match.h"
using namespace std;
/*友元函数
 *   1.友元全局函数
 *   2.友元成员函数
 */
/*
//友元全局函数声明
void printTime(Time &t);
int main()
{
    Time time(12,30,30);
    printTime(time);//注意这里括号里面传入的是Time的对象，不能写成这样printTime(Time time)

    return 0;
}
//这里不定义为友元函数是不能用Time的私有数据成员
//通过声明友元就能够使得传入进来的对象去访问它的私有的数据成员，成员函数
void printTime(Time &t)
{
    cout<<t.m_iHour<<":"<<t.m_iMinute<<":"<<t.m_iSecond<<endl;
}
*/
int main()
{
    Time t(12,04,05);
    Match m;
    m.printTime(t);
    return 0;
}
