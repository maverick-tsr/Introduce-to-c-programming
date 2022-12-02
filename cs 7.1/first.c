//recursive function
//1.calling the function itself
//2. base case or function termination condition

 //n to 1 

#include<stdio.h>

void print(int n)
{
    if(n>0)
    {
        printf("%d  ",n);
        print(n-1);
    }
}
int main()
{
    print(4);
    return 0;
}




