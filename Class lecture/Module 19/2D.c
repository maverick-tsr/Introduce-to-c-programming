#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int ara[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ara[i][j]== i+1 && ara[i][j]==j+1)
            {
                ara[i][j]+=3;
            }
            else if(ara[i][j] ==i+1 && ara[i][j] !=j+1)
            {
                ara[i][j]+=2;
            }
            else if(ara[i][j] != i+1 && ara[i][j]==j+1)
            {
                ara[i][j]+=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",ara[i][j]);
        }
        printf("\n");
    }

}