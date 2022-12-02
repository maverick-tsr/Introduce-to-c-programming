#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the two numbers");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("a is bigger");
    }
    else if (a < b)
    {
        printf("b is bigger");
    }
    else
    {
        printf("They are equal");
    }
}