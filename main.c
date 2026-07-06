#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include "hangman.h"
#include "score.h"
#include "quiz.h"
#include "guess.h"
#include "tictactoe.h"
#include "rps.h"
#include "superhero.h"
#include "snake.h"
#include "treasure.h"
#include "castle.h"
#include "space.h"

void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void instructions();
void about();
void welcomeScreen();
void loadingScreen();
void loadingScreen()
{
    int i;

    printf("\n");
    printf("Loading C Programming Challenge Arena");

    for(i=0;i<5;i++)
    {
        printf(".");
        fflush(stdout);
        Sleep(500);
    }

    printf("\n\n");
    printf("Loading Complete!");
    Sleep(1000);

    system("cls");
}
void welcomeScreen()
{
    setColor(11);
    printf("=========================================================\n");
    printf("            C PROGRAMMING CHALLENGE ARENA\n");
    printf("=========================================================\n");
    setColor(14);
    printf("\n");
    printf("          Welcome to the Ultimate Mini Game Hub\n");

    printf("\n");
    printf("                Developed in C Language\n");

    printf("\n");
    printf("          Learn | Play | Challenge | Improve\n");

    printf("\n");
    printf("=========================================================\n");

    printf("\nGames Available\n\n");

    printf("1. C Programming Quiz\n");
    printf("2. Guess The Number\n");
    printf("3. Rock Paper Scissors\n");
    printf("4. Tic Tac Toe\n");
    printf("5. Superhero Rescue Mission\n");
    printf("6. Hangman\n");
    printf("7. Snake and Ladders\n");
    printf("8. Treasure Hunt Adventure\n");
    printf("9.Castle Escape Game\n");
    printf("10. Space Adventure Game\n");

    printf("\n=========================================================\n");

    printf("\nPress ENTER to Continue...");
    getchar();
    system("cls");
}
int main()
{
    loadingScreen();
    welcomeScreen();
    int choice;

    while(1)
    {
       setColor(14);
       printf("\n=========================================================\n");
       printf("            C PROGRAMMING CHALLENGE ARENA\n");
       printf("=========================================================\n");
       printf("              Version 1.0 | Mini Game Hub\n");
       printf("=========================================================\n");

        printf("1. Start Quiz\n");
        printf("2. Guess the Number Game\n");
        printf("3. Rock Paper Scissors\n");
        printf("4. TIC TAC TOE\n");
        printf("5. Superhero Rescue Mission\n");
        printf("6. Hangman Game\n");
        printf("7. Snake and Ladders\n");
        printf("8. Treasure Hunt\n");
        printf("9. Castle Escape Game\n");
        printf("10. Space Adventure Game\n");
        printf("11. Instructions\n");
        printf("12. About\n");
        printf("13. Exit\n");
        printf("\nEnter Choice : ");
        scanf("%d",&choice);
        setColor(7);
      switch(choice)
{
    case 1:
        startQuiz();
        break;

    case 2:
        guessNumberGame();
        break;

    case 3:
        rockPaperScissorsGame();
        break;

    case 4:
        ticTacToeGame();
        break;

    case 5:
        superheroMission();
        break;

    case 6:
        hangmanGame();
        break;

    case 7:
        snakeLadderGame();
        break;

    case 8:
        treasureHuntGame();
        break;

    case 9:
        castleEscapeGame();
        break;

    case 10:
        spaceAdventureGame();
        break;

    case 11:
        instructions();
        break;

    case 12:
        about();
        break;

    case 13:
        printf("\nThank You For Playing!\n");
        printf("Hope you enjoyed C Programming Challenge Arena!\n");
        exit(0);

    default:
        printf("\nInvalid Choice! Please try again.\n");
}

            
            
    }
    return 0;
}

void instructions()
{
    printf("\n");
    printf("=========================================================\n");
    printf("                  GAME INSTRUCTIONS\n");
    printf("=========================================================\n");

    printf("\nWelcome to C Programming Challenge Arena!\n");

    printf("\nThis application contains multiple mini-games\n");
    printf("developed using the C Programming language.\n");

    printf("\nGeneral Instructions:\n");

    printf("\n1. Select a game from the Main Menu.");
    printf("\n2. Read the instructions displayed before each game.");
    printf("\n3. Enter your choices carefully.");
    printf("\n4. Invalid inputs may ask you to try again.");
    printf("\n5. Some games use random numbers, so each play may be different.");
    printf("\n6. Complete the game to view your score or result.");
    printf("\n7. You can return to the Main Menu after finishing any game.");
    printf("\n8. Try every game and challenge yourself!");

    printf("\n\nEnjoy Playing!");

    printf("\n=========================================================\n");

    printf("\nPress Enter to return to Main Menu...");
    getchar();
    getchar();
}

void about()
{
    printf("\n");
    printf("=========================================================\n");
    printf("               ABOUT THIS PROJECT\n");
    printf("=========================================================\n");

    printf("\nProject Name : C Programming Challenge Arena");

    printf("\n\nDescription :");
    printf("\nA collection of beginner-friendly console games");
    printf("\ndeveloped entirely using the C Programming Language.");

    printf("\n\nObjectives :");
    printf("\n- Practice core C programming concepts.");
    printf("\n- Improve problem-solving skills.");
    printf("\n- Demonstrate modular programming.");
    printf("\n- Build an interactive console application.");

    printf("\n\nProgramming Concepts Used :");
    printf("\n- Functions");
    printf("\n- Arrays and Strings");
    printf("\n- Structures");
    printf("\n- Loops");
    printf("\n- Conditional Statements");
    printf("\n- Random Number Generation");
    printf("\n- File Handling");
    printf("\n- Header Files");
    printf("\n- Modular Programming");

    printf("\n\nGames Included :");
    printf("\n- C Programming Quiz");
    printf("\n- Guess The Number");
    printf("\n- Rock Paper Scissors");
    printf("\n- Tic Tac Toe");
    printf("\n- Superhero Rescue Mission");
    printf("\n- Hangman");
    printf("\n- Snake and Ladders");
    printf("\n- Treasure Hunt Adventure");
    printf("\n- Castle Escape Game");
    printf("\n- Space Adventure Game");

    printf("\n\nVersion : 1.0");
    printf("\nLanguage : C");
    printf("\nPlatform : Console Application");

    printf("\n\nThank you for playing!");

    printf("\n=========================================================\n");

    printf("\nPress Enter to return to Main Menu...");
    getchar();
    getchar();
}