#include<stdio.h>
int main()
{
    int i,n;
    n=6;
    int ara[n];
    

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int max=ara[0];
    for ( i = 0; i < n; i++)
    {
        if (ara[i]>max)
        {
            max=ara[i];
        }
    }
    printf("maximum value is %d",max);
    


    return 0;
}