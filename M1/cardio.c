#include "cardio.h"

void cardio() {
  unsigned long time;
  int val = 0;
  int valtemp = 0;
  int pulsation = 0;
  float freq = 0;
  // put your main code here, to run repeatedly:
  time = millis();        // temps d'utilisation
  valtemp = val;          // valeur tampon de l'ancienne valeur lue sur A0
  //val = analogRead(0);    // valeur lue sur A0
  val = random(0,101);
  if (valtemp - val > 10/*UnTrucSignificatif*/ ) {  // si il y a une différence de tension significative entre
                                                    // les 2 valeurs on détecte un battement de coeur
    pulsation ++;                                   // compteur de pulsation

  }
  freq = pulsation/(time*10e-3);                    // on évalue la fréquence cardiaque au fur et a mesure du temps
  if (pulsation == 0){                              // plus on fait longtemps plus elle sera précise
    freq = 0;
  }
    Serial.print(time);                             // on écrit le temps d'exécution et la fréq
    Serial.print(";");
    Serial.println(freq);
    delay(4);
}



}
