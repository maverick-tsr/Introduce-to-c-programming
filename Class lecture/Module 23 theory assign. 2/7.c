#include <stdio.h>
float get_median(int x, int nums[]);
int main()
{
    int n, i;
    printf("How many number you want to take as input\n");
    scanf("%d", &n);
    int ara[500];
    printf("Enter your numbers\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    float ans = get_median(n, ara);
    printf("%.2f", ans);
}
float get_median(int x, int nums[])
{
    int i;
    float median = 0;

    for (int j = 0; j < x; j++)
    {
        for (i = 0; i < x - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                int temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
            }
        }
    }
    if (x % 2 != 0)
    {
        median = nums[(x / 2)];
        return median;
    }
    else
    {
        median = nums[x / 2] + nums[(x / 2) - 1];
        return median / 2;
    }
}