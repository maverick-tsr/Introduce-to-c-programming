#include<stdio.h>
#include<string.h>
int main()
{
    char sen[1002];
    fgets(sen,sizeof(sen),stdin);

    if(sen[0]>='a' && sen[0]<='z')
    {
        sen[0]=sen[0]-32;
    }
    printf("%s",sen);

}