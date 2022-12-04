#include<stdio.h>

void array(int x,int *ptr)
{
    for(int i=0;i<x;i++)
    {
        printf("%d",*(ptr+i));
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int ara[50];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&ara[i]);
    }

    array(n,ara);


    return 0;
}