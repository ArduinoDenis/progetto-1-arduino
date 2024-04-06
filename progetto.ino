//ARDUINO MAKE A LED FLASH

 #define LED 13 //LED CONNECTED TO PIN 13

void setup() {
    pinMode(LED,OUTPUT);     // SETS THE PIN COM OUTPUT
}

void loop() {
  digitalWrite(LED,HIGH);  // TURNS ON THE LED
  delay(1000); // WAIT A SECOND
  digitalWrite(LED, LOW);  // LED SWITCHES OFF
  delay(1000);  // WAIT A SECOND
}
