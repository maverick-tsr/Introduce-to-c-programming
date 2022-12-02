#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int ara[n];
    

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int out=0;
    for(int i=1;i<=n;i++)
    {
        if(ara[i]<k)
        {
            out++;
        }
    }
    printf("%d",out);
    
}