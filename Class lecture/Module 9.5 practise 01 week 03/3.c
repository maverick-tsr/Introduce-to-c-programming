#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            printf("Yes");
            break;
        }
        else
        {
            printf("No");
            break;
        }
    }

    return 0;
}