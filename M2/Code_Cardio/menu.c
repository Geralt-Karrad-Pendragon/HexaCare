#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
void menu(char *cardio)
{

    int iChoix;
    int iCaractere;
    printf("1 : Test un caract�re\n");
    printf("2 : Aquisition d'un pouls\n");
    printf("3 : Affichage des donn�es\n");
    printf("4 : Recherche des pouls pour un le temps voulu\n");
    printf("5 : Moyenne des pouls pour un temps\n");
    printf("6 : Nombre de lignes en m�moire\n");
    printf("7 : Rechercher les maximums et minimums de pouls pour un temps\n");
    printf("0 : Quitter\n");
    scanf("%d", &iChoix);
    switch(iChoix){
            case 1 :

                   if (cardio != NULL){// On peut lire et �crire dans le fichier
                        printf("impl�mentation de ce caract�re.\n");
                        fputc('A', cardio);
                        cardio = fopen("battement.txt", "r");
                        do{
                            printf("Lecture d'un caract�re.\n");
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
                            printf("Lecture d'un caract�re.\n");
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
                printf("Merci d'avoir utilis� nos services et � bient�t !\n");
            break;
            default :
                printf("L'op�ration demand� n'est pas disponible, merci de choisir une autre op�ration.\n");
            break;
        }
}

