#include<stdio.h>

int sum(int x)
{
    if(x>0)
    {
        return sum(x-1)+x;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans=sum(n);
    printf("%d",ans);
}