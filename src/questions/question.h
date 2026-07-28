#ifndef QUESTION_H
#define QUESTION_H

#define MAX_QUESTIONS 50 // Nombre maximum de questions stockées

typedef struct // Structure qui représente une question
{
    int id;             // Identifiant de la question
    char question[200]; // Texte de la question
    char answer[500];   // Réponse associée à la question

} Question;

#endif