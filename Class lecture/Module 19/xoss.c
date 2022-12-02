#include <stdio.h>
int main()
{
    int n, i, j, count = 2;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (j = 1; j <= n; j++)
            {
                printf("%d", j);
            }
            printf("\n");
        }
        else if (i == n)
        {
            for (j = 1; j <= n; j++)
            {
                printf("%d", i);
            }
            printf("\n");
        }
        else
        {
            for (j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    printf("%d", count);
                    count++;
                }
                else if (j + 1 == n)
                {
                    printf("%d",n);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}