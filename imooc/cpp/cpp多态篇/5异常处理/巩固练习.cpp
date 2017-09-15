/*
函数division的两个参数为dividend（被除数）和divisor（除数）
要求用户输入除数和被除数，并作为参数传递给division函数
如果除数为0，则抛出异常，并被捕获，将异常的内容显示到屏幕上
*/
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

/**
 * 定义函数division
 * 参数整型dividend、整型divisor
 */
int division(int dividend, int divisor)
{
    if(0 == divisor)
    {
        // 抛出异常，字符串“除数不能为0”
        throw string("除数不能为0");
    }
    else
    {
        return dividend / divisor;
    }
}

int main(void)
{
    int d1 = 0;
    int d2 = 0;
    int r = 0;
    cin >> d1;
    cin >> d2;
    // 使用try...catch...捕获异常
    try
    {
        division(d1,d2);
    }
    catch(string &p)
    {
        cout<<p<<endl;
    }

    return 0;
}

