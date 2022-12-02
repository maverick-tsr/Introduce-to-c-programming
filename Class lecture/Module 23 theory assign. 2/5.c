#include <stdio.h>
int add_three_nums(int a, int b, int c)
{
    c = 0;
    return a + b + c;
}
int main()
{
    int x, y, z;
    scanf("%d%d", &x, &y, &z);
    int ans = add_three_nums(x, y, z);
    printf("%d", ans);
}