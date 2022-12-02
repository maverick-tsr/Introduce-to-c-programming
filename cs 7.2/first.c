#include<stdio.h>
int main()
{
    int *a=20;
    
    // int *b=&a;
    int* b;
    b=&a;

    *b=5000;


    // printf("adress a= %p\n",&a);
    // printf("address b=%p",b);
    printf("value a=%d value b=%d",a,*b);

}