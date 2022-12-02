#include<stdio.h>
void print_hash(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("#");
    }
    printf("\n");
}
int main()
{
    for(int i=1;i<=5;i++)
        print_hash(i);
    return 0;
}