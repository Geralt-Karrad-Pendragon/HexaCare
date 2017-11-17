#include <Arduino.h>
#include "parame.h"
int led[8] = {6,7,8,9,10,11,12,13};
int iCompteur = 0;
int time = 2000;

void sortie(){
 for (iCompteur=0; iCompteur<8; iCompteur++){
    pinMode(led[iCompteur], OUTPUT);   // configure la broche en sortie
    digitalWrite(led[iCompteur], LOW);
  }
}
void chenille(){   
  for (iCompteur=0; iCompteur<8; iCompteur++){
   
    digitalWrite(led[iCompteur], HIGH);         
    delay(time);
    digitalWrite(led[iCompteur], LOW);         
    delay(time);
  }
 }
void Synchro(){
 for (iCompteur=0; iCompteur<8; iCompteur++){
    digitalWrite(led[iCompteur], HIGH);         
  }
    delay(time);
    
  for (iCompteur=0; iCompteur<8; iCompteur++){
    digitalWrite(led[iCompteur], LOW);         
  }
  delay(time);
}

void DeuxparDeux(){
 for (iCompteur=0; iCompteur<8; iCompteur+=2){
    digitalWrite(led[iCompteur], HIGH);         
  }
    delay(time);
    
  for (iCompteur=0; iCompteur<8; iCompteur+=2){
    digitalWrite(led[iCompteur], LOW);         

  }
}

void TroisparTrois(){
  for (iCompteur=0; iCompteur<8; iCompteur+=3){
    digitalWrite(led[iCompteur], HIGH);         
  }
    delay(time);
    
  for (iCompteur=0; iCompteur<8; iCompteur+=3){
    digitalWrite(led[iCompteur], LOW); 
}
}
void chenilleDeuxParDeux(){   
  for (iCompteur=0; iCompteur<8; iCompteur+=2){
   
    digitalWrite(led[iCompteur], HIGH);         
    delay(time);
    digitalWrite(led[iCompteur], LOW);         
    delay(time);
  }
 }
 void chenilleTroisParTrois(){   
  for (iCompteur=0; iCompteur<8; iCompteur+=3){
   
    digitalWrite(led[iCompteur], HIGH);         
    delay(time);
    digitalWrite(led[iCompteur], LOW);         
    delay(time);
  }
 }

 void ChoixLed(int iChoixLed){
    digitalWrite(led[iChoixLed], HIGH);    
    delay(time);
    digitalWrite(led[iChoixLed], LOW);    
    delay(time);
 }

