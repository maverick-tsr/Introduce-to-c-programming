#include<stdio.h>
int main()

{
    int i,n;
    printf("Enter the value of n");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
        else
        {
            continue;
        }
    }
}