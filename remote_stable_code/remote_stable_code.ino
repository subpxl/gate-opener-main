 

 int a = 0;
 int b = 0;
 int c = 0;
 int d = 0;

int x = 0;
int flag1 =0;
 int flag2 =0;
 void setup() 
 {
 
 pinMode(3, OUTPUT);
 pinMode(6,INPUT);
 pinMode(7,OUTPUT);
 pinMode(2,INPUT);
 pinMode(8,OUTPUT);
 pinMode(4,INPUT);
   pinMode(5, INPUT);
 }

void loop() 
{
 
 c = digitalRead(2);
  d = digitalRead(4);
  b = digitalRead(5);
  a = digitalRead(6);

  
  if(c == HIGH)
  {flag1 = 1;}

  if(b == HIGH)
  {flag2 = 1;}
    
    while (flag1 == 1 || flag2 ==1 )
   {
    digitalWrite(3, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8,LOW);
    delay(1000);
    flag1 = 0;
    flag2= 0;

   }
  
  if(flag1 == 0 || flag2 ==0 )
  {
    digitalWrite(3, LOW);

        if(a == HIGH)
      {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
        digitalWrite(7,HIGH);
        digitalWrite(8,LOW);
       }

      if(d == HIGH)
      {
       digitalWrite(8,HIGH);
       digitalWrite(7,LOW); 
       }
 
  }
  else
  {
    digitalWrite(3, LOW);
  }
}


