#include<stdio.h>
#include"max.h"
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int maxNum=max(a,b);
	printf("%d\n",maxNum);
	return 0;
}
