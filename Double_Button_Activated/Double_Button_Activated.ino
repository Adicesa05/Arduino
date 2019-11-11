const int ledPin1 = 11;
const int ledPin2 = 12;
const int buttonPin1 = 2;
const int buttonPin2= 3;
int buttonState1 = 0;
int buttonState2 = 0;


void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode (buttonPin1, INPUT);
  pinMode (ledPin2, OUTPUT);
  pinMode (buttonPin2, INPUT);
  Serial.begin(9600);

}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
    if (buttonState1 == HIGH){
      digitalWrite(ledPin1, HIGH);
    }
    else {
    digitalWrite(ledPin1, LOW);
}

    if (buttonState2 == HIGH) {
      digitalWrite(ledPin2, HIGH);
    }
    else {
    digitalWrite(ledPin2, LOW);
    }
Serial.print("button1: ");   
Serial.print(buttonState1);
Serial.print(" \t button2: ");
Serial.println(buttonState2);
}
  
