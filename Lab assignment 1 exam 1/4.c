#include<stdio.h>
int main()

{
    int i,n;
    scanf("%d",&n);
    int ara[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int largest=ara[0];

    for(i=0;i<n;i++)
    {
        if(largest<ara[i])
        {
            largest=ara[i];
        }
    }
    for(i=0;i<n;i++)
    {
        int sum=largest-ara[i];
        printf("%d ",sum);
    }

}