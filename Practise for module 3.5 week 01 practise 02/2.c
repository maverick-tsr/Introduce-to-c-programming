#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three number");
    scanf("%d%d%d", &a, &b, &c);
    if(a==b && b==c && c=4=a)
    {
        printf("They are equal");
    }
    else if (a > b && a > c)
    {
        printf("a is bigger");
    }
    else if (b > c && b > a)
    {
        printf("b is bigger");
    }
    else
    {
        printf("c is bigger");
    }
}