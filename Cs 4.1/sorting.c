#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="bbbbaccddd";
    int n=strlen(str);
    
    int largest_number=26;
    int freq[largest_number+1];
    for(int i=0;i<=largest_number;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        freq[(str[i]-'a')+1]++; 
    }
    for(int i=1;i<=26;i++)
    {
        printf("%d ",freq[i]);
    }



}