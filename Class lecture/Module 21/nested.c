#include<stdio.h>
#include<math.h>

float f(int x,int y);
int absolute(int x);
int square(int y);

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float ans;
    ans=f(x,y);
    printf("%f",ans);
}
float f(int x,int y)
{
    int tempans=absolute(x-3)+ square(y);
    return sqrt(tempans);
}
int absolute(int x)
{
    if(x>=0)
    {
        return x;
    }
    else
    {
        return (-1)*x;
    }
}
int square(int y)
{
    int temp=(y+4)*(y+4);
    return temp;
}