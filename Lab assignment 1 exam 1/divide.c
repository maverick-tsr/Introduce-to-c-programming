#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        int count = 0;
        scanf("%d", &n);

        for (int j = 2; j < n; j++)
        {
            if (n % j == 0)
            {
                count = 1;
            }
            
        }
        if(n==1)
        {
            count=1;
        }

        if(count==0)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}