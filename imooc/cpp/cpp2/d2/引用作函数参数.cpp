//引用作函数参数
#include<iostream>
using namespace std;
void fun(int &a,int &b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=10,y=30;
    cout<<x<<','<<y<<endl;
    fun(x,y);
    cout<<x<<","<<y<<endl;
    return 0;
}

