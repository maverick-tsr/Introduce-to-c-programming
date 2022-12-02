#include <stdio.h>
int main()

{
    int i, n, m;
    printf("Enter the value of n and m ");
    scanf("%d%d", &n, &m);

    for (i = 1; i <= n; i++)
    {
        if (i % m == 0)
        {
            printf("%d ", i);
        }
        else
        {
            printf("Invalid input.");
            break;
        }
    }
}