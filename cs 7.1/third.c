//sum of natural numbers

#include<stdio.h>

int sum(int n)
{
    if(n>0)
    {
        return sum(n-1)+n;
    }
    return 0;
}
int main()
{
    
    printf("%d ",sum(5));


    return 0;
}
