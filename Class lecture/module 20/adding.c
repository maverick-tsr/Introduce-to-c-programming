#include<Stdio.h>

int get_addition(int x, int y)
{
    printf("Adding two numbers \n");
    return (x+y);
}

int main()
{
    int a,b,ans;
    scanf("%d%d",&a,&b);
    ans=get_addition(a,b);
    printf("%d",ans);

}