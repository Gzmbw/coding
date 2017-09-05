//介绍对象数组怎么定义怎么使用以及使用技巧

#include<iostream>
#include<stdlib.h>
#include"Coordinate.h"
using namespace std;
/*对象数组
 * 要求：
 *   定义Coordinate类
 *   数据成员：m_iX和m_iY
 *   分别从栈中和堆中实例化长度为3的对象数组
 *   给数组中的元素分别赋值
 *   遍历两个数组//遍历是打印数组每个元素的信息
 */
int main()
{
    Coordinate coor[3];
    coor[0].m_iX=3;
    coor[0].m_iY=4;
    for(int i=0;i<3;i++)
    {
        cout<<"coor_x "<<coor[i].m_iX;
        cout<<" coor_y"<<coor[i].m_iY<<endl;
    }
    Coordinate *p=new Coordinate[3];
   /*
    p->m_iX=9;//或者p[0].m_iX=9;
    p->m_iY=5;//p[0].m_iY=5;
    p++;//p=p+1;p+=1;//p现在移向了第二个元素
    p->m_iX=7;
    p->m_iY=12;
    p++;
    p->m_iX=23;
    p->m_iY=21;
    for(int i=0;i<3;i++)
    {
        //如果没有进行p++，就可以用一下方式输出
        //cout<<"p_x"<<p[i].m_iX<<endl;
        //cout<<"p_y"<<p[i].m_iY<<endl;
        //采用这种方式，输出是倒着的
        cout<<"p_x"<<p->m_iX;
        cout<<" p_y"<<p->m_iY<<endl;
        p--;
    }
    p++;//因为结束时p不是指向开始而是开始的前一个位置
    delete []p;
    p=NULL;
*/
    //还可以这样，p没有改变
    p->m_iX=1;
    p->m_iY=1;
    (p+1)->m_iX=2;
    (p+1)->m_iY=2;
    (p+2)->m_iX=3;
    (p+2)->m_iY=3;
    for(int i=0;i<3;i++)
    {
        cout<<"p_x="<<p[i].m_iX<<" p_y="<<p[i].m_iY<<endl;
    }
    delete []p;
    p=NULL;
    return 0;
}
