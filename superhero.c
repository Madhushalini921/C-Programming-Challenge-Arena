#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "superhero.h"

void introduction();
void mission1(char hero[], int *score);
void mission2(char hero[], int *score);
void mission3(char hero[], int *score);
void mission4(char hero[], int *score);
void mission5(char hero[], int *score);
void showResult(char hero[], int score);

void superheroMission()
{
    char hero[50];
    int score;
    char playAgain;

    do
    {
        score = 0;

        introduction();

        printf("\nEnter Your Superhero Name : ");
        scanf("%s", hero);

        printf("\nWelcome %s!\n", hero);
        printf("Neo City needs your help!\n");

        mission1(hero, &score);
        mission2(hero, &score);
        mission3(hero, &score);
        mission4(hero, &score);
        mission5(hero, &score);

        showResult(hero, score);

        printf("\nPlay Again? (Y/N): ");
        scanf(" %c", &playAgain);

        playAgain = toupper(playAgain);

    } while(playAgain == 'Y');
}

void introduction()
{
    printf("\n");
    printf("=============================================\n");
    printf("       SUPERHERO RESCUE MISSION\n");
    printf("=============================================\n");

    printf("\nNeo City is under attack!\n");
    printf("Citizens are waiting for a superhero.\n");
    printf("Complete all five missions.\n");
    printf("Each correct decision earns 10 points.\n");
    printf("Save the city and become a legend!\n");
}

void mission1(char hero[], int *score)
{
    char choice;

    printf("\n=============================================\n");
    printf("MISSION 1\n");
    printf("=============================================\n");

    printf("\nA bridge is collapsing!\n");

    printf("\nA. Rescue the civilians");
    printf("\nB. Chase the villain");
    printf("\nC. Protect the bank");

    printf("\n\nEnter Choice : ");
    scanf(" %c", &choice);

    choice = toupper(choice);

    if(choice == 'A')
    {
        printf("\nExcellent!\n");
        printf("%s saved hundreds of civilians.\n", hero);

        *score += 10;
    }
    else
    {
        printf("\nWrong Decision!\n");
        printf("Many people were left in danger.\n");
    }
}

void mission2(char hero[], int *score)
{
    char choice;

    printf("\n=============================================\n");
    printf("MISSION 2\n");
    printf("=============================================\n");

    printf("\nA hospital catches fire.\n");

    printf("\nA. Rescue the patients");
    printf("\nB. Wait for backup");
    printf("\nC. Chase the villain");

    printf("\n\nEnter Choice : ");
    scanf(" %c", &choice);

    choice = toupper(choice);

    if(choice == 'A')
    {
        printf("\nOutstanding!\n");
        printf("%s rescued every patient safely.\n", hero);

        *score += 10;
    }
    else
    {
        printf("\nWrong Decision!\n");
        printf("The rescue was delayed.\n");
    }
}
void mission3(char hero[], int *score)
{
    char choice;

    printf("\n=============================================\n");
    printf("MISSION 3\n");
    printf("=============================================\n");

    printf("\nThe villain hacks the city's power station.\n");

    printf("\nA. Restore the power");
    printf("\nB. Destroy the control room");
    printf("\nC. Escape from the area");

    printf("\n\nEnter Choice : ");
    scanf(" %c",&choice);

    choice=toupper(choice);

    if(choice=='A')
    {
        printf("\nExcellent!\n");
        printf("%s restored electricity across Neo City.\n",hero);

        *score += 10;
    }
    else
    {
        printf("\nWrong Decision!\n");
        printf("The city remained without power.\n");
    }
}

void mission4(char hero[], int *score)
{
    char choice;

    printf("\n=============================================\n");
    printf("MISSION 4\n");
    printf("=============================================\n");

    printf("\nThe villain hides inside an abandoned factory.\n");

    printf("\nA. Rescue the hostages first");
    printf("\nB. Attack the villain immediately");
    printf("\nC. Leave the factory");

    printf("\n\nEnter Choice : ");
    scanf(" %c",&choice);

    choice=toupper(choice);

    if(choice=='A')
    {
        printf("\nBrilliant!\n");
        printf("%s rescued every hostage safely.\n",hero);

        *score += 10;
    }
    else
    {
        printf("\nWrong Decision!\n");
        printf("The hostages were left behind.\n");
    }
}

void mission5(char hero[], int *score)
{
    char choice;

    printf("\n=============================================\n");
    printf("FINAL MISSION\n");
    printf("=============================================\n");

    printf("\nThe villain launches a Giant Robot!\n");

    printf("\nChoose your strategy:\n");

    printf("\nA. Attack the robot");
    printf("\nB. Disable the power source");
    printf("\nC. Run away");

    printf("\n\nEnter Choice : ");
    scanf(" %c",&choice);

    choice=toupper(choice);

    if(choice=='B')
    {
        printf("\nAmazing!\n");
        printf("%s destroyed the robot and defeated the villain!\n",hero);

        *score += 10;
    }
    else
    {
        printf("\nWrong Decision!\n");
        printf("The robot continued attacking the city.\n");
    }
}
void showSuperheroResult(char hero[], int score)
{
    printf("\n");
    printf("====================================================\n");
    printf("              MISSION COMPLETED\n");
    printf("====================================================\n");

    printf("\nHero Name : %s\n", hero);
    printf("Final Score : %d / 50\n", score);

    printf("\nRank : ");

    if(score == 50)
    {
        printf("LEGENDARY HERO\n");
        printf("Outstanding! You saved Neo City perfectly!\n");
    }
    else if(score >= 40)
    {
        printf("CITY PROTECTOR\n");
        printf("Excellent! The citizens celebrate your bravery.\n");
    }
    else if(score >= 30)
    {
        printf("BRAVE HERO\n");
        printf("Good job! The city is mostly safe.\n");
    }
    else if(score >= 20)
    {
        printf("ROOKIE HERO\n");
        printf("You completed the mission, but there is room to improve.\n");
    }
    else
    {
        printf("MISSION FAILED\n");
        printf("The villain escaped. Better luck next time!\n");
    }

    printf("\n====================================================\n");
    printf("        THANK YOU FOR PLAYING!\n");
    printf("====================================================\n");
}
