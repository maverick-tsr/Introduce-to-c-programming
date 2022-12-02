#include <stdio.h>
int main()
{
    int x, y;
    int matrix[6][6];
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    int col_change,row_change;
    if (x > 3)
    {
        row_change = x - 3;
    }
    else
    {
        row_change = 3 - x;
    }

    if (y > 3)
    {
        col_change = y - 3;
    }
    else
    {
        col_change = 3 - y;
    }
    int ans=0;
    ans=row_change+col_change;
    printf("%d",ans);
}