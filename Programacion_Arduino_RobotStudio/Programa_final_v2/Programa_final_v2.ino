const int dirPin = 5;
const int stepPin = 2;
int enable =8;
int stepDelay;
int entrada = 9; //Entrada de corriente (1 o 0) para determinar si el motor abre o cierra
byte valor;
const int steps = 100;
void setup() {
   // Marcar los pines como salida
   pinMode(dirPin, OUTPUT);
   pinMode(stepPin, OUTPUT);
   pinMode (enable, OUTPUT);
   pinMode (entrada, INPUT);
   digitalWrite (enable, LOW);
}
 
void loop() {

delay (550);

valor = digitalRead (entrada);
if (valor == HIGH) {
  apertura ();
}
else if (valor == LOW){
 cierre();
}
}
void apertura () {
  digitalWrite(dirPin, HIGH); 
   stepDelay = 10;
   for (int x = 0; x < steps; x++) {
      digitalWrite(stepPin, HIGH);
      delay(stepDelay);
      digitalWrite(stepPin, LOW);
      delay(stepDelay);

  }
}
void cierre () {
digitalWrite(dirPin, LOW);
   stepDelay = 10;
   for (int x = 0; x < steps; x++) {
      digitalWrite(stepPin, HIGH);
      delay(stepDelay);
      digitalWrite(stepPin, LOW);
      delay(stepDelay);

  }
}
