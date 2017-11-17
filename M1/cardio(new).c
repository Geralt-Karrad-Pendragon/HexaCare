#include "cardio.h"
#include"Arduino.h"
#include "FreqMeasure.h"

int valeurprec=0;
int tmpsprece=0;

int temps()
{
  int time;
 time=millis(); // millis() permet de donner en millisecondes le temps d'�x�cution de l'arduino
 Serial.println(time);
 delay(1000);// delai de 1 seconde
 return time;
}

int FCM(){ // calcul de la fr�quence cardiaque
  int somme = 0;
  int rep = 0;
  double frequence;
  if (FreqMeasure.available()) { //Si on detect un poul
    somme += FreqMeasure.read();//On lit ce poul
    rep += 1;//On regarde le  nombre de r�p�tition
    if (rep > 30) {
      frequence = F_CPU / (somme / rep);
      somme = 0;
      rep = 0;
    }
  }
 return frequence;// on r�cup�re la fr�quence calcul�e
}
