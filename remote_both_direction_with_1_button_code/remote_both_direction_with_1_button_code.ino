 
const int buttonPin = 5;     // the number of the pushbutton pin
     // the number of the LED pin
int flag  = 0;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(7, OUTPUT);
  pinMode(8,OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(7600);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

 
 if (buttonState == HIGH)
 {
   
   flag = flag + 1;
   
     Serial.println(flag);
   delay(300);
   
  if(flag == 1)
    {digitalWrite(8, HIGH);
    digitalWrite(7,LOW);
      Serial.println("high");
      delay(2000);
    digitalWrite(8, LOW);
    digitalWrite(7,LOW);
 delay(1000);
   flag = 2;
     }
     
if(flag == 3)
{
  digitalWrite(7,HIGH);
digitalWrite(8, LOW);
  Serial.println("low");
  delay(2000);
  
    digitalWrite(8, LOW);
    digitalWrite(7,LOW);
    delay(1000);
    flag = 4;
  }

  
if(flag  == 4)
{flag = 0;
  }
 }
}
