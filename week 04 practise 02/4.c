#include <stdio.h>
int main()
{
    int row, col,i,j;
    scanf("%d%d", &row, &col);
    int mat1[row][col];
    int mat2[row][col];
    int mat3[row][col];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            mat3[i][j]=((mat1[i][j])*(mat2[i][j]))+((mat1[i][j+1])*(mat2[j+1][i]))+((mat1[i][j+2])*(mat2[j+2][i]));
        }
    }
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}