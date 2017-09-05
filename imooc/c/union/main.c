//linux 的共用体使用
#include<stdio.h>
union data{
   int a;
   char b;
   int c;

};
int main()
{
  union data data_1;//定义共用体的对象
  data_1.b='c';
  data_1.a=10;//这里data_1.a会把data_1.b覆盖掉
  printf("%p\n%p\n%p\n",&data_1.a,&data_1.b,&data_1.c);
  //这里打印一下，看三者的地址是否一样,结果是一样的
  return 0;
}
