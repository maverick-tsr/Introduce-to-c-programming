#include<stdio.h>
int main()
{
    int i,j,n,a,count,solved;
    solved=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {   
        count=0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&a);
            if(a==1)
            {
                count++;
            }
        }
        if(count>=2)
        {
            solved++;
        }
    }
    printf("%d\n",solved);
}