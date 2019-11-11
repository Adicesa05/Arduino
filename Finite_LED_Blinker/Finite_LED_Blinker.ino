

int ledpin = 13;
int counter = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //turns on LED
  Serial.begin(9600); //always turn this on
}


void loop() {
  Serial.println(counter);

  if (counter < 5) //will stop running when reaching 5
  {
    digitalWrite(ledpin, HIGH);   // set the LED on
    delay(1000);                  // delays
    digitalWrite(ledpin, LOW);    // set the LED off
    delay(1000);                  // delays

    counter = counter + 1; //each time the command happens, adds +1 each time starting from 0
  }
  
  else { //will start running when if stops or reaches five
    digitalWrite(ledpin, HIGH);   // set the LED on
    delay(100);                  // delays
    digitalWrite(ledpin, LOW);    // set the LED off
    delay(100);                  // delays
  }
}

//When checking if two things are equal use ==
// = is when you are creating a variable
// = is the assignment operator
