#include<iostream>
#include<stdlib.h>
#include"Soldier.h"
using namespace std;
/*
 * 继承关系中隐藏
 *    要求：1.Person类，数据成员：m_strName,成员函数:构造函数、play()
 *         2.Soldier类，数据成员：无，成员函数：构造函数、play()、work()
 */
int main()
{
    /*
    Soldier soldier;
    soldier.play(7);
    soldier.work();
    //soldier.play();//是不是可以直接通过soldier.play()来访问了，出错，soldier只能调用他自己下面的play
    //不能调用继承来的play()，继承过来的play无法与自己的play形成重载。
    soldier.Person::play();//想要调用父类的play()只能通过这种方式
    return 0;
    */
    Soldier soldier;
    soldier.work();
    soldier.play(7);

   // soldier.Person::play();

    return 0;
}
