#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[100];
    scanf("%s", str);
    int n = strlen(str);
    int largest_number = 26;
    int freq[largest_number + 1];

    for (i = 0; i <= largest_number; i++)
    {
        freq[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        freq[(str[i] - 'a') + 1]++;
    }
    int total = 0;
    for (i = 0; i < largest_number; i++)
    {
        if (freq[i] > 0)
        {
            total++;
        }
    }
    int nxt;
    while (nxt != total)
    {
        int max = -1, index = -1;
        char ch;

        for (i = 1; i <= largest_number; i++)
        {
            if (freq[i] > max)
            {
                max = freq[i];
                ch = i + 96;
                index = i;
            }
        }
        for (i = 1; i <= max; i++)
        {
            printf("%c", ch);
        }
        freq[index] = 0;
        nxt++;
    }

    return 0;
}