#ifndef DISPLAY_H
#define DISPLAY_H

#include "../questions/question.h"

void displayWelcome();

void displayQuestions(
    Question questions[],
    int size);

void displayAnswer(
    Question question);

#endif