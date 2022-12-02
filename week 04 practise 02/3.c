#include <stdio.h>
#include <string.h>
int main()
{
    int i, temp;
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    for (int j = 0; j < len; j++)
    {
        for (i = 0; i < len - 1; i++)
        {
            if (str[i] > str[i + 1])
            {
                temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
            }

            
        }
    }
    for(i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }
}