#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "menu_led.h"
#include "generationCode.h"


int main()
{
    int iChoixLed = 0;
    int iChoixAllumeLed = 0;
    iChoixAllumeLed = MenuLed();
    if (iChoixAllumeLed = 7){ // boucle if pour choisir la LED à allumé si ce mode est enclenché
        iChoixLed = ChoixLED();
    }
    FILE* arduino = NULL;
    arduino = fopen("../sketch_171113a/main.c__LED_/param.h", "w+");//création et réédition du param.h
    GenerationCode(iChoixAllumeLed, arduino, iChoixLed);//appelle de la fonction pour l'édition 
    /*FILE* cardio = NULL;
    cardio = fopen("battement.txt", "a");
    menu(cardio);*/
    }
   
