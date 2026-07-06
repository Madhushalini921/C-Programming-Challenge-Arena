#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#include "guess.h"

void guessNumberGame()
{
    int secretNumber;
    int guess;
    int attempts = 0;
    char playAgain;

    srand(time(NULL));

    do
    {
        secretNumber = rand() % 100 + 1;
        attempts = 0;

        printf("\n=========================================\n");
        printf("        GUESS THE NUMBER GAME\n");
        printf("=========================================\n");

        printf("\nI have selected a number between 1 and 100.\n");
        printf("Try to guess it!\n");

        while(1)
        {
            printf("\nEnter your guess: ");
            scanf("%d", &guess);

            attempts++;

            if(guess < secretNumber)
            {
                printf("Too Low! Try Again.\n");
            }
            else if(guess > secretNumber)
            {
                printf("Too High! Try Again.\n");
            }
            else
            {
                printf("\nCongratulations!\n");
                printf("You guessed the correct number.\n");
                printf("Attempts Taken: %d\n", attempts);

                if(attempts <= 5)
                    printf("Excellent!\n");
                else if(attempts <= 10)
                    printf("Very Good!\n");
                else
                    printf("Keep Practicing!\n");

                break;
            }
        }

        printf("\nPlay Again? (Y/N): ");
        scanf(" %c", &playAgain);

        playAgain = toupper(playAgain);

    } while(playAgain == 'Y');
}