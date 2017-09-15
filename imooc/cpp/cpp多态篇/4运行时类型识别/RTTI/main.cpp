#include<iostream>
#include"Bird.h"
#include"Plane.h"
#include<string>
#include<typeinfo>
using namespace std;

/*RTTI
 *   1.Flyable类，成员函数：taleoff,land
 *   2.Plane类，成员函数:takeoff,land,carry
 *   3.Bird类，成员函数:takeoff,land,foraging
 *   4.全局函数doSomething(Flyable *obj)
 */
void doSomething(Flyable *obj)
{
    cout<<typeid(*obj).name()<<endl;//打印一下所传入的对象指针，知道它的数据类型
    obj->takeoff();
    //判断当前obj指针所指向的对象是什么类型？
    if(typeid(*obj)==typeid(Bird))//判断是否是Bird类型
    {
        Bird *bird=dynamic_cast<Bird *>(obj);
        bird->foraging();
    }
    if(typeid(*obj)==typeid(Plane))
    {
        Plane *plane=dynamic_cast<Plane *>(obj);
        plane->carry();
    }
    obj->land();
}
int main()
{
    //Bird b;
   // doSomething(&b);
    /*
    Flyable *p=new Bird();
    cout<<typeid(p).name()<<endl;
    cout<<typeid(*p).name()<<endl;
    */
    //看一下dynamic_cast有那些限制
    //把头文件的虚函数去掉，试一试,去掉后Bird和Flyable就是普通的子类和父类的关系
    //Flable *p = new Bird();
    //Bird *b = dynamic_cast<Bird *>p;//会报错，说Flyable不是多态类型
    return 0;
}
