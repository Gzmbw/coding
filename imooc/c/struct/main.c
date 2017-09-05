#include<stdio.h>
struct weapon{
   char name[20];
   int atk;
   int price;
};//weapon_1;//可以在这里定义
int main()
{
   int a=0;
   float b=0.0;
   
   struct weapon weapon_1={"weapon_name",100,200};//结构体初始化；也可以在这里定义，大程序多用这种写法。
   struct weapon *w;//定义一个结构体变量指针
   w=&weapon_1;//注意的是使用结构指针需要先定义结构变量。
   printf("name=%s\nname=%s\n",(*w).name,w->name);//这里(*w).name和w->name、weapon-1.name的作用是一样的。
   printf("name=%s\nprice=%d\n",weapon_1.name,++weapon_1.price);
   struct weapon weapon_2[2]={{"weapon_name1",12,24},{"weapon_name2",123,234}};//定义结构数组
   printf("%s\n%d\n",weapon_2[0].name,weapon_2[0].atk);

   struct weapon *p;
   p= weapon_2;//这里P指向的是weapon_2[0]的地址，p->name等价与weapon_2[0],
   printf("p->name=%s\n",p->name);
    
   p++;//相当于weapon_2 + 1它们指向了weapon_2[1]
   printf("p++->name=%s\nweapon_2[1].name=%s\n",p->name,weapon_2[1].name);
   return 0;
}

