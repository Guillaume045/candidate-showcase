#include "json_reader.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cJSON.h"

int loadQuestions(
    const char *filename,
    Question questions[])
{

    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Impossible d'ouvrir le fichier JSON\n");
        return 0;
    }

    // Aller à la fin du fichier pour connaitre sa taille
    fseek(file, 0, SEEK_END);

    long size = ftell(file);

    rewind(file);

    // Allocation mémoire pour le contenu JSON
    char *content = malloc(size + 1);

    fread(content, 1, size, file);

    content[size] = '\0';

    fclose(file);

    // Conversion du texte JSON en objet JSON
    cJSON *json = cJSON_Parse(content);

    if (json == NULL)
    {
        printf("Erreur JSON\n");

        free(content);

        return 0;
    }

    cJSON *array =
        cJSON_GetObjectItem(
            json,
            "questions");

    int number =
        cJSON_GetArraySize(array);

    for (int i = 0; i < number; i++)
    {

        cJSON *item =
            cJSON_GetArrayItem(
                array,
                i);

        questions[i].id =
            cJSON_GetObjectItem(
                item,
                "id")
                ->valueint;

        strcpy(
            questions[i].question,
            cJSON_GetObjectItem(
                item,
                "question")
                ->valuestring);

        strcpy(
            questions[i].answer,
            cJSON_GetObjectItem(
                item,
                "answer")
                ->valuestring);
    }

    cJSON_Delete(json);

    free(content);

    return number;
}