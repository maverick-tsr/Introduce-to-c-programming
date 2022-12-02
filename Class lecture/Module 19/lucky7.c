#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int j = 1; j <= t; j++)
    {
        char str[30];
        scanf("%s", str);
        int len = strlen(str);
        int flag=0;
        for (int i = 0; i < (len/2); i++)
        {
            
            if (str[i] == str[len - i - 1])
            {
                flag = 1;
            }
            else
            {
                flag=0;
                break;
                
            }
        }
        if (flag ==1)
        {
            if (len > 7)
            {
                printf("Case #2: %c%d%c\n", str[0], (len - 2), str[len - 1]);
            }
            else
            {
                printf("Case #3: %s\n", str);
                
            }
        }
        else
        {
            printf("Case #1: Not Palindrome\n");
            
        }
    }
}
