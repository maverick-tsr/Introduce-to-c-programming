#include<stdio.h>
int sod(int x)
{
    int summ=0;
    while(x>0)
    {
        summ=summ+(x%10);
        x=x/10;
    }
    return summ;
}

int is_prime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i ==0) 
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);

    if(is_prime(sod(n))==1)
        printf("Farhan's number");
    else
        printf("No");
}