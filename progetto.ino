//ARDUINO FAR LAMPEGGIARE UN LED

 #define LED 13 //LED COLLEGATO AL PIN 13

 

void setup() {

    pinMode(LED,OUTPUT);     // IMPOSTA IL PIN COM OUTPUT

}

 

void loop() {

  digitalWrite(LED,HIGH);  // ACCENDE IL LED

  delay(1000); // ASPETTA UN SECONDO

  digitalWrite(LED, LOW);  // SPEGNE LED

  delay(1000);  // ASPETTA UN SECONDO

}
