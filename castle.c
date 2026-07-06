#include <stdio.h>
#include <ctype.h>

#include "castle.h"

/* Function Prototypes */

void castleIntroduction();
void castleRoom1(int *score);
void castleRoom2(int *score);
void castleRoom3(int *score);
void castleRoom4(int *score);
void castleRoom5(int *score);
void showCastleResult(int score);

/* Main Function */

void castleEscapeGame()
{
    int score;
    char playAgain;

    do
    {
        score = 0;

        castleIntroduction();

        castleRoom1(&score);
        castleRoom2(&score);
        castleRoom3(&score);
        castleRoom4(&score);
        castleRoom5(&score);

        showCastleResult(score);

        printf("\nPlay Again? (Y/N): ");
        scanf(" %c",&playAgain);

        playAgain = toupper(playAgain);

    }while(playAgain=='Y');
}

/* Introduction */

void castleIntroduction()
{
    printf("\n");
    printf("=====================================================\n");
    printf("               CASTLE ESCAPE\n");
    printf("=====================================================\n");

    printf("\nYou wake up inside an ancient castle.\n");
    printf("The doors are locked and mysterious traps\n");
    printf("are hidden everywhere.\n");

    printf("\nYour mission is to escape safely by making\n");
    printf("the correct decisions in each room.\n");

    printf("\nEach correct decision earns 10 points.\n");
    printf("Maximum Score : 50\n");

    printf("\nGood Luck!\n");
    printf("=====================================================\n");
}
/* ---------------- ROOM 1 ---------------- */

void castleRoom1(int *score)
{
    char choice;

    printf("\n=====================================================\n");
    printf("                    ROOM 1\n");
    printf("=====================================================\n");

    printf("\nYou find three doors.\n");

    printf("\nA. Wooden Door");
    printf("\nB. Iron Door");
    printf("\nC. Golden Door");

    printf("\n\nChoose a Door: ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice=='A')
    {
        printf("\nCorrect!\n");
        printf("You safely enter the next room.\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Choice!\n");
        printf("You entered a trap room but escaped.\n");
    }
}

/* ---------------- ROOM 2 ---------------- */

void castleRoom2(int *score)
{
    char choice;

    printf("\n=====================================================\n");
    printf("                    ROOM 2\n");
    printf("=====================================================\n");

    printf("\nA sleeping dragon blocks your path.\n");

    printf("\nA. Attack the Dragon");
    printf("\nB. Walk Quietly");
    printf("\nC. Run Away");

    printf("\n\nYour Choice: ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice=='B')
    {
        printf("\nExcellent!\n");
        printf("You quietly passed the dragon.\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Choice!\n");
        printf("The dragon noticed you.\n");
    }
}

/* ---------------- ROOM 3 ---------------- */

void castleRoom3(int *score)
{
    char choice;

    printf("\n=====================================================\n");
    printf("                    ROOM 3\n");
    printf("=====================================================\n");

    printf("\nYou discover an old treasure chest.\n");

    printf("\nA. Open the Chest");
    printf("\nB. Ignore It");
    printf("\nC. Break It");

    printf("\n\nYour Choice: ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice=='A')
    {
        printf("\nGreat!\n");
        printf("You found the castle key.\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Choice!\n");
        printf("You missed an important item.\n");
    }
}
/* ---------------- ROOM 4 ---------------- */

void castleRoom4(int *score)
{
    char choice;

    printf("\n=====================================================\n");
    printf("                    ROOM 4\n");
    printf("=====================================================\n");

    printf("\nA guard suddenly appears!\n");

    printf("\nA. Fight the Guard");
    printf("\nB. Hide Behind a Pillar");
    printf("\nC. Surrender");

    printf("\n\nYour Choice: ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice=='B')
    {
        printf("\nExcellent!\n");
        printf("The guard walked away without noticing you.\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Choice!\n");
        printf("The guard spotted you, but you managed to escape.\n");
    }
}

/* ---------------- ROOM 5 ---------------- */

void castleRoom5(int *score)
{
    char choice;

    printf("\n=====================================================\n");
    printf("                    FINAL ROOM\n");
    printf("=====================================================\n");

    printf("\nYou finally reach the castle exit.\n");
    printf("The huge gate is locked.\n");

    printf("\nA. Use the Castle Key");
    printf("\nB. Break the Gate");
    printf("\nC. Search for Another Exit");

    printf("\n\nYour Choice: ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice=='A')
    {
        printf("\nCongratulations!\n");
        printf("The key unlocks the gate.\n");
        printf("You escaped from the castle safely!\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Choice!\n");
        printf("You wasted valuable time before finding the exit.\n");
    }
}

/* ---------------- FINAL RESULT ---------------- */

void showCastleResult(int score)
{
    printf("\n");
    printf("=====================================================\n");
    printf("             CASTLE ESCAPE COMPLETED\n");
    printf("=====================================================\n");

    printf("\nFinal Score : %d / 50\n", score);

    printf("\nRank : ");

    if(score == 50)
    {
        printf("CASTLE CHAMPION\n");
        printf("Outstanding! You escaped perfectly!\n");
    }
    else if(score >= 40)
    {
        printf("MASTER EXPLORER\n");
        printf("Excellent decisions throughout the castle!\n");
    }
    else if(score >= 30)
    {
        printf("BRAVE ADVENTURER\n");
        printf("Good job! You escaped with courage.\n");
    }
    else if(score >= 20)
    {
        printf("YOUNG EXPLORER\n");
        printf("You escaped, but there's room for improvement.\n");
    }
    else
    {
        printf("LOST TRAVELER\n");
        printf("You struggled to escape the castle.\n");
    }

    printf("\n=====================================================\n");
    printf("       THANK YOU FOR PLAYING CASTLE ESCAPE!\n");
    printf("=====================================================\n");
}