#include <stdio.h>

int main()
{
    int x;
    printf("Enter your value");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("They are even");
    }
    else
    {
        printf("They are odd");
    }
}