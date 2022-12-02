#include <stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d", &n);
    int ara[10];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (int j = 0; j < n; j++)
    {
        for (i = 0; i <n-1; i++)
        {
            if (ara[i] > ara[i + 1])
            {
                int temp = ara[i];
                ara[i] = ara[i + 1];
                ara[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }



    return 0;
}