#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"

FILE* fichier= NULL;
fichier = fopen("actions.c", "r");

void menu(char *tri){

    int choix;
    int caractere;

    printf("Afficher les donn�es dans l'ordre du fichier: 0\n");
    printf("Afficher les donn�es par ordre croissant ou d�croissant: 1 \n");
    printf("Afficher les donn�es pour un temps donn�: 2 \n");
    printf("Afficher la moyenne de pouls pour une plage de temps pr�cise: 3 \n");
    printf("Afficher le nombre de lignes de donn�es en m�moire: 4 \n");
    printf("Afficher les maximums et minimums de pouls: 5 \n");
    printf("Quitter: 6 \n");
    scanf("%d", &choix);

    switch(choix){
            case 1 = ordre;
            break;
            case 2 = croisd�crois;
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
