#include <stdio.h>
#include<string.h>
int main()
{
    char s[20];
    scanf("%s",s);
    int n=strlen(s);
    int a, b,num1=0,num2=0,ans=0;
    scanf("%d%d", &a, &b);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='+')
        {
            num1=a+b;
            ans+=num1;
            
        }
        if(s[i]=='*')
        {
            num2=(a*b);
            ans+=num2;
        }
        
        
    }
    printf("%d",ans);
    
}