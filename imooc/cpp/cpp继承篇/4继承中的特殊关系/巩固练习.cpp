//定义两个类，基类是人类，定义数据成员姓名（name），及成员函数void attack()。
//士兵类从人类派生，定义与人类同名的数据成员姓名（name）和成员函数void attack()。
//通过对同名数据成员及成员函数的访问理解成员隐藏的概念及访问数据的方法。
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/**
 * 定义人类: Person
 * 数据成员: m_strName
 * 成员函数: attack()
 */
class Person
{
public:
    string m_strName;
	void attack()
	{
		cout << "attack" << endl;
	}
};

/**
 * 定义士兵类: Soldier
 * 士兵类公有继承人类
 * 数据成员: m_strName
 * 成员函数: attack()
 */
class Soldier:public Person
{
public:
	string m_strName;
	void attack()
	{
		cout << "fire!!!" << endl;
	}
};

int main(void)
{
    // 实例士兵对象
	 Soldier soldier;
    // 向士兵属性赋值"tomato"
    soldier.m_strName = "tomato";
    // 通过士兵对象向人类属性赋值"Jim"
	soldier.Person::m_strName = "Jim";
    // 打印士兵对象的属性值
	cout << soldier.m_strName << endl;
    // 通过士兵对象打印人类属性值
	cout << soldier.Person::m_strName << endl;
    // 调用士兵对象方法
	soldier.attack();
    // 通过士兵对象调用人类方法
    soldier.Person::attack();

	return 0;
}
