#include "json_reader.h"

int loadQuestions(
    const char *filename,
    Question questions[])
{
    questions[0].id = 1;

    strcpy(
        questions[0].question,
        "Qui suis-je ?");

    strcpy(
        questions[0].answer,
        "Je suis un developpeur.");

    return 1;
}