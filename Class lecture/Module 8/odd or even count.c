#include<stdio.h>
int main()
{
    int i,n,c1=0,c2=0;
    n=8;
    int ara[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for ( i = 0; i < n; i++)
    {
        if(ara[i]%2==0)
        {
            c1=c1+1;
        }
        else
        {
            c2=c2+1;
        }
    }
    printf("The number of even are %d\n",c1);
    printf("The numbers of odd are %d\n",c2);
    
    


    return 0;
}