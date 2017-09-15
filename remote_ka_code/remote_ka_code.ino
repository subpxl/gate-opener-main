 
// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 5;     // the number of the pushbutton pin
const int ledPin =  7;      // the number of the LED pin
int k = 0;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
 
  buttonState = digitalRead(buttonPin);
k = digitalRead(3);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    digitalWrite(4, HIGH);
    Serial.println("high");
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    digitalWrite(4, LOW);
   Serial.println("low");
  }

   if (k == HIGH) {
    // turn LED on:
    digitalWrite(8, HIGH);
    digitalWrite(4, HIGH);
  } else {
    // turn LED off:
    digitalWrite(8, LOW);
    digitalWrite(4, LOW);
  }
}
