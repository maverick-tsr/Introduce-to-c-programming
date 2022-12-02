#include <stdio.h>
int add_three_nums(int a, int b, int c);
int main()
{
    int a, b,c;
    scanf("%i %i", &a, &b,&c);
    int ans = add_three_nums(a, b, c);
    printf("%d\n", ans);
}
int add_three_nums(int a, int b, int c)
{
    c =0;
    return (a + b + c);
}
