#include <Servo.h>

Servo motor;
byte valor;
int entrada;
int pos = 0;
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
motor.attach (9);
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
 for (pos = 0; pos <= 45; pos +=1) {
      motor.write (pos);
      delay (15);
      e_motor = m_abierto;

  }
}
void cierre () {

  for (pos = 45; pos >= 45; pos -=1) {
      motor.write (pos);
      delay (15);
      e_motor = m_cerrado;

  }
}
