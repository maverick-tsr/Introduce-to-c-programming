#include<stdio.h>
int main()
{
    int t;
    int ara[100];
    scanf("%d",&t);
    

    for(int i=1;i<=t;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(int i=1;i<=t;i++)
    {
        int count=0;
        if(ara[i]==1)
        {
            count=1;
        }
        for(int j=2;j<ara[i];j++)
        {
            if(ara[i]%j==0)
            {
                count=1;
            }
        }
        if(count==1)
        {
            printf("No\n");
        }
        else if(count==0)
        {
            printf("Yes\n");
        }
    
    }



}