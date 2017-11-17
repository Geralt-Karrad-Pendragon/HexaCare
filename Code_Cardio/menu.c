#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
void menu(char *cardio)
{

    int iChoix;
    int iCaractere;
    printf("1 : Test un caractère\n");
    printf("2 : Aquisition d'un pouls\n");
    printf("3 : Affichage des données\n");
    printf("4 : Recherche des pouls pour un le temps voulu\n");
    printf("5 : Moyenne des pouls pour un temps\n");
    printf("6 : Nombre de lignes en mémoire\n");
    printf("7 : Rechercher les maximums et minimums de pouls pour un temps\n");
    printf("0 : Quitter\n");
    scanf("%d", &iChoix);
    switch(iChoix){
            case 1 :

                   if (cardio != NULL){// On peut lire et écrire dans le fichier
                        printf("implémentation de ce caractère.\n");
                        fputc('A', cardio);
                        cardio = fopen("battement.txt", "r");
                        do{
                            printf("Lecture d'un caractère.\n");
                            iCaractere = fgetc(cardio);
                            printf("%c\n", iCaractere);
                        }while(iCaractere != EOF);
                        fclose(cardio);
                    }else{// On affiche un message d'erreur si on veut
                        printf("Impossible d'ouvrir le fichier text.");
                    }
            break;
            /*case 2 :

            break;
            case 3 :
                    cardio = fopen("battement.txt", "r");
                        do{
                            printf("Lecture d'un caractère.\n");
                            iCaractere = fgetc(cardio);
                            printf("%c\n", iCaractere);
                        }while(iCaractere != EOF);
            break;
            case 4 :

            break;
            case 5 :

            break;
            case 6 :

            break;
            case 7 :

            break;*/
            case 0 :
                printf("Merci d'avoir utilisé nos services et à bientôt !\n");
            break;
            default :
                printf("L'opération demandé n'est pas disponible, merci de choisir une autre opération.\n");
            break;
        }
}

