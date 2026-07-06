#include <stdio.h>
#include "score.h"

void showResult(int score, int correct, int wrong)
{
    float percentage;

    percentage = (score / 300.0) * 100;

    printf("\n");
    printf("=====================================================\n");
    printf("                 QUIZ COMPLETED\n");
    printf("=====================================================\n");

    printf("\n");
    printf("Correct Answers : %d\n", correct);
    printf("Wrong Answers   : %d\n", wrong);
    printf("Total Questions : 30\n");
    printf("Score           : %d / 300\n", score);
    printf("Percentage      : %.2f %%\n", percentage);

    printf("\n");

    if(percentage>=90)
    {
        printf("Grade : A+\n");
        printf("Outstanding Performance!\n");
    }
    else if(percentage>=80)
    {
        printf("Grade : A\n");
        printf("Excellent!\n");
    }
    else if(percentage>=70)
    {
        printf("Grade : B\n");
        printf("Very Good!\n");
    }
    else if(percentage>=60)
    {
        printf("Grade : C\n");
        printf("Good Job!\n");
    }
    else if(percentage>=40)
    {
        printf("Grade : D\n");
        printf("Keep Practicing.\n");
    }
    else
    {
        printf("Grade : F\n");
        printf("Needs Improvement.\n");
    }

    printf("\n=====================================================\n");
    // saveHighScore(score);
}