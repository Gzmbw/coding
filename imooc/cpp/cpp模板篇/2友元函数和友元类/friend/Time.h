#ifndef TIME_H
#define TIME_H
#include"Match.h"
#include<iostream>
using namespace std;
class Time{
   //friend void printTime(Time &t);//注意它的形式，声明友元全局函数
    friend void Match::printTime(Time &t);//这里声明友元成员函数，注意形式，由于这里用到了Match,因此要加上Match头文件；
                                          //要告诉计算机printTime是属于Match这个类的
     //上面那条语句是可以写在public下面的，写在private下面也是可以的，所以对于friend位置的关系的，建议写在public上面
public:
    Time(int hour,int min,int sec);
private:
    int m_iHour;
    int m_iMinute;
    int m_iSecond;
};

#endif // TIME_H
