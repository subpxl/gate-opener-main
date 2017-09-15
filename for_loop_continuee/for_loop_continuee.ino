int buttonstate = 0;
int t = 0;
void setup() {
pinMode(5,INPUT);
pinMode(8,OUTPUT );
Serial.begin(9600);
}

void loop() {
buttonstate = digitalRead(5);


for (int x = 0; x < 255; x ++)
{

  
if(buttonstate== HIGH)
{digitalWrite(8,HIGH);
t = t++;                                                                          
}

   Serial.println(t);
   delay(50);
   delay(t);
}

}

