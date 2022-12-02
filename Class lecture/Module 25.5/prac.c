#include<stdio.h>
#include<string.h>
#include<math.h>

void power(int x)
{   int flag=0;
    while(x !=1)
    {
        if(x%2!=0)
        {
            flag=0;
            x=x/2;
        }
        
        else
        {
            flag++;
        }
    }
    if(flag!=0)
        printf("No");
    else
    {
        printf("Yes\n");
        
    }
    


}

int main()
{
    char s[100];
    int ans=0;
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        s[i]=s[i]-96;
    }
    for(int i=0;i<len;i++)
    {
        ans += s[i];
    }
    
    
}