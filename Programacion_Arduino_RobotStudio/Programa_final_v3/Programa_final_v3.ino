const int dirPin = 5;
const int stepPin = 2;
int enable =8;
int stepDelay;
int entrada = 9; //Entrada de corriente (1 o 0) para determinar si el motor abre o cierra
byte valor;
const int steps = 100;

// declaración de estados del motor

enum estado_pinza
{
  m_cerrado,
  m_abierto,
  //m_cerrando,
  //m_abriendo,
};

// e_motor: estado en el que está el motor.

estado_pinza e_motor = m_cerrado;

void setup() {
   // Marcar los pines como salida
   pinMode(dirPin, OUTPUT);
   pinMode(stepPin, OUTPUT);
   pinMode (enable, OUTPUT);
   pinMode (entrada, INPUT);
   digitalWrite (enable, LOW);
//   valor = digitalRead (entrada);
  e_motor = m_cerrado;
}
 
void loop() {

delay (550);
valor = digitalRead (entrada);

switch (e_motor) {
  case m_cerrado:
  if (valor == LOW) {
  apertura ();
 // e_motor = m_abierto;
}
  else ;{
    }

break; 
  case m_abierto:
  if (valor == HIGH) {
    cierre ();
    //e_motor = m_cerrado;
  }
else;{
}
break;
}
}
void apertura () {
  digitalWrite(dirPin, HIGH); 
   stepDelay = 25;
   for (int x = 0; x < steps; x++) {
      digitalWrite(stepPin, HIGH);
      delay(stepDelay);
      digitalWrite(stepPin, LOW);
      delay(stepDelay);
      e_motor = m_abierto;

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
      e_motor = m_cerrado;

  }
}
