#include <stdio.h>
int main()
{
    int i, n, m;
    printf("Enter the value of n and m ");
    scanf("%d%d", &n, &m);

    for (i = n; i <= m; i++)
    {
        printf("%d  ", i);
    }
    for (i = n; i >= m; i++)
    {
       
        if (n > 23)
        {
            for (i = 0; i < m; i++)
            {
                printf("%d", i);
            }
             printf("%d", i);
        }
    }
}