#include <stdio.h>
#include <string.h> 
int main()
{
    char str[100];
    //scanf("%s",str);
    fgets(str,sizeof(str),stdin);
    int len = strlen(str)-1;
    int flag = 1;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}