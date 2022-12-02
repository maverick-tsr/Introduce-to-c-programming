#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d", &n);
    int input[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    scanf("%d",&k);
    int largest_element = input[0];
    for (int i = 1; i < n; i++)
    {
        if (input[i] > largest_element)
        {
            largest_element = input[i];
        }
    }
    int ara[largest_element + 1];
    for (int i = 0; i <=largest_element; i++)
    {
        ara[i] = 0;
    }
    for (int i = 0; i <n; i++)
    {
        ara[input[i]] = ara[input[i]] + 1;
    }
    int cnt=0;
    for (int i = largest_element; i >= 1; i--)
    {
        if (ara[i] == 1)
        {
            cnt++;
        }
        if (cnt == k)
        {
            printf("The kth largest element is %d\n", i);
            break;
        }
    }
}