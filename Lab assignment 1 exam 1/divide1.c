#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[20];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int k;
    scanf("%d",&k);

   if(k==0)
   {
    for(int i=0;i<n;i++)
    {
        printf("%d",ara[i]);
    }
   }
   else
   {
    for(int i=k;i<n;i++)
    {
        printf("%d ",ara[i]);
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",ara[i]);
    }
   }
}