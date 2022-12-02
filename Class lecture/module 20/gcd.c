#include<stdio.h>
int my_gcd(int x ,int y)
{
    int i;
    for(i=x;i>=1;i--)
    {
        if(x%i==0 && y%i==0)
        {
            return i;
        }
    }
}

int main()
{
    int sum,a,b;
    scanf("%d%d",&a,&b);
    sum=my_gcd(a,b);
    printf("%d",sum);
    
}