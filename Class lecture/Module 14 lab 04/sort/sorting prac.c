#include <stdio.h>
int main()
{
    int ara[8] = {7, 9, 3, 12, 15, 2, 6, 5};

    int min,min_index,new_ara[8];
    for (int j = 0; j < 8; j++)
    {
         min = ara[0];
         min_index = 0;
        
        for (int i = 0; i < 8; i++)
        {
            if (ara[i] < min)
            {
                min = ara[i];
                min_index = i;
            }
        }
        new_ara[j] = min;
        ara[min_index] = 999;
    }
    for (int i = 0; i < 8; i++)
        {
            printf("%d ", new_ara[i]);
        }
        printf("\n");
}