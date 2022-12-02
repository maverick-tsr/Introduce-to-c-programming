#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char freq[100];
    int x;
    scanf("%s %d",str,&x);
    int len=strlen(str);

    for(int i=0;i<100;i++)
    {
        freq[i]=0;
    }
   
    for(int i=0;i<len;i++)
    {
        freq[i]=str[i]+x;
        if(str[i]+x >'z')
        {
            freq[i]=str[i]+x-26;
        }
    }
    for(int i=0;i<len;i++)
    {
        printf("%c",freq[i]);
    }

}