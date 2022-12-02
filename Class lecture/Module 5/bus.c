#include<stdio.h>
int main()
{
    int i,n,w,sum=0;
    printf("Enter the number of passengers");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
        {
            scanf("%d",&w);
            sum=sum+w;
        }
        printf("Total weight is %d",sum);
}