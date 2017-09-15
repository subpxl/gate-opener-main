 
 const int buttonPin = 5;     // the number of the pushbutton pin
const int ledPin =  8;      // the number of the LED pin
int x = 0;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int t = 0;
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
 
   
  }
 
  else
  {
digitalWrite(ledPin, LOW);
    
 if (  x < 255)
{


    if (buttonState == LOW)
    {t = t-3000;
      }
  else
  {digitalWrite(ledPin, LOW);
    // t = 0;
     }
  Serial.println(x);
x++;

//delay(t);
delay(100);
}

  if (x ==255)
  {x = 0;}
  
  
  }
}
