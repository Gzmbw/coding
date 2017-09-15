#include<iostream>
#include<stdlib.h>
#include"IndexException.h"
using namespace std;

/*
 * 异常处理：
 *      1.定义一个Exception类，成员函数：printException(),析构函数
 *      2.定义一个IndexException类，成员函数：printException()
 */

void test()
{
    //throw 10;
    throw IndexException();
}

int main()
{
    try
    {
        test();
    }
    //catch(int &e)
    //catch(IndexException &e)
   /*
    catch(Exception &e)//捕获的Exception也是可以的
    {
        //cout<<e<<endl;//这里可以catch到值
        e.printException();
    }
    */
    catch(...)//这样也可以捕获，就是太笼统
    {
        cout<<"Exception"<<endl;
    }

    return 0;
}
