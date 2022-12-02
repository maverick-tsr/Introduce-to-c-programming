#include<stdio.h>
int main()
{
    int i,n,k,ans;
    
    scanf("%d%d",&n,&k);
    int arr[60];

    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ans=0;
    for(i=1;i<=n;i++)
    {
        if(arr[i]>=arr[k] && arr[i]>0)
        ans++;
    }
    printf("%d",ans);


}
