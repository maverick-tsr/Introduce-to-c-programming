#include<stdio.h>

void summ(int x,int nums[])
{   
    int count=0;
    for(int i=0;i<x;i++)
    {
        if(nums[i]%10==0)
            count=count+nums[i];
    }
    printf("%d",count);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    summ(n,ara);
}