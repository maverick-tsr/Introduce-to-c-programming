#include <stdio.h>
int main()
{
    long long int S, A, B, C, D;
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        scanf("%lld%lld%lld%lld", &S, &A, &B, &C);

        
            D = S - A - B - C;
            printf("%d\n", D);
        
        
    }
}