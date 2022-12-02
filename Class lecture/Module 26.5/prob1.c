#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float avg=(float)(x+y)/2;
    float *ptr=&avg;
    printf("%f",*ptr);
}
