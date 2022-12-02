#include<stdio.h>
int main()
{
    char sen[100];
    fgets(sen,sizeof(sen),stdin);

    int i=0;
    int count=0;
    while(sen[i] != '\0')
    {
        if( sen[i]=='a' || sen[i]=='b' || sen[i]=='c' || sen[i]=='d' || sen[i]=='e')
        {
            count++;
        }
        i++;
    }
    printf("numbers of vowel=%d",count);
}