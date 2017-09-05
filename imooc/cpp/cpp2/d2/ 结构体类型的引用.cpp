//结构体类型的引用
#include<iostream>
using namespace std;
struct Coor
{
    int x;
    int y;
};
int main()
{
    Coor c1;//定义结构体的变量c1
    Coor &c=c1;//给c1起个别名，注意是Coor类型的
    c.x=10;
    c.y=20;
    cout<<c1.x<<","<<c1.y<<endl;
    return 0;
}

