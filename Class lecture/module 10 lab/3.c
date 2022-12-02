#include <stdio.h>
int main()
{
    int i, j, n, ec, oc, ans;
    ec = 0;
    oc = 0;
    scanf("%d", &n);
    int arr[101];

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
            ec++;
        else
            oc++;
    }

    if (ec == 1)
    {
        for (i = 1; i <= n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                ans = i;
            }
        }
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(arr[i]%2 != 0)
            {
                ans=i;
            }
        }
    }
    printf("%d",ans);
}