#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#include "treasure.h"

/* Function Prototypes */

void treasureIntroduction();
void room1(char explorer[], int *score);
void room2(char explorer[], int *score);
void room3(char explorer[], int *score);
void room4(char explorer[], int *score);
void room5(char explorer[], int *score);
void showTreasureResult(char explorer[], int score);

/*------------------------------------------------*/

void treasureHuntGame()
{
    char explorer[50];
    int score;
    char playAgain;

    srand(time(NULL));

    do
    {
        score = 0;

        treasureIntroduction();

        printf("\nEnter Explorer Name : ");
        scanf("%s", explorer);

        printf("\nWelcome %s!\n", explorer);
        printf("Your adventure begins now!\n");

        room1(explorer, &score);
        room2(explorer, &score);
        room3(explorer, &score);
        room4(explorer, &score);
        room5(explorer, &score);

        showTreasureResult(explorer, score);

        printf("\nPlay Again? (Y/N): ");
        scanf(" %c", &playAgain);

        playAgain = toupper(playAgain);

    } while(playAgain == 'Y');
}

/*------------------------------------------------*/

void treasureIntroduction()
{
    printf("\n");
    printf("====================================================\n");
    printf("          TREASURE HUNT ADVENTURE\n");
    printf("====================================================\n");

    printf("\n               /\\\n");
    printf("              /  \\\n");
    printf("             /____\\\\\n");
    printf("             | [] |\n");
    printf("             |____|\n");

    printf("\nWelcome Explorer!\n");

    printf("\nThe Lost Temple of Gold has been discovered.\n");
    printf("Solve every challenge and reach the treasure.\n");
    printf("Each correct decision earns 10 points.\n");
    printf("Good Luck!\n");
}

/*------------------------------------------------*/

void room1(char explorer[], int *score)
{
    char choice;

    printf("\n====================================================\n");
    printf("ROOM 1 : TEMPLE ENTRANCE\n");
    printf("====================================================\n");

    printf("\nYou enter the ancient temple.\n");
    printf("Three paths are in front of you.\n");

    printf("\nA. Left Tunnel");
    printf("\nB. Right Tunnel");
    printf("\nC. Dark Cave");

    printf("\n\nChoose Your Path : ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice == 'A')
    {
        printf("\nExcellent!\n");
        printf("You discovered an Ancient Map.\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Choice!\n");
        printf("You lost valuable time.\n");
        printf("Correct Path : Left Tunnel\n");
    }

    printf("\nCurrent Score : %d / 50\n", *score);
}

/*------------------------------------------------*/

void room2(char explorer[], int *score)
{
    char choice;

    printf("\n====================================================\n");
    printf("ROOM 2 : THE RIVER\n");
    printf("====================================================\n");

    printf("\nA river blocks your way.\n");

    printf("\nA. Swim Across");
    printf("\nB. Build a Raft");
    printf("\nC. Jump Across");

    printf("\n\nChoose Your Action : ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice == 'B')
    {
        printf("\nGreat Decision!\n");
        printf("You safely crossed the river.\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Choice!\n");
        printf("Correct Action : Build a Raft\n");
    }

    printf("\nCurrent Score : %d / 50\n", *score);
}
/*------------------------------------------------*/

void room3(char explorer[], int *score)
{
    char choice;

    printf("\n====================================================\n");
    printf("ROOM 3 : ANCIENT STONE DOOR\n");
    printf("====================================================\n");

    printf("\nA giant stone door blocks your path.\n");
    printf("How will you open it?\n");

    printf("\nA. Push the Door");
    printf("\nB. Pull the Door");
    printf("\nC. Solve the Ancient Puzzle");

    printf("\n\nChoose Your Action : ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice == 'C')
    {
        printf("\nExcellent!\n");
        printf("The ancient puzzle is solved.\n");
        printf("The stone door slowly opens.\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Choice!\n");
        printf("Correct Action : Solve the Ancient Puzzle\n");
    }

    printf("\nCurrent Score : %d / 50\n", *score);
}

/*------------------------------------------------*/

void room4(char explorer[], int *score)
{
    char choice;

    printf("\n====================================================\n");
    printf("ROOM 4 : TEMPLE GUARDIAN\n");
    printf("====================================================\n");

    printf("\nA giant guardian appears before you.\n");

    printf("\nA. Fight");
    printf("\nB. Answer the Guardian's Riddle");
    printf("\nC. Run Away");

    printf("\n\nChoose Your Action : ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice == 'B')
    {
        printf("\nBrilliant!\n");
        printf("The guardian allows you to pass.\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Choice!\n");
        printf("Correct Action : Answer the Guardian's Riddle\n");
    }

    printf("\nCurrent Score : %d / 50\n", *score);
}

/*------------------------------------------------*/

void room5(char explorer[], int *score)
{
    char choice;

    int treasureChest;

    treasureChest = rand()%3 + 1;

    printf("\n====================================================\n");
    printf("ROOM 5 : TREASURE CHAMBER\n");
    printf("====================================================\n");

    printf("\nYou finally reach the treasure room!\n");
    printf("Three treasure chests are waiting.\n");

    printf("\nA. Golden Chest");
    printf("\nB. Silver Chest");
    printf("\nC. Wooden Chest");

    printf("\n\nChoose a Chest : ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if((treasureChest==1 && choice=='A') ||
       (treasureChest==2 && choice=='B') ||
       (treasureChest==3 && choice=='C'))
    {
        printf("\nCongratulations!\n");
        printf("You found the Hidden Treasure!\n");

        printf("\n      _____________\n");
        printf("     |  GOLD!!!   |\n");
        printf("     |___________ |\n");

        *score += 10;
    }
    else
    {
        printf("\nOh No!\n");
        printf("The chest was empty.\n");

        if(treasureChest==1)
            printf("The treasure was in the Golden Chest.\n");

        else if(treasureChest==2)
            printf("The treasure was in the Silver Chest.\n");

        else
            printf("The treasure was in the Wooden Chest.\n");
    }

    printf("\nCurrent Score : %d / 50\n", *score);
}
/*------------------------------------------------*/

void showTreasureResult(char explorer[], int score)
{
    printf("\n");
    printf("====================================================\n");
    printf("          TREASURE HUNT COMPLETED\n");
    printf("====================================================\n");

    printf("\nExplorer : %s\n", explorer);
    printf("Final Score : %d / 50\n", score);

    printf("\nExplorer Rank : ");

    if(score == 50)
    {
        printf("MASTER EXPLORER\n");
        printf("\nOutstanding!\n");
        printf("You solved every challenge and claimed the legendary treasure.\n");
    }
    else if(score >= 40)
    {
        printf("TREASURE HUNTER\n");
        printf("\nExcellent!\n");
        printf("You escaped the temple with valuable treasure.\n");
    }
    else if(score >= 30)
    {
        printf("ADVENTURER\n");
        printf("\nGood Job!\n");
        printf("You completed most of the journey successfully.\n");
    }
    else if(score >= 20)
    {
        printf("BEGINNER EXPLORER\n");
        printf("\nYou found your way through some challenges.\n");
        printf("Practice again to discover the full treasure.\n");
    }
    else
    {
        printf("LOST EXPLORER\n");
        printf("\nThe temple defeated you this time.\n");
        printf("Better luck on your next adventure!\n");
    }

    printf("\n");

    printf("              _____________\n");
    printf("             /             \\\n");
    printf("            /   TREASURE    \\\n");
    printf("           /_________________\\\\\n");
    printf("           | $$$$$$$$$$$$$$ |\n");
    printf("           | $$$ GOLD $$$$$ |\n");
    printf("           | $$$$$$$$$$$$$$ |\n");
    printf("           |________________|\n");

    printf("\n====================================================\n");
    printf("      THANK YOU FOR PLAYING!\n");
    printf("====================================================\n");
}