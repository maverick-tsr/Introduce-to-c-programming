#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[20];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        if (ara[i] > maxx && ara[i] % 2 == 0)
        {
            maxx = ara[i];
        }
    }
    int maxx1 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((ara[i] + ara[j]) % 2 == 0)
            {
                int temp = ara[i] + ara[j];
                if (temp > maxx1)
                {
                    maxx1 = temp;
                }
            }
        }
    }
    if(maxx>maxx1)
    {
        printf("%d",maxx);
    }
    else
    {
        printf("%d",maxx1);
    }
}