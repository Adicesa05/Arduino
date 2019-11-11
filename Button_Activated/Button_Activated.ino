int ledpin = 13;
int buttonpin = 2;
int buttonstate = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode (buttonpin, INPUT);
  Serial.begin(9600);

}

void loop() {

  // read the state of the pushbutton value:
  buttonstate = digitalRead(buttonpin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonstate == HIGH) {
    // turn LED on:
    digitalWrite(ledpin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledpin, LOW);
  }
  Serial.println(buttonstate);               //almost always turn this on, it turns on the serial so you can see what happens

}
