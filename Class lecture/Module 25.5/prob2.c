#include <stdio.h>

void sorting(int x, int nums[])
{
    int k;
    scanf("%d", &k);
    int largest_element = nums[0];
    for (int i = 1; i < x; i++)
    {
        if (nums[i] > largest_element)
        {
            largest_element = nums[i];
        }
    }
    int ara[largest_element + 1];
    for (int i = 0; i <= largest_element; i++)
    {
        ara[i] = 0;
    }
    for (int i = 0; i < x; i++)
    {
        ara[nums[i]] = ara[nums[i]] + 1;
    }
    k_thl(ara, largest_element, k);
    k_ths(ara,largest_element,k);
}
void k_thl(int flag[], int y, int z)
{
    int cnt=0;
    for (int i = y; i >= 1; i--)
    {
        if (flag[i] == 1)
            cnt++;
        if (cnt == z)
        {
            printf("The k-th largest element is %d\n", i);
        }
    }
}
void k_ths(int flag[],int y,int z)
{
    int cnt=0;
    for(int i=0;i<y;i++)
    {
        if(flag[i]==1)
            cnt++;
        if(cnt==z)
        {
            printf("The k-th smallest elemnet is %d\n",i);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    sorting(n, input);
}