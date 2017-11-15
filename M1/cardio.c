#include "cardio.h"
#include "Arduino.h"
#include "FreqMeasure.h"

int time;

void temps(){
    time = millis();
    Serial.println(time);
    delay(1000);
}

void pouls(){

  int pouls(){ // calcul de la fréquence cardiaque
  int sum = 0;
  int count = 0;
  double frequency;
  if (FreqMeasure.available()) {

    sum = sum + FreqMeasure.read();
    count = count + 1;
    if (count > 30) {
      frequency = F_CPU / (sum / count);
      sum = 0;
      count = 0;
    }
  }
  return frequency; // on récupère la fréquence calculée
}




}
