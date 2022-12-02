#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter two value");
    scanf("%d %d",&x,&y);

    if(x>y)
    {
        printf("%d is the large number\n",x);
    }
    else if(x<y)
    {
        printf("%d is the large number\n",y);
    }
    else
    {
        printf("They are equal");
    }

    return 0;
}
