#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];

    for(i=1;i<=n;i+=1)
    {
        scanf("%d",&arr[i]);
    }

    for(i=n;i>0;i--)
    {
        printf("%d ",arr[i]);
    }



}