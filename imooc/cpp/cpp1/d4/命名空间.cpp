#include<iostream>
using namespace std;
namespace A
{
    int x=2;
    void fun()
    {
        cout<<'A'<<endl;
    }
}
namespace B {
    int x=3;
    void fun()
    {
        cout<<'B'<<endl;
    }
    void fun2()
    {
        cout<<"2B"<<endl;
    }
}

 int main()
 {
     cout<<"hello"<<endl;
     cout<<A::x<<endl;//打印A中的变量x
     B::fun();//调用B中的函数fun()
     B::fun2();
     //fun2();//不可以直接调用,如果在22行加上using namespace B;就可以用了
     return 0;
 }

