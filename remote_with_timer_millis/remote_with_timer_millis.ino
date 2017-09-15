 
const int buttonPin1 = 5;     // the number of the pushbutton pin
const int ledPin1 =  7;      // the number of the LED pin
int state1 =HIGH;
// variables will change:
int buttonState1 = 0;         // variable for reading the pushbutton status

 
 


void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
 
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
 

  unsigned long currentMillis = millis();
  if (buttonState1 == HIGH) {
    // turn LED on:
  
    Serial.println(currentMillis);

   if(currentMillis > 3000)
  {Serial.println("good");
    if (state1 == HIGH)
      state1 = LOW; 
  
  
  }  
   digitalWrite(ledPin2, state2);
   
  }
     
   
  
  else 
  {
    // turn LED off:
    digitalWrite(ledPin1, LOW);
     digitalWrite(ledPin2, LOW);
  }
}
