#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your three values");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && a>c && b>c)
    {
        printf("A and B both are bigger");
    }
    else if(b==c && b>a && c>a)
    {
        printf("B and C both are bigger");
    }
    else if (c==a && c>b && a>b)
    {
        printf("A and C both are bigger");
    }
    


}