#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum=a+b+c;
    int *ptr=&sum;
    printf("%d",*ptr);
}