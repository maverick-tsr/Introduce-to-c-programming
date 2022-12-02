#include<stdio.h>

int factorial(int number)
{
    int fact=1;
    for(int i=1;i<=number;i++)
    {
        fact=fact*i;
    } 
    return fact;
}
float ratio(int a,int b)
{
    int x=factorial(a);
    int y=factorial(b);
    float z=x/y;
    return z;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float summ=ratio(a,b);
    printf("%.2f",summ);

}