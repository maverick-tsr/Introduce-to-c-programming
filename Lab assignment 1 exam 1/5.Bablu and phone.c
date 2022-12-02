#include<stdio.h>
int main()
{
    int i,ans,n;
    scanf("%d",&n);
    int ara[n];

    for(i=0;i<n;i++)
    {
        scanf("%d%%",&ara[i]);
    }

    for(i=0; i<n; i++)
    {
        // if(ara[i]==0)
        //  printf("160 minutes");
        // if(ara[i]==100)
        //  printf("0 minutes");
        
        if(ara[i]>=0 && ara[i]<=60)
        {
            ans=(60-ara[i])+(20*2)+(20*3);
        
        }
        if(ara[i]>=60 && ara[i]<=80)
        {
            ans=(80-ara[i])*2+(20*3);
        
        }
        if(ara[i]>=80 && ara[i]<=100)
        {
            ans=(100-ara[i])*3;
        
        }
        printf("%d minutes\n",ans);
    }
    


    return 0;
}