//内存管理代码演示
/*
#include<iostream>
using namespace std;
int main()
{
    //申请一个整型内存
    int *p=new int;//这里可以初始化内存：new int(20);
    if(NULL==p)    //判断是否申请成功，如果失败要退出
    {
        return 0;
    }
    *p=20;
    cout<<*p<<endl;
    delete p;//new出来的内存要释放掉；
    p=NULL;  //并且让指针指向空
    return 0;
}
*/
//申请块内存
#include<iostream>
using namespace std;
int main()
{
    int *p=new int[1000];//空间大小
    if(NULL==p)
    {
        return 0;
    }
    //访问这一千个整型内存空间时，可以使用数组的方式来访问
    p[0]=10;
    p[1]=20;
    cout<<p[0]<<" "<<p[1]<<endl;
    delete []p;//注意这里要加[]。
    p=NULL;
    return 0;
}

