int ledPin = 13;                    //declares variable(s)
int delayVar = 2000;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);         //turns on the LED
  Serial.begin(9600);                   //always start this
}

void loop()
{

  digitalWrite(ledPin, HIGH);
  delay(delayVar);                      // the delay is = to 2000, changes made will also affect the delay
  digitalWrite(ledPin, LOW);
  delay(delayVar);

  if (delayVar > 200) {                 //does something when this happens and stops the command below when it doesn't match
    delayVar -= 200;                    //the delay starts at 2000 and -200 each time the loop happens
  }

Serial.println(delayVar);                 //almost always turn this on, it turns on the serial so you can see what happens
}
