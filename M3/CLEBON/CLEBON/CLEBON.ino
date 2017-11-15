int nbAlea;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));//initialise la séquence aléatoire
}

void loop() {
  nbAlea=random(50,150); //construit le nombre aléatoire
  Serial.println(nbAlea);//affichage du nombre
  delay(50);//attente
}
