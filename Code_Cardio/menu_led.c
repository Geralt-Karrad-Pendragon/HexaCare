#include "menu_led.h"
#include <stdio.h>
#include <stdlib.h>

int MenuLed(){
     int iChoix;
     printf("1 : LED allumé en même temps\n");
     printf("2 : LED 1 sur 2 allumé en même temps\n");
     printf("3 : LED 1 sur 3 allumé en même temps\n");
     printf("4 : LED allumé en chenille\n");
     printf("5 : LED allumé en chenille 2 par 2\n");
     printf("6 : LED allumé en chenille 3 par 3\n");
     printf("7 : Choix de la LED allumé\n");
     printf("0 : Quitter\n");
    scanf("%d", &iChoix);
    switch(iChoix){
            case 1 :
                return 1;
            break;
            case 2 :
                return 2;
            break;
            case 3 :
                return 3;
            break;
            case 4 :
                return 4;
            break;
            case 5 :
                return 5;
            break;
            case 6 :
                return 6;
            break;
            case 7 :
                return 7;
            break;
            case 0 :
                printf("Merci d'avoir utilisé nos services et à bientôt !\n");
                return 0;
            break;
            default :
                printf("L'opération demandé n'est pas disponible, merci de choisir une autre opération.\n");
                return 0;
            break;
        }
}

int ChoixLED(){
        int LED;
        printf("Quelle LED voulez-vous allumer ?\n");
        scanf("%d", &LED);
        return LED;
}
