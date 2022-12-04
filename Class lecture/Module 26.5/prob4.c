#include<stdio.h>
float area(int x)
{
    float summ=0;
    summ=3.1416*x*x;
    return summ;
}
int main()
{
    int r;
    scanf("%d",&r);
    float ans=area(r);
printf("%f",ans);


    return 0;
}