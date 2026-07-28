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
        return;
    }

    displayWelcome();

    displayQuestions(
        questions,
        number);

    int choice;

    printf("\nVotre choix : ");

    scanf(
        "%d",
        &choice);

    if (choice > 0 && choice <= number)
    {
        displayAnswer(
            questions[choice - 1]);
    }
    else
    {
        printf(
            "Choix incorrect\n");
    }
}