#include <stdio.h>
#include <ctype.h>

#include "tictactoe.h"

char board[3][3];
char currentPlayer;

/* Function Prototypes */
void initializeBoard();
void displayBoard();
void playerMove();
int checkWinner();
int checkDraw();

void ticTacToeGame()
{
    char playAgain;

    do
    {
        int gameStatus = 0;

        currentPlayer = 'X';

        initializeBoard();

        while(1)
        {
            printf("\n=========================================\n");
            printf("            TIC TAC TOE\n");
            printf("=========================================\n");

            displayBoard();

            playerMove();

            gameStatus = checkWinner();
            printf("Winner Status = %d\n", gameStatus);
            if(gameStatus == 1)
{
    displayBoard();

    printf("\n=========================================\n");
    printf("        PLAYER %c WINS!\n", currentPlayer);
    printf("=========================================\n");

    break;
}

if(checkDraw())
{
    displayBoard();

    printf("\n=========================================\n");
    printf("           MATCH DRAW!\n");
    printf("=========================================\n");

    break;
}

            if(currentPlayer=='X')
                currentPlayer='O';
            else
                currentPlayer='X';
        }

        printf("\nPlay Again? (Y/N): ");
        scanf(" %c",&playAgain);

        playAgain=toupper(playAgain);

    }while(playAgain=='Y');
}

/* Initialize Board */

void initializeBoard()
{
    char value='1';

    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            board[i][j]=value;
            value++;
        }
    }
}

/* Display Board */

void displayBoard()
{
    printf("\n");

    printf(" %c | %c | %c\n",board[0][0],board[0][1],board[0][2]);
    printf("---+---+---\n");

    printf(" %c | %c | %c\n",board[1][0],board[1][1],board[1][2]);
    printf("---+---+---\n");

    printf(" %c | %c | %c\n",board[2][0],board[2][1],board[2][2]);

    printf("\n");
}

/* Player Move */

void playerMove()
{
    int choice;

    printf("Player %c\n",currentPlayer);

    printf("Enter Position (1-9): ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:

            if(board[0][0]=='X'||board[0][0]=='O')
            {
                printf("Position Already Taken!\n");
                playerMove();
                return;
            }

            board[0][0]=currentPlayer;
            break;

        case 2:

            if(board[0][1]=='X'||board[0][1]=='O')
            {
                printf("Position Already Taken!\n");
                playerMove();
                return;
            }

            board[0][1]=currentPlayer;
            break;

        case 3:

            if(board[0][2]=='X'||board[0][2]=='O')
            {
                printf("Position Already Taken!\n");
                playerMove();
                return;
            }

            board[0][2]=currentPlayer;
            break;

        case 4:

            if(board[1][0]=='X'||board[1][0]=='O')
            {
                printf("Position Already Taken!\n");
                playerMove();
                return;
            }

            board[1][0]=currentPlayer;
            break;

        case 5:

            if(board[1][1]=='X'||board[1][1]=='O')
            {
                printf("Position Already Taken!\n");
                playerMove();
                return;
            }

            board[1][1]=currentPlayer;
            break;

        case 6:

            if(board[1][2]=='X'||board[1][2]=='O')
            {
                printf("Position Already Taken!\n");
                playerMove();
                return;
            }

            board[1][2]=currentPlayer;
            break;

                case 7:

            if(board[2][0]=='X'||board[2][0]=='O')
            {
                printf("Position Already Taken!\n");
                playerMove();
                return;
            }

            board[2][0]=currentPlayer;
            break;

        case 8:

            if(board[2][1]=='X'||board[2][1]=='O')
            {
                printf("Position Already Taken!\n");
                playerMove();
                return;
            }

            board[2][1]=currentPlayer;
            break;

        case 9:

            if(board[2][2]=='X'||board[2][2]=='O')
            {
                printf("Position Already Taken!\n");
                playerMove();
                return;
            }

            board[2][2]=currentPlayer;
            break;

        default:

            printf("Invalid Position!\n");
            playerMove();
            return;
    }
}

/* Check Winner */

int checkWinner()
{
    int i;

    /* Check Rows */

    for(i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1] &&
           board[i][1]==board[i][2])
        {
            return 1;
        }
    }

    /* Check Columns */

    for(i=0;i<3;i++)
    {
        if(board[0][i]==board[1][i] &&
           board[1][i]==board[2][i])
        {
            return 1;
        }
    }

    /* Check Main Diagonal */

    if(board[0][0]==board[1][1] &&
       board[1][1]==board[2][2])
    {
        return 1;
    }

    /* Check Other Diagonal */

    if(board[0][2]==board[1][1] &&
       board[1][1]==board[2][0])
    {
        return 1;
    }

    return 0;
}
/* Check Draw */

int checkDraw()
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(board[i][j]!='X' && board[i][j]!='O')
            {
                return 0;
            }
        }
    }

    return 1;
}