#include <stdio.h>
int main()
{

    int i, j, n;
    n = 7;

    for ( j = 1; j <n; j++)
    {
        printf("#");
    }
    

    
    for (i = 0; i < (n - 2); i++)
   {
        printf("#");
        for ( j = 0; j < n-2; j++)
        {
            printf(" ");
        }
        printf("#\n");
        
   }
    for ( j = 0; j <n; j++)
    {
        printf("#");
    }
}