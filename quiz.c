#include <stdio.h>
#include <ctype.h>

#include "quiz.h"
#include "score.h"

typedef struct
{
    char question[250];

    char optionA[100];
    char optionB[100];
    char optionC[100];
    char optionD[100];

    char answer;

} Question;


/* ---------- QUESTIONS ---------- */

Question quiz[] =
{
{
"Which header file is required for printf()?",
"stdio.h",
"math.h",
"string.h",
"stdlib.h",
'A'
},

{
"Which function is used to take input from the user?",
"scanf()",
"printf()",
"gets()",
"puts()",
'A'
},

{
"Which symbol ends a statement in C?",
":",
".",
";",
",",
'C'
},

{
"Which keyword is used to define a constant?",
"const",
"constant",
"define",
"fixed",
'A'
},

{
"What is the correct extension of a C source file?",
".cpp",
".java",
".py",
".c",
'D'
},

{
"Which function prints output to the screen?",
"printf()",
"scanf()",
"gets()",
"input()",
'A'
},

{
"Which loop is guaranteed to execute at least once?",
"for",
"while",
"do while",
"foreach",
'C'
},

{
"Which operator is used for multiplication?",
"*",
"/",
"%",
"+",
'A'
},

{
"Which operator is used to compare equality?",
"=",
"==",
"!=",
"<=",
'B'
},

{
"Which data type stores decimal values?",
"int",
"char",
"float",
"long",
'C'
},

{
"What is the size of char in C?",
"1 byte",
"2 bytes",
"4 bytes",
"8 bytes",
'A'
},

{
"Which keyword is used to return a value from a function?",
"stop",
"return",
"exit",
"break",
'B'
},

{
"Which header file contains rand()?",
"math.h",
"time.h",
"stdlib.h",
"string.h",
'C'
},

{
"Which function finds the length of a string?",
"strlen()",
"size()",
"length()",
"count()",
'A'
},

{
"Which symbol starts a single-line comment?",
"//",
"/*",
"#",
"--",
'A'
},

{
"Which operator gives the remainder?",
"/",
"*",
"%",
"+",
'C'
},

{
"Which keyword is used to define a function with no return value?",
"int",
"char",
"float",
"void",
'D'
},

{
"Which loop is best when the number of iterations is known?",
"while",
"for",
"do while",
"if",
'B'
},

{
"Which library is used for string functions?",
"stdio.h",
"math.h",
"string.h",
"stdlib.h",
'C'
},

{
"Which function compares two strings?",
"strcmp()",
"strcpy()",
"strlen()",
"strcat()",
'A'
},

{
"Which function copies one string to another?",
"strcpy()",
"strcmp()",
"strlen()",
"strcat()",
'A'
},

{
"Which function joins two strings?",
"strlen()",
"strcmp()",
"strcat()",
"strcpy()",
'C'
},

{
"Which keyword is used to create a decision?",
"switch",
"if",
"goto",
"continue",
'B'
},

{
"Which statement exits a loop immediately?",
"continue",
"return",
"break",
"goto",
'C'
},

{
"Which statement skips the current iteration?",
"continue",
"break",
"exit",
"stop",
'A'
},

{
"What is the default return type of main()?",
"void",
"char",
"float",
"int",
'D'
},

{
"Which operator gives the memory address of a variable?",
"*",
"&",
"%",
"#",
'B'
},

{
"Which symbol is used to access the value stored at a pointer?",
"&",
"%",
"*",
"@",
'C'
},

{
"Which function is used to allocate dynamic memory?",
"malloc()",
"calloc()",
"realloc()",
"All of these",
'D'
},

{
"Which keyword is used to define a structure?",
"struct",
"class",
"record",
"object",
'A'
}
};

//};

int totalQuestions = sizeof(quiz)/sizeof(quiz[0]);



void startQuiz()
{
    char playAgain;

    do
    {
    int i;

    char userAnswer;

    int score=0;

    int correct=0;

    int wrong=0;

    printf("\n========================================\n");
    printf("             C PROGRAMMING QUIZ GAME\n");
    printf("========================================\n");

    for(i=0;i<totalQuestions;i++)
    {

        //printf("\nQuestion %d/%d\n",i+1,totalQuestions);
        printf("\n");
printf("--------------------------------------------------\n");
printf("Question %d of %d\n",i+1,totalQuestions);
printf("--------------------------------------------------\n");
        printf("\n%s\n\n",quiz[i].question);

        printf("A. %s\n",quiz[i].optionA);
        printf("B. %s\n",quiz[i].optionB);
        printf("C. %s\n",quiz[i].optionC);
        printf("D. %s\n",quiz[i].optionD);

        printf("\nEnter Answer : ");

        scanf(" %c",&userAnswer);

        userAnswer=toupper(userAnswer);

        if(userAnswer==quiz[i].answer)
        {
            printf("\nCorrect! +10 Marks\n");

            score+=10;

            correct++;
        }
        else
        {
            printf("\nWrong!\n");

            // printf("Correct Answer : %c\n",quiz[i].answer);
            switch(quiz[i].answer)
{
    case 'A':
        printf("Correct Answer : %s\n",quiz[i].optionA);
        break;

    case 'B':
        printf("Correct Answer : %s\n",quiz[i].optionB);
        break;

    case 'C':
        printf("Correct Answer : %s\n",quiz[i].optionC);
        break;

    case 'D':
        printf("Correct Answer : %s\n",quiz[i].optionD);
        break;
}
            wrong++;
        }

    }

    showResult(score,correct,wrong);

printf("\n\nDo you want to play again? (Y/N): ");
scanf(" %c",&playAgain);

playAgain = toupper(playAgain);

} while(playAgain=='Y');

}