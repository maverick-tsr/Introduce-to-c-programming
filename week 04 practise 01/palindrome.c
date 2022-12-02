#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    int flag=0;
    
    for(int i=0;i<n;i++)
    {   
        
        if(str[i]==str[n-i-1])
        {
            flag=0;
        }
        else
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not ");
    }
}