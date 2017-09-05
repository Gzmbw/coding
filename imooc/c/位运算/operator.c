#include<stdio.h>
int main()
{
  int a=4;//00000000 000000000 000000000 00000100  4的补码
  int b=7;//00000000 000000000 000000000 00000111  7的补码
          //00000000 000000000 000000000 00000100
  int c=a&b;
  printf("a&b=%d\n",c);

  int d=a|b;
  printf("a|b=%d\n",d);
  int e=a^b;
  printf("a^b=%d\n",e);
  //按位异或可以实现数值交换
  a=a^b;
  b=b^a;
  a=a^b;
  printf("a=%d,b=%d\n",a,b);
  //按位取反
  int f=~a;
  printf("~a=%d,a=%d\n",f,a);
  
  //左移
  int x=3;//00000000 00000000 000000000 00000011
  int y;
  y=x<<4; //00000000 00000000 000000000 00110000
  printf("x=%d,x<<4=%d\n",x,y);
  return 0;
}
