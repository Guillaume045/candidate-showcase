#ifndef JSON_READER_H
#define JSON_READER_H

#include "../questions/question.h"

int loadQuestions(
    const char *filename,
    Question questions[]);

#endif