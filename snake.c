#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#include "snake.h"

void initializeSnakeBoard(int board[]);
void playGame(int board[]);

/*------------------------------------------*/

void snakeLadderGame()
{
    int board[101];
    char playAgain;

    srand(time(NULL));

    do
    {
        initializeSnakeBoard(board);

        playGame(board);

        printf("\nPlay Again? (Y/N): ");
        scanf(" %c", &playAgain);

        playAgain = toupper(playAgain);

    } while(playAgain == 'Y');
}

/*------------------------------------------*/

void initializeSnakeBoard(int board[])
{
    int i;

    for(i = 0; i <= 100; i++)
    {
        board[i] = i;
    }

    /* Ladders */

    board[3] = 22;
    board[8] = 26;
    board[20] = 38;
    board[28] = 55;
    board[36] = 44;
    board[51] = 72;
    board[71] = 92;

    /* Snakes */

    board[17] = 4;
    board[54] = 34;
    board[62] = 19;
    board[64] = 60;
    board[87] = 24;
    board[93] = 73;
    board[98] = 79;
}

/*------------------------------------------*/

void playGame(int board[])
{
    int player1 = 1;
    int player2 = 1;

    int dice;

    char enter;

    while(1)
    {
        printf("\n==========================================\n");
        printf("         SNAKE AND LADDERS\n");
        printf("==========================================\n");

        printf("\nPlayer 1 Position : %d\n", player1);
        printf("Player 2 Position : %d\n", player2);

        printf("\n------------------------------------------\n");
        printf("PLAYER 1 TURN\n");
        printf("------------------------------------------\n");

        printf("\nPress ENTER to Roll Dice...");
        getchar();
        getchar();

        dice = rand() % 6 + 1;

        printf("\nYou rolled : %d\n", dice);

        if(player1 + dice <= 100)
        {
            player1 += dice;
        }

        if(board[player1] > player1)
        {
            printf("\nLADDER!\n");
            printf("%d -> %d\n", player1, board[player1]);

            player1 = board[player1];
        }
        else if(board[player1] < player1)
        {
            printf("\nSNAKE!\n");
            printf("%d -> %d\n", player1, board[player1]);

            player1 = board[player1];
        }

        if(player1 == 100)
        {
            printf("\n=========================================\n");
            printf("         PLAYER 1 WINS!\n");
            printf("=========================================\n");

            break;
        }
                printf("\n------------------------------------------\n");
        printf("PLAYER 2 TURN\n");
        printf("------------------------------------------\n");

        printf("\nPress ENTER to Roll Dice...");
        getchar();

        dice = rand() % 6 + 1;

        printf("\nYou rolled : %d\n", dice);

        if(player2 + dice <= 100)
        {
            player2 += dice;
        }

        if(board[player2] > player2)
        {
            printf("\nLADDER!\n");
            printf("%d -> %d\n", player2, board[player2]);

            player2 = board[player2];
        }
        else if(board[player2] < player2)
        {
            printf("\nSNAKE!\n");
            printf("%d -> %d\n", player2, board[player2]);

            player2 = board[player2];
        }

        if(player2 == 100)
        {
            printf("\n=========================================\n");
            printf("         PLAYER 2 WINS!\n");
            printf("=========================================\n");

            break;
        }

        printf("\n=========================================\n");
        printf("Current Positions\n");
        printf("=========================================\n");

        printf("Player 1 : %d\n", player1);
        printf("Player 2 : %d\n", player2);

        printf("\nPress ENTER to continue...");
        getchar();
    }
}