pour renvoyer les valeurs � l'arduino


const int buttonPin = 2;     // cr�e un identifiant pour la broche utilis�e avec le BP
const int ledPin =  13;      // cr�e un identifiant pour la broche utilis�e avec la LED

// Les variables sont modifi�es au cours du programme
int buttonState = 0;         // variable pour m�moriser l'�tat du bouton

void setup() {
  Serial.begin(9600);
  // configure la broche num�rique en SORTIE
  pinMode(ledPin, OUTPUT);
  // configure la broche num�rique en SORTIE
  pinMode(buttonPin, INPUT);
}

void loop(){



    do{


       // lit la valeur de l'�tat du bouton et la m�moris   dans la variable
  buttonState = digitalRead(buttonPin);

  // Teste si le bouton est appuy�
  // c'est � dire si la variable buttonState est � 1
  // NB : ne pas confondre = et == !
  if (buttonState == HIGH) {
    // allume la LED
    digitalWrite(ledPin, HIGH);
    Serial.println("0");

  }
  else { // sinon
    // �teint la LED
    digitalWrite(ledPin, LOW);
    Serial.println("1 PONEY");
  }

  delay(2000);

    }while(1);


}
