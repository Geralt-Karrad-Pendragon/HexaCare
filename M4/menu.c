#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"

FILE* fichier= NULL;
fichier = fopen("actions.c", "r");

void menu(char *tri){

    int choix;
    int caractere;

    printf("Afficher les données dans l'ordre du fichier: 0\n");
    printf("Afficher les données par ordre croissant ou décroissant: 1 \n");
    printf("Afficher les données pour un temps donné: 2 \n");
    printf("Afficher la moyenne de pouls pour une plage de temps précise: 3 \n");
    printf("Afficher le nombre de lignes de données en mémoire: 4 \n");
    printf("Afficher les maximums et minimums de pouls: 5 \n");
    printf("Quitter: 6 \n");
    scanf("%d", &choix);

    switch(choix){
            case 1 = ordre;
            break;
            case 2 = croisdécrois;
            break;
            case 3 = temps;
            break;
            case 4 = moy;
            break;
            case 5 = nmbr;
            break;
            case 6 = extremums;
            break;
            case 7 = return 0;
            break;
            }
    fclose("actions.c");
    return 0;
}
