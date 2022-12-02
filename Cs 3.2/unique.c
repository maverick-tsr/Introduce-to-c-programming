#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    int ara[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d",&ara[i]);
    }

    int unique_array[n];
    int unique_array_index = 0;

    for (i = 0; i < n; i++)
    {
        int select = ara[i];
        int found = 0;

        for (j = 0; j < n; j++)
        {
            if (unique_array[j] == select)
                found = 1;
        }

        if (found == 0)
        {
            unique_array[unique_array_index] = ara[i];
            unique_array_index++;
        }
    }

    for (i = 0; i < unique_array_index; i++)
    {
        printf("%d", unique_array[i]);
    }
}