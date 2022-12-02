#include<stdio.h>
int main()
{
    int i,w,n,h,x;
    w=0;
    scanf("%d %d",&n,&h);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x>h)
        {
            w=w+2;
        }
        else
        {
            w=w+1;
        }
        
    }
    printf("%d",w);
}