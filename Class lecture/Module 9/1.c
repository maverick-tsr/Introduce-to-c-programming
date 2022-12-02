#include<stdio.h>
int main()
{
    int i;
    int n=5;
    int m=3;

   i=0;
  
   while(i<m)
   {     
        int j=0;
        while(j<n)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
   }
    


    return 0;
}