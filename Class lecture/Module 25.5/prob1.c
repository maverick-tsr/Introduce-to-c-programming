#include<stdio.h>

void gl_five(int x,int y,int nums[])
{   
    int count =0;
    for(int i=0;i<x;i++)
    {
        if(nums[i]>y || nums[i]<y)
        {
            count++;
        }
    }
    printf("%d",count);
}

int main()
{
    int n,k,ara[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    scanf("%d",&k);
    gl_five(n,k,ara);
}