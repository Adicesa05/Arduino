//Hello Arduino

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);     //turn on the LED
}
void loop() {
  Serial.println("Blink");
  digitalWrite(13, HIGH);   // supplies 5 volts into the LED, Makes the LED blink
  delay(1000);                       // waits for 1 second
  digitalWrite(13, LOW);    // turns thhe voltage back to 0 making the LED not blink
  delay(1000);                       // waits for 1 second
}
