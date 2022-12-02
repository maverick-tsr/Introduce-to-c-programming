#include<stdio.h>

int main()

{
    int x,y,z;
    printf("Enter the three values");
    scanf("%d %d %d ", &x,&y,&z);

    if(x>y && x>>z)
    {
        printf("a is the largest number");
    }
    else if(y>x && y>>z )
    {
        printf("b is the largest number");
    }
    else
    {
        printf("c is the largest number");
    }



    return 0;
}
