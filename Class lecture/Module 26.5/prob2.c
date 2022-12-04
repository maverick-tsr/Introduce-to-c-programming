#include<stdio.h>

void bubble(int x,int* ptr)
{
    for(int j=0;j<x;j++)
    {
        for(int i=j+1;i<x;i++)
        {
            if(*(ptr+j) > *(ptr+i))
            {
                int temp=*(ptr+j);
                *(ptr+j)=*(ptr+i);
                *(ptr+i)=temp;
            }
        }
    }
    for(int i=0;i<x;i++)
    {
        printf("%d ",*(ptr+i));
    }
   
}

int main()
{
    int n,ara[50];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    bubble(n,ara);
    
}