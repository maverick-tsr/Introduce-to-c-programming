#include <stdio.h>
int main()
{   int m;
    long long int n;
    scanf("%lld", &n);

    if (n % 3 == 0)
    {
        m = n / 3;
        
    }
    if(n%3==0)
    {
        printf("%d",m);
    }
    else
    printf("-1");

    
}