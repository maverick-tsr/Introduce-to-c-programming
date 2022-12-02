#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int ara[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }
    if (row == col)
    {
        int ans = 1;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i + j == row -1)
                {
                    continue;
                }
                if (ara[i][j] != 0)
                {
                    ans = 0;
                }
            }
        }
        if(ans==0)
        {
            printf("Not diagonal");
        }
        else{
            printf("diagonal");
        }
    }
    else
    {
        printf("Not diagonal");
    }
}