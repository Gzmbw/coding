#include<stdio.h>
int main()
{
   int s=0,count=0,i;
   int flag=1;
   while(flag)
   {
       scanf("%d",&i);
       if(0==i) break;
       count++;
       s+=i;
   }
   printf("%d,%d\n",s,count);
   return 0;
}
