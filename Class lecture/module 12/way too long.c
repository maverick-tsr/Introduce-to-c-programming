#include <stdio.h>
#include <String.h>
int main()
{
    int i, n;
    scanf("%d", &n);

    for (i = 0; i <n; i++)
  
    {
        char name[105];
        scanf("%s[^\n]",name);
        int l = strlen(name);
        for (int j = 0; j < l; j++)
        {    
            
            if (l > 10 && name[j]>='a' && name[j]<='z')
            
            {   
                printf("%c%d%c", name[0], l - 2, name[l - 1]);
                break;
            }
            else
            { 
                puts(name);
                break;
            }
        }
        printf("\n");
        
    }
}