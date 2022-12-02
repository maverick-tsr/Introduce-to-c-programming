#include<stdio.h>
int main()
{
    int n,i,sum=0;
    n=5;
    int ara[n];

   for ( i = 0; i < n; i++)
   {
        scanf("%d",&ara[i]);
   }
   for ( i = 0; i < n; i++)
   {
         sum=sum+ara[i];
        
   }
   printf("%d\n",sum);
   
   
   
   
   
    

    return 0;
}