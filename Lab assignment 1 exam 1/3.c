#include<Stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    printf("1\n");

    for(i=1;i<n;i++)
    {  
       for(j=i+1;j!=0;j--)
       {
        printf("%d ",j);
       }
       printf("\n");
    }
}