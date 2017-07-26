/***************** Sharp_Alarme ***********************
 * 
 * Ce sketch allume une LED (branchée a la pin 13)
 * lorsque le capteur Sharp (branché a la pin A0)
 * détecte la présence d'un obstacle
 * 
 ************************************************************/

int pin_sharp = A3;  // fil jaune du capteur sharp branché a A0
int pin_LED = 13;  // LED branchée a la pin 13

void setup() {
  pinMode(pin_LED,OUTPUT);
}

void loop() {

  if (analogRead(pin_sharp) > 60)
  {
    digitalWrite(pin_LED, HIGH);
  }
  else
  {
    digitalWrite(pin_LED, LOW);
  }
  delay(50); 
}
