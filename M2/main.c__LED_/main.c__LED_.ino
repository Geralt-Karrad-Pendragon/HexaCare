#include "parame.h"
#include "param.h"
//int led[8] = {6,7,8,9,10,11,12,13};
//int iCompteur = 0;
//int iChoix = 1;
//int iChoix = Choix();

void setup()
{
  Serial.begin (115200);
  Serial.println("Bonjour");
  sortie();
  
  /*for (int iCompteur=0; iCompteur<8; iCompteur++){
    pinMode(led[iCompteur], OUTPUT);   // configure la broche en sortie
    digitalWrite(led[iCompteur], LOW);
  }*/
}

void loop(){
  switch (iChoix){
    case 1 :
        Synchro();
        delay(5000);
    break;
    case 2 :
        DeuxparDeux();
        delay(1000);
    break;
    case 3 :
        TroisparTrois();
        delay(1000); 
    break;
    case 4 :
        chenille();
        delay(1000);
    break;
    case 5 :
        chenilleDeuxParDeux();
        delay(1000);
    break;
    case 6 :
        chenilleTroisParTrois();
        delay(1000);
    break;
    case 7 : 
         ChoixLed(iChoixLed);
         delay(1000);
    break;
    default : 
        chenilleTroisParTrois();
        delay(100);
        chenilleDeuxParDeux();
        delay(100);
        chenille();
        delay(100);
    break;   
  }
 }

