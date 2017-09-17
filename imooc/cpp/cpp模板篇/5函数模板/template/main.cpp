#include<iostream>
#include<stdlib.h>
using namespace std;

/*函数模板
 *    要求定义函数模板display
 */

template <typename T>
void display(T a)
{
    cout<<a<<endl;
}
//定义有两个参数的模板
template <typename T,class S>//这里最好把class换成template
void display(T t,S s)
{
    cout<<t<<endl;
    cout<<s<<endl;
}
//定义两个参数，一个是类型参数，另一个是变量
template <typename T,int KSize>
void display(T a)
{
    for(int i=0;i<KSize;i++)
    {
        cout<<a<<endl;
    }
}

int main()
{
    display<int>(10);
    display<double>(10.322);//这里叫模板函数，前面的叫函数模板
    display<int,double>(5,8.3);
    display<int,5>(6);
    return 0;
}
