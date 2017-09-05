//写一个静态链表
#include<stdio.h>
struct weapon{//定义一个结构体，包含三个成员变量
    int price;
    int atk;
    struct weapon *next;//struct weapon 类型的指针变量；这个指针变量是用来存放下一个节点的地址
};
int main()
{
  struct weapon a,b,c,*head;//定义三个武器结构体对象作为链表的节点，然后需要一个头指针head。
  //给三个变量赋值
  a.price=100;
  a.atk=100;
  b.price=200;
  b.atk=200;
  c.price=300;
  c.atk=300;
  //然后将它们连成一个链表
  head=&a;
  a.next=&b;
  b.next=&c;
  c.next=NULL;
  //现在静态链表就够键完成了
  //打印链表元素的值
  //这里需要介入一个指针p来访问节点
  struct weapon *p;
  p=head;//让p指向a的起始地址，也就是头指针head
  while(p!=NULL){
    printf("%d,%d\n",p->atk,p->price);
    p=p->next;//让p指向下一个节点
}
  return 0;
}
