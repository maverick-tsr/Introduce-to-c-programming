#include <stdio.h>
int main()
{
    int ara[8] = {7, 9, 3, 12, 15, 2, 6, 5};

    for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < (8 - 1); i++)
        {
            if (ara[i] > ara[i + 1])
            {
                int temp = ara[i];
                ara[i] = ara[i + 1];
                ara[i + 1] = temp;
            }
        }
    }
    for(int i=0;i<8;i++)
    {
        printf("%d ",ara[i]);
    }
}