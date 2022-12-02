#include<stdio.h>
int main()
{
    int mat[3][3];
    int tmat[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            tmat[i][j]=mat[j][i];
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",tmat[i][j]);
        }
        printf("\n");
    }
}