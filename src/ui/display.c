#include <stdio.h>

#include "display.h"

void displayWelcome()
{
    printf("============================\n");
    printf(" Mon profil interactif\n");
    printf("============================\n\n");
}

void displayQuestions(
    Question questions[],
    int size)
{

    printf("Choisissez une question :\n\n");

    for (int i = 0; i < size; i++)
    {
        printf(
            "%d - %s\n",
            questions[i].id,
            questions[i].question);
    }
}

void displayAnswer(
    Question question)
{
    printf("\n--------------------\n");
    printf("%s\n\n", question.question);
    printf("%s\n", question.answer);
    printf("--------------------\n");
}