#include<stdio.h>
int main()
{
    int *ptr1, *ptr2,a,b;
    ptr1=&a;
    ptr2=&b;
    scanf("%d%d",ptr1,ptr2);
    float avg=(float)(*ptr1+*ptr2)/2;
    printf("%.2f",avg);

}