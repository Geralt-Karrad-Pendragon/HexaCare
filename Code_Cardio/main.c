#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "menu_led.h"
#include "generationCode.h"
//#include "donnees.h"
//#include "actions.h"

int main()
{
    int iChoixLed = 0;
    int iChoixAllumeLed = 0;
    iChoixAllumeLed = MenuLed();
    if (iChoixAllumeLed = 7){
        iChoixLed = ChoixLED();
    }
    FILE* arduino = NULL;
    arduino = fopen("param.h", "w+");
    GenerationCode(iChoixAllumeLed, arduino, iChoixLed);
    /*FILE* cardio = NULL;
    cardio = fopen("battement.txt", "a");
    menu(cardio);*/
    }
    /*C:\\Users\\Patricia\\Documents\\Travail\\C.E.S.I\\Projet_Cardio\\sketch_171113a\\main.c__LED_*/
    //../sketch_171113a/main.c__LED_/param.h
//C:\Users\Patricia\Documents\Travail\C.E.S.I\Projet_Cardio\sketch_171113a\main.c__LED_
