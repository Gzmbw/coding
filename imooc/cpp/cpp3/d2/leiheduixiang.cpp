//定义一个坐标类，数据成员x和y，成员函数：分别打印x和y的值
#include<iostream>
using namespace std;
class Coordinate{
public:
    int x;
    int y;
    void printfX()
    {
        cout<<x<<endl;
    }
    void printfY()
    {
        cout<<y<<endl;
    }
};
int main()
{
    Coordinate coor;//从栈中定义对象
    coor.x=10;
    coor.y=20;
    coor.printfX();
    coor.printfY();

    Coordinate *p=new Coordinate;//从堆中定义对象
    if(NULL==p)
    {
        return 0;
    }
    p->x=100;
    p->y=200;
    p->printfX();
    p->printfY();//注意赋值的形式和访问的形式
    (*p).x=100;
    (*p).y=200;
    (*p).printfX();
    (*p).printfY();
    delete p;
    p=NULL;
    return 0;
}

