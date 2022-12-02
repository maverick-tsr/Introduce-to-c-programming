#include <stdio.h>

int get_prime(int x)
{
    int i;
    if (x == 1)
    {
        return 0;
    }
    if (x == 2)
    {
        return 1;
    }
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    for (i = 2; i < x; i++)
    {
        if (x % i != 0)
        {
            return 1;
        }
    }
}

int main()
{
    int sum, a;
    scanf("%d", &a);
    sum = get_prime(a);
    if (sum == 1)
    {
        printf("prime");
    }
    else
    {
        printf("Not Prime");
    }

    return 0;
}