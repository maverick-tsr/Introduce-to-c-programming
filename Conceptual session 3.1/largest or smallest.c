#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    int input[n];

    for (i = 0; i < n; i += 1)
    {
        scanf("%d", &input[i]);
    }
    int largest = input[0];
    for (i = 1; i < n; i++)
    {
        if (input[i] > largest)
        {
            largest = input[i];
        }
    }
    int arr[largest + 1];
    for (i = 0; i <=largest; i++)
    {
        arr[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        arr[input[i]] += 1;
    }
    int count = 0;
    for (i = largest; i >= 1; i--)
    {
        if (arr[i] == 1)
        {
            count = count + 1;
        }
        if (count == 3)
        {
            printf("The 3rd largest number is %d\n", i);
            break;
        }
    }
}