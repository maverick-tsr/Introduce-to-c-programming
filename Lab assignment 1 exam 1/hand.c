#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);

    long long int sum;
    sum=(n*(n-1))/2;
    printf("%lld",sum);



    return 0;
}