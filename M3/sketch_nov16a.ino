void setup() {
  // Lance une connexion sur le port série.
  Serial.begin(9600);
}
 
void loop() {
  // Écrit sur le port série une valeur au format CSV.
  // Ici on a 'time;pouls'
  Serial.print(millis()); // Valeur de time
  Serial.print(";");
  Serial.print(random(70, 90)); // Simulation du pouls, valeur aléatoire comprise entre 70 et 89.
  Serial.print("\n");
 
  // Attend 1000ms (1s) avant de relancer loop().
  delay(1000);
}
