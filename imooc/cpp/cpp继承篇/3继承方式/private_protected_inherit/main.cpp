#include<iostream>
#include<stdlib.h>
//#include"Soldier.h"
#include"Infantry.h"
/*
 * 保护继承和私有继承
 *     要求：1.Person类，数据成员：m_strName,成员函数：构造函数、play();
 *          2.Soldier类，数据成员：m_iAge,成员函数：构造函数、work()
 *          3.Infantry步兵类，成员函数：attack()
 */
int main()
{
    /*
    Soldier soldier;
    soldier.work();
    //soldier.play();//Person::play不可访问，由于Soldier使用protected从Person继承，
    //也就是说当进行保护继承之后在基类当中的类是无法被子类对象调用
    return 0;
    */
    Infantry soldier;
    soldier.attack();
    //soldier.play();
    return 0;
}
