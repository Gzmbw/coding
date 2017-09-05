//动态链表
#include<stdio.h>
#include<malloc.h>
struct weapon{
   int price;
   int atk;
   struct weapon *next;
};
//需要创建链表的函数，返回的函数值是链表的头指针
struct weapon *create(){//定义三个指针变量都用来指向struct weapon类型数据
   struct weapon *head;//head就是链表的头指针
   struct weapon *p1,*p2;//一个用来指向链表当前新创建的节点，一个用来上一个节点
   // 然后创建一个临时变量n来记录当前链表节点个数,之后就用malloc函数开辟第一个节点
   int n=0;
   p1=p2=(struct weapon*)malloc(sizeof(struct weapon));//malloc分配内存块的函数sizeof判断数据类型长度符。
   scanf("%d,%d",&p1->price,&p1->atk);
   head=NULL;
   while(p1->price!=0){
       n++;
       if(n==1) head=p1;
       else p2->next=p1;

       p2=p1;
       p1=(struct weapon*)malloc(sizeof(struct weapon));
       scanf("%d,%d",&p1->price,&p1->atk);
   }
   p2->next=NULL;
   return (head);
}
int main()
{
   struct weapon *p;
   p=create();
   printf("%d,%d\n",p->price,p->atk);
   return 0;
}
