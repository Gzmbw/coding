#include<iostream>
#include<stdlib.h>
#include"Soldier.h"
using namespace std;
/*
 * 继承关系中隐藏
 *     要求：1.Person 类，数据成员：m_strName,成员函数：构造函数、play()
 *          2.Soldier类，数据成员：无，成员函数：构造函数、play(),work();
 */

int main()
{
    Soldier soldier;
    soldier.play();
    soldier.Person::play();
    soldier.work();
    return 0;
}
