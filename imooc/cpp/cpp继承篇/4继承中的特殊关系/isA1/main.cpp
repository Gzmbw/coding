#include<iostream>
#include<stdlib.h>
#include"Soldier.h"
using namespace std;

/*公有继承： Is a
 *    要求：1.Person类，数据成员：m_strName,成员函数：构造函数、析构函数、play()
 *         2.Soldier类，数据成员：m_iAge,成员函数：构造函数、析构函数、work()
 *         3.定义函数test1(Person p) test2(Person &p) test3(Person *p)
 */
void test1(Person p)//这里是临时对象p,用完自动销毁
{
    p.play();
}
void test2(Person &p)
{
    p.play();
}
void test3(Person *p)
{
    p->play();
}

int main()
{
    //Soldier soldier;
   // Person p=soldier;//用soldier去初始化p
    /*
    Person p;
    p.play();
    */
    /*
    Person p;
    p=soldier;//用soldier直接赋值给p
    p.play();
    */

    /*
    Person *p=&soldier;
    p->play();
    p->work();//使用person的对象或者指针，只能调用自己的数据成员和成员函数，无法调用它子类的成员函数
    */
    /*
    Person *p=new Soldier;
    p->play();
    delete p;
    p=NULL;
    */
/*
    Person p;
    Soldier s;
    test1(p);
    test1(s);
*/
/*
    Person p;
    Soldier s;
    test2(p);
    test2(s);
*/
    Person p;
    Soldier s;
    test3(&p);
    test3(&s);

    return 0;
}
