# Candidate Showcase

Cette application est conçue pour faire découvrir mon profil autrement, de façon interactive et originale.

## Présentation

L'objectif de cette application est de proposer une présentation différente d'une candidature classique en permettant de découvrir mon profil et ma motivation à travers une interface interactive développée en langage C.

## Prérequis

Pour tester l'application, vous devez avoir installé :

* GCC (compilateur C)
* Git (optionnel)
* Un terminal compatible

## Structure du projet

```
candidate-showcase/

├── src/
│   ├── main.c
│   ├── app/
│   ├── questions/
│   ├── json/
│   └── ui/
│
├── data/
│   └── questions.json
│
└── lib/
    └── cJSON/
```

## Compilation

Depuis la racine du projet, exécutez la commande suivante :

```bash
gcc src/main.c src/app/app.c src/questions/question.c src/json/json_reader.c src/ui/display.c lib/cJSON/cJSON.c -Ilib/cJSON -o candidate-showcase.exe
```

Cette commande compile l'ensemble des fichiers du projet et génère l'exécutable :

```
candidate-showcase.exe
```

## Lancement de l'application

Une fois la compilation terminée, lancez l'application avec :

```bash
.\candidate-showcase.exe
```

## Fonctionnement

L'application propose plusieurs questions permettant de découvrir :

* mon parcours ;
* mes compétences ;
* ma motivation ;
* ma façon d'aborder le développement.

Chaque question permet d'afficher une réponse associée afin de présenter mon profil de manière interactive.

## Technologies utilisées

* Langage C
* Git / GitHub
* JSON
* Bibliothèque cJSON
* Architecture modulaire en plusieurs fichiers

## Auteur

Guillaume Lanfroid-Nazac
