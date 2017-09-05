/********************************************/
/*知识点：bool类型，命名空间，输入和输出          */
/*题目要求：                                  */
/*       使用一个函数找出一个整型数组中的最大值和最小值*/
/************************************************/
#include<iostream>
using namespace std;
namespace CompA//定义一个命名空间
{
    int getMaxorMin(int *arr,int count,bool isMax)
    {
        int temp=arr[0];
        for(int i=0;i<count;i++)
        {
            if(isMax)
            {
                if(temp<arr[i])
                {
                    temp=arr[i];
                }
            }
            else
            {
                if(temp>arr[i])
                {
                    temp=arr[i];
                }
            }
        }
        return temp;
    }
}

int main()
{
    int arr[5]={1,34,65,24,232};
    bool isMax=false;
    cin>>isMax;
    cout<<CompA::getMaxorMin(arr,5,isMax)<<endl;
    return 0;
}

