#include<stdio.h>
int add_ara(int x, int nums[]);
int main()
{
    int ara[]={1,2,3,4,5};
    int sum=add_ara(5,ara);
    printf("The sum is %d",sum);
}
int add_ara(int x, int nums[])
{
    int i;
    int summ=0;
    for(i=0;i<x;i++)
        summ=summ+nums[i];
    return summ;
}