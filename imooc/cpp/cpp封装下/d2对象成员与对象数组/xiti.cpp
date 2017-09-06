//定义具有两个对象的Coordinate数组，遍历对象数组，打印对象信息
#include<iostream>
using namespace std;

class Coordinate{
public:
   Coordinate(){};
   void printInfo()
   {
      cout<<"("<<m_iX<<","<<m_iY<<")"<<endl;
   }
public:
   int m_iX;
   int m_iY;
};
int main()
{
   Coordinate coorArr[2];
   coorArr[0].m_iX=1;
   coorArr[0].m_iY=2;
   coorArr[1].m_iX=3;
   coorArr[1].m_iY=4;
   for(int i=0;i<2;i++)
   {
      coorArr[i].printInfo();//注意这里的调用方式
   }
   return 0;
}
