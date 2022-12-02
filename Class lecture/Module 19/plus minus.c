#include <stdio.h>
int main()
{
    int n, i, flag = 0,seq=0;
    scanf("%d", &n);
    char str[105];
    scanf("%s", str);

    for (i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
        {
            flag++;
        }
        else
        {
            flag = 0;
        }
        if(flag>seq)
        {
            seq=flag;
        } 
    }
      
    printf("%d",seq+1);
}
