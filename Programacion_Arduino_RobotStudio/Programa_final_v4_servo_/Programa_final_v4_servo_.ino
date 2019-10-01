#include <Servo.h>

Servo motor;
byte valor;
int entrada = 5;
int pos = 0;
int poten = A0;
int giro;
// declaración de estados del motor
enum estado_pinza
{
  m_cerrado,
  m_abierto,
};
// e_motor: estado en el que está el motor.
estado_pinza e_motor = m_cerrado;
void setup() {
motor.attach (9);
pinMode (entrada, INPUT);
}

void loop() {
  delay (550);
  valor = digitalRead (entrada);
  giro = analogRead (poten);
  giro = map (giro, 0, 1023, 0, 180);
switch (e_motor) {
  case m_cerrado:
  if (valor == HIGH) {
  apertura ();
 // e_motor = m_abierto;
}
  else ;{}
break; 
  case m_abierto:
  if (valor == LOW) {
    cierre ();
    //e_motor = m_cerrado;
  }
else;{}
break;
}
}

void apertura () {
 for (pos = giro; pos <= 180; pos +=5) {
      motor.write (pos);
      delay (15);
      e_motor = m_abierto;

  }
}
void cierre () {

  for (pos = 180; pos >= giro; pos -=5) {
      motor.write (pos);
      delay (15);
      e_motor = m_cerrado;

  }
}
