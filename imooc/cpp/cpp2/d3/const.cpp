#include<iostream>
using namespace std;
void fun(const int &a,const int &b);
int main()
{
    int x=5;
    int y=9;
    cout<<x<<"  "<<y<<endl;
    fun(x,y);
    cout<<x<<" "<<endl;
    return 0;
}
void fun(const int &a,const int &b)
{
    a=20;//这里是错误的，不可以改变
    b=31;
}

