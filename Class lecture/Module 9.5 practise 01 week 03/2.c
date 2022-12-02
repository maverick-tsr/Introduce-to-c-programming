#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i += 1)
    {
        scanf("%d", arr[i]);
    }

    int  Q, v;
    scanf("%d", &Q);
    for (int j = 0; j < Q; j += 1)
    {
        scanf("%d%d", &i, &v);
    }

    return 0;
}