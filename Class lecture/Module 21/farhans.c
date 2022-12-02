#include <stdio.h>
int seven_present(int x);
int digsum(int x);
int last_digit_prime(int x);
int main()
{
    int n;
    scanf("%d", &n);
    if (seven_present(n) == 1 && digsum(n) > 10 && last_digit_prime(n) == 1)
    {
        printf("Farhans number");
    }
    else
    {
        printf("Not farhans number");
    }
}

int seven_present(int x)
{
    while (x > 0)
    {
        if (x % 10 == 7)
            return 1;
        x = x / 10;
    }
    return 0;
    
}
int digsum(int x)
{
    int ans=0;
    while(x>0)
    {
        ans=ans+(x%10);
        x=x/10;
    }
    return ans;
}
int last_digit_prime(int x)
{   
    int ld=x%10;
    if(ld==2 || ld==3 || ld==5 || ld==7)
        return 1;
    else
        return 0;
}