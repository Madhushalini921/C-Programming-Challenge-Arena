#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#include "hangman.h"

void programmingCategory(char word[]);
void animalCategory(char word[]);
void fruitCategory(char word[]);
void playHangman(char word[]);
void displayWord(char word[], char guessed[]);
void drawHangman(int lives);

/*----------------------------------------*/

void hangmanGame()
{
    char word[30];
    int choice;
    char playAgain;

    srand(time(NULL));

    do
    {
        printf("\n=========================================\n");
        printf("              HANGMAN\n");
        printf("=========================================\n");

        printf("\nChoose Category\n\n");

        printf("1. Programming\n");
        printf("2. Animals\n");
        printf("3. Fruits\n");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                programmingCategory(word);
                break;

            case 2:
                animalCategory(word);
                break;

            case 3:
                fruitCategory(word);
                break;

            default:
                printf("\nInvalid Choice!\n");
                continue;
        }

        playHangman(word);

        printf("\nPlay Again? (Y/N): ");
        scanf(" %c",&playAgain);

        playAgain=toupper(playAgain);

    }while(playAgain=='Y');
}

/*----------------------------------------*/

void programmingCategory(char word[])
{
    char words[10][20]=
    {
        "printf",
        "compiler",
        "pointer",
        "function",
        "variable",
        "structure",
        "integer",
        "library",
        "recursion",
        "algorithm"
    };

    strcpy(word,words[rand()%10]);
}

/*----------------------------------------*/

void animalCategory(char word[])
{
    char words[10][20]=
    {
        "elephant",
        "tiger",
        "lion",
        "rabbit",
        "zebra",
        "monkey",
        "penguin",
        "giraffe",
        "dolphin",
        "kangaroo"
    };

    strcpy(word,words[rand()%10]);
}

/*----------------------------------------*/

void fruitCategory(char word[])
{
    char words[10][20]=
    {
        "apple",
        "banana",
        "orange",
        "mango",
        "grapes",
        "papaya",
        "guava",
        "peach",
        "pineapple",
        "watermelon"
    };

    strcpy(word,words[rand()%10]);
}
/*----------------------------------------*/

void playHangman(char word[])
{
    int length = strlen(word);

    char guessed[30];

    char usedLetters[26];

    int guessedCount = 0;

    int lives = 6;

    int i;

    int complete;

    char letter;

    for(i = 0; i < length; i++)
    {
        guessed[i] = '_';
    }

    guessed[length] = '\0';

    while(lives > 0)
    {
        complete = 1;

        drawHangman(lives);

        printf("\nWord : ");

        displayWord(word, guessed);

        printf("\nLives Remaining : %d\n", lives);

        printf("\nGuessed Letters : ");

        for(i = 0; i < guessedCount; i++)
        {
            printf("%c ", usedLetters[i]);
        }

        printf("\n");

        printf("\nEnter a Letter : ");
        scanf(" %c", &letter);

        letter = tolower(letter);

        int found = 0;

        for(i = 0; i < length; i++)
        {
            if(word[i] == letter)
            {
                guessed[i] = letter;
                found = 1;
            }
        }

        if(!found)
        {
            lives--;
        }

        usedLetters[guessedCount++] = toupper(letter);

        for(i = 0; i < length; i++)
        {
            if(guessed[i] == '_')
            {
                complete = 0;
                break;
            }
        }

        if(complete)
        {
            printf("\n=========================================\n");
            printf("        CONGRATULATIONS!\n");
            printf("=========================================\n");

            printf("\nYou guessed the word correctly!\n");
            printf("Word : %s\n", word);

            return;
        }
    }

    drawHangman(0);

    printf("\n=========================================\n");
    printf("            GAME OVER\n");
    printf("=========================================\n");

    printf("\nCorrect Word : %s\n", word);
}

/*----------------------------------------*/

void displayWord(char word[], char guessed[])
{
    int i;

    for(i = 0; i < strlen(word); i++)
    {
        printf("%c ", guessed[i]);
    }

    printf("\n");
}
/*----------------------------------------*/

void drawHangman(int lives)
{
    printf("\n");

    switch(lives)
    {
        case 6:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("      |\n");
            printf("      |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n");
            break;

        case 5:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  O   |\n");
            printf("      |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n");
            break;

        case 4:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  O   |\n");
            printf("  |   |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n");
            break;

        case 3:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  O   |\n");
            printf(" /|   |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n");
            break;

        case 2:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  O   |\n");
            printf(" /|\\  |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n");
            break;

        case 1:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  O   |\n");
            printf(" /|\\  |\n");
            printf(" /    |\n");
            printf("      |\n");
            printf("=========\n");
            break;

        case 0:
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  O   |\n");
            printf(" /|\\  |\n");
            printf(" / \\  |\n");
            printf("      |\n");
            printf("=========\n");
            break;
    }
}