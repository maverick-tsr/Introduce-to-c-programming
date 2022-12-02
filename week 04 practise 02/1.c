#include<stdio.h>
int main()
{
    int i,m;
    scanf("%d",&m);
    char str[200][200];

    for(i=0;i<m;i++)
    {
        scanf("%s",str[i]);
    }
     for(i=0;i<m;i++)
    {
        printf("%s ",str[i]);
    }



    return 0;
}