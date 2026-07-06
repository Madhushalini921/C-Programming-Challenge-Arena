#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#include "rps.h"

void rockPaperScissorsGame()
{
    int playerChoice;
    int computerChoice;
    int playerScore = 0;
    int computerScore = 0;
    int rounds = 0;
    char playAgain;

    srand(time(NULL));

    do
    {
        playerScore = 0;
        computerScore = 0;
        rounds = 0;

        printf("\n=========================================\n");
        printf("         ROCK PAPER SCISSORS\n");
        printf("=========================================\n");

        while(rounds < 5)
        {
            printf("\nRound %d of 5\n", rounds + 1);

            printf("1. Rock\n");
            printf("2. Paper\n");
            printf("3. Scissors\n");

            printf("Enter your choice: ");
            scanf("%d", &playerChoice);

            if(playerChoice < 1 || playerChoice > 3)
            {
                printf("Invalid choice! Try again.\n");
                continue;
            }

            computerChoice = rand() % 3 + 1;

            printf("\nComputer chose: ");

            switch(computerChoice)
            {
                case 1:
                    printf("Rock\n");
                    break;
                case 2:
                    printf("Paper\n");
                    break;
                case 3:
                    printf("Scissors\n");
                    break;
            }

            if(playerChoice == computerChoice)
            {
                printf("It's a Draw!\n");
            }
            else if(
                (playerChoice == 1 && computerChoice == 3) ||
                (playerChoice == 2 && computerChoice == 1) ||
                (playerChoice == 3 && computerChoice == 2))
            {
                printf("You Win this Round!\n");
                playerScore++;
            }
            else
            {
                printf("Computer Wins this Round!\n");
                computerScore++;
            }

            printf("Score: You %d - %d Computer\n", playerScore, computerScore);

            rounds++;
        }

        printf("\n=========================================\n");
        printf("            FINAL RESULT\n");
        printf("=========================================\n");

        printf("Your Score     : %d\n", playerScore);
        printf("Computer Score : %d\n", computerScore);

        if(playerScore > computerScore)
        {
            printf("\nCongratulations! You won the game!\n");
        }
        else if(playerScore < computerScore)
        {
            printf("\nComputer won the game!\n");
        }
        else
        {
            printf("\nThe game is a Draw!\n");
        }

        printf("\nPlay Again? (Y/N): ");
        scanf(" %c", &playAgain);

        playAgain = toupper(playAgain);

    } while(playAgain == 'Y');
}