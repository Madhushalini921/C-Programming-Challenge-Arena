#include <stdio.h>
#include <ctype.h>

#include "space.h"

/* Function Prototypes */

void spaceIntroduction();

void spaceMission1(int *score);
void spaceMission2(int *score);
void spaceMission3(int *score);
void spaceMission4(int *score);
void spaceMission5(int *score);

void showSpaceResult(int score);

/* Main Function */

void spaceAdventureGame()
{
    int score;
    char playAgain;

    do
    {
        score = 0;

        spaceIntroduction();

        spaceMission1(&score);
        spaceMission2(&score);
        spaceMission3(&score);
        spaceMission4(&score);
        spaceMission5(&score);

        showSpaceResult(score);

        printf("\nPlay Again? (Y/N): ");
        scanf(" %c", &playAgain);

        playAgain = toupper(playAgain);

    } while(playAgain == 'Y');
}

/* Introduction */

void spaceIntroduction()
{
    printf("\n");
    printf("=====================================================\n");
    printf("              SPACE ADVENTURE\n");
    printf("=====================================================\n");

    printf("\nWelcome Captain!\n");

    printf("\nYou are the commander of the spaceship");
    printf("\nGALAXY EXPLORER.\n");

    printf("\nYour mission is to travel safely through");
    printf("\ndeep space and return to Planet Earth.\n");

    printf("\nAlong the journey, you will face");
    printf("\nspace dangers and difficult decisions.\n");

    printf("\nEach correct decision earns 10 points.");

    printf("\nMaximum Score : 50");

    printf("\n\nGood Luck, Captain!");

    printf("\n=====================================================\n");
}

/* ---------------- MISSION 1 ---------------- */

void spaceMission1(int *score)
{
    char choice;

    printf("\n=====================================================\n");
    printf("                  MISSION 1\n");
    printf("=====================================================\n");

    printf("\nWARNING!\n");
    printf("A huge asteroid field is ahead.\n");

    printf("\nA. Fly Through Slowly");
    printf("\nB. Increase Speed");
    printf("\nC. Change Route");

    printf("\n\nYour Choice : ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice=='C')
    {
        printf("\nExcellent!\n");
        printf("You safely avoided the asteroid field.\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Decision!\n");
        printf("Your spaceship was slightly damaged.\n");
    }
}
/* ---------------- MISSION 2 ---------------- */

void spaceMission2(int *score)
{
    char choice;

    printf("\n=====================================================\n");
    printf("                  MISSION 2\n");
    printf("=====================================================\n");

    printf("\nAn unknown alien spaceship sends you a signal.\n");

    printf("\nA. Reply Peacefully");
    printf("\nB. Attack Immediately");
    printf("\nC. Ignore the Signal");

    printf("\n\nYour Choice : ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice=='A')
    {
        printf("\nGreat Choice!\n");
        printf("The aliens become your friends and share supplies.\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Decision!\n");
        printf("The aliens leave without helping you.\n");
    }
}

/* ---------------- MISSION 3 ---------------- */

void spaceMission3(int *score)
{
    char choice;

    printf("\n=====================================================\n");
    printf("                  MISSION 3\n");
    printf("=====================================================\n");

    printf("\nWARNING!\n");
    printf("A powerful solar storm is approaching.\n");

    printf("\nA. Activate Energy Shields");
    printf("\nB. Continue Flying");
    printf("\nC. Turn Off the Engines");

    printf("\n\nYour Choice : ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice=='A')
    {
        printf("\nExcellent!\n");
        printf("Your spaceship safely survives the solar storm.\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Decision!\n");
        printf("The ship suffers damage from the radiation.\n");
    }
}

/* ---------------- MISSION 4 ---------------- */

void spaceMission4(int *score)
{
    char choice;

    printf("\n=====================================================\n");
    printf("                  MISSION 4\n");
    printf("=====================================================\n");

    printf("\nFuel Level Critical!\n");

    printf("\nA. Search for a Nearby Space Station");
    printf("\nB. Continue Flying");
    printf("\nC. Throw Away Cargo");

    printf("\n\nYour Choice : ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice=='A')
    {
        printf("\nExcellent!\n");
        printf("You successfully refuel your spaceship.\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Decision!\n");
        printf("Fuel continues to decrease rapidly.\n");
    }
}
/* ---------------- MISSION 5 ---------------- */

void spaceMission5(int *score)
{
    char choice;

    printf("\n=====================================================\n");
    printf("                  FINAL MISSION\n");
    printf("=====================================================\n");

    printf("\nPlanet Earth is finally in sight!\n");
    printf("Mission Control is waiting for your landing.\n");

    printf("\nChoose the best landing method.\n");

    printf("\nA. Manual Landing");
    printf("\nB. Auto Pilot Landing");
    printf("\nC. Emergency Landing");

    printf("\n\nYour Choice : ");
    scanf(" %c",&choice);

    choice = toupper(choice);

    if(choice=='B')
    {
        printf("\nOutstanding!\n");
        printf("The spaceship lands safely on Earth.\n");

        *score += 10;
    }
    else
    {
        printf("\nWrong Decision!\n");
        printf("The landing was rough, but everyone survived.\n");
    }
}

/* ---------------- RESULT ---------------- */

void showSpaceResult(int score)
{
    printf("\n");
    printf("=====================================================\n");
    printf("            SPACE MISSION COMPLETED\n");
    printf("=====================================================\n");

    printf("\nMission Score : %d / 50\n", score);

    printf("\nMission Rank : ");

    if(score == 50)
    {
        printf("GALAXY HERO\n");
        printf("Perfect Mission! Earth celebrates your success.\n");
    }
    else if(score >= 40)
    {
        printf("SPACE COMMANDER\n");
        printf("Excellent! You completed the mission with great skill.\n");
    }
    else if(score >= 30)
    {
        printf("SKILLED PILOT\n");
        printf("Well done! You safely returned home.\n");
    }
    else if(score >= 20)
    {
        printf("ROOKIE ASTRONAUT\n");
        printf("Mission completed, but there is room for improvement.\n");
    }
    else
    {
        printf("LOST IN SPACE\n");
        printf("Mission failed. Better luck on your next journey.\n");
    }

    printf("\n=====================================================\n");
    printf("         THANK YOU FOR PLAYING!\n");
    printf("      SPACE ADVENTURE - MISSION SUCCESS\n");
    printf("=====================================================\n");
}