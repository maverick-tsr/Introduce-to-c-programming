#include <stdio.h>
#include <string.h>

void cass(int x, char nums[])
{
    for (int i = 0; i < x; i++)
    {
        if(nums[i] %2 == 0)
            nums[i]=nums[i]-32;
    }
    for (int i = 0; i < x; i++)
    {
        printf("%c",nums[i]);
    }
}
int main()
{
    char str[500];
    scanf("%s", str);
    int len = strlen(str);
    cass(len, str);
}