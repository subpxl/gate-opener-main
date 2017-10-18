 #include <avr/wdt.h>
const int buttonPin4 = 3;  
const int buttonPin1 = 4;     // the number of the pushbutton pin 2
const int buttonPin2 = 5;
const int buttonPin3 = 6;// the number of the pushbutton pin 3
const int ledPin1 =  7;      // the number of the LED pin
const int ledPin2 =  8; 
 int buttonState1 = 0;          
 int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;

void setup() {
 // initialize the LED pin as an output:
 pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT);      
 // initialize the pushbutton pin as an input:
 pinMode(buttonPin1, INPUT);
 // initialize the pushbutton pin as an input:
 pinMode(buttonPin2, INPUT); 
  pinMode(buttonPin3, INPUT);  
  pinMode(buttonPin4, INPUT); 
  pinMode(2,OUTPUT);
 
  digitalWrite(2,HIGH);
  delay(1000);
    digitalWrite(2,LOW);
  delay(1000);
    digitalWrite(2,HIGH);
  delay(1000);
      digitalWrite(2,LOW);
  delay(1000);
 wdt_disable();   
}

void loop(){
   wdt_enable(WDTO_4S); 
 // read the state of the pushbutton value:
 buttonState1 = digitalRead(buttonPin1);
 // read the state of the pushbutton value:
 buttonState2 = digitalRead(buttonPin2);
 buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
 // check whether a  pushbutton is pressed.
 // if it is, the buttonState is HIGH:
 
 if (buttonState1 == HIGH) {    
   // turn LED on:   // Tweet that the washer is done 
   digitalWrite(ledPin1, HIGH);  
      digitalWrite(ledPin2, LOW); 
 }
 if (buttonState2 == HIGH) {    
   // turn LED on:    //Tweet that the dryer is done
   digitalWrite(ledPin1, LOW); 
      digitalWrite(ledPin2, HIGH); 
 }
 
 if (buttonState3 == HIGH) {    
  digitalWrite(ledPin1, LOW); 
      digitalWrite(ledPin2, LOW);
 }
 if (buttonState4 == HIGH) {    
  digitalWrite(ledPin1, LOW); 
      digitalWrite(ledPin2, LOW);
 }   
 wdt_reset();
}

