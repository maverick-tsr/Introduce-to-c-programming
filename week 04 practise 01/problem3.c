#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int len=strlen(s);
    int vc=0,cc=0;

    for(int i=0;i<len;i++)
    {
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            vc++;
        }
        else
        {
            cc++;
        }
    }
    printf("Vowel- %d\n",vc);
    printf("Consonant- %d\n",cc);

}