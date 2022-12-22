#include <stdio.h>
#include <stdbool.h>
void printcell();
int iswin();
int main()
{
    int n = 3;
    int ara[4][4];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ara[i][j] = -1;
        }
    }
    bool player1 = true;
    bool player2 = false;
    while (true)
    {
        printcell(ara, n);
        if (player1 == true)
        {
            int r, c;
        FLAG:
            printf("Player1 turn(X); Enter row and column number: ");
            scanf("%d%d", &r, &c);
            if (ara[r][c] != -1)
            {
                printf("Invalid input\n");
                goto FLAG;
            }
            ara[r][c] = 1;
            player1 = false;
            player2 = true;
        }
        else
        {
            int r, c;
        Flag2:
            printf("Player2 turn(O); Enter row and column number: ");
            scanf("%d%d", &r, &c);
            if (ara[r][c] != -1)
            {
                printf("Invalid input\n");
                goto Flag2;
            }
            ara[r][c] = 2;
            player2 = false;
            player1 = true;
        }
        // check who wins
        if (iswin(ara, n) == 1)
        {
            printf("Player 1 won\n");
            printcell(ara, n);
            break;
        }
        if (iswin(ara, n) == 2)
        {
            printf("Player 2 won\n");
            printcell(ara, n);
            break;
        }
        }
}

void printcell(int ara[][4], int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (ara[i][j] == -1)
                printf(" ");
            if (ara[i][j] == 1)
                printf("X");
            if (ara[i][j] == 2)
                printf("O");
            if (j < n)
                printf(" \t|\t");
        }
        printf("\n");
        if (i < n)
            printf("_____________________________________");
        printf("\n\n");
    }
}

int iswin(int ara[][4], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (ara[i][1] == ara[i][2] && ara[i][2] == ara[i][3] && ara[i][3] != -1)
            return ara[i][2];
    }
    for (int j = 0; j <= n; j++)
    {
        if (ara[1][j] == ara[2][j] && ara[2][j] == ara[3][j] && ara[2][j] != -1)
            return ara[2][j];
    }
    for (int i = 1; i <= 3; i++)
    {
        if (ara[1][1] == ara[2][2] && ara[2][2] == ara[3][3] && ara[2][2] != -1)
            return ara[1][1];
    }
    for (int i = 1; i <= 3; i++)
    {
        if (ara[1][3] == ara[2][2] && ara[2][2] == ara[3][1] && ara[2][2] != -1)
            return ara[2][2];
    }
    return -1;
}