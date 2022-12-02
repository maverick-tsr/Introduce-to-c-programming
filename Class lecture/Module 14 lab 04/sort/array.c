#include <stdio.h>
int main()
{
    int ara[8] = {7, 9, 3, 12, 15, 2, 6, 5};

    for (int j = 0; j < 8; j++)
    {
        int min = ara[0];
        int min_index = 0;
        int new_array[8];
        for (int i = 0; i < 8; i++)
        {
            if (ara[i] < min)
            {
                min = ara[i];
                min_index = i;
            }
        }
        new_array[j] = min;
        ara[min_index] = 99999;

        for (int i = 0; i < 8; i++)
        {
            printf("%d  ", new_array[i]);
        }
        printf("\n");
    }
}