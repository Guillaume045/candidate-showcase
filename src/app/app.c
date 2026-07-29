#include <stdio.h>

#include "app.h"

#include "../questions/question.h"
#include "../json/json_reader.h"
#include "../ui/display.h"

void startApplication()
{
    Question questions[MAX_QUESTIONS];

    int number =
        loadQuestions(
            "data/questions.json",
            questions);

    if (number == 0)
    {
        printf("Aucune question chargée\n");
        return;
    }

    displayWelcome();

    int nombreQuestionPosee = 0;

    while (nombreQuestionPosee < 10)
    {

        printf("\nQuestion %d/10\n",
               nombreQuestionPosee + 1);

        displayQuestions(
            questions,
            number);

        int choix;

        printf("\nVotre choix : ");

        scanf(
            "%d",
            &choix);

        if (choix > 0 && choix <= number)
        {

            displayAnswer(
                questions[choix - 1]);

            nombreQuestionPosee++;
        }
        else
        {
            printf("Choix invalide\n");
        }

        if (nombreQuestionPosee < 10)
        {
            char continuer;

            printf("\nContinuer ? (o/n) : ");

            scanf(
                " %c",
                &continuer);

            if (continuer == 'n' ||
                continuer == 'N')
            {
                break;
            }
        }
    }

    printf("\nMerci d'avoir découvert mon profil !\n");
}