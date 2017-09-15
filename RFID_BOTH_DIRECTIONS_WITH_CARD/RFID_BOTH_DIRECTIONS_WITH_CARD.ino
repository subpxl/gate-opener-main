int count = 0;                                          // count = 0
char input[13];                                         // character array of size 12 
boolean flag1 = 0;   
String a;
int flag  = 0;
void setup()
{
   Serial.begin(9600);    
   pinMode(7,OUTPUT);
   pinMode(8,OUTPUT);// begin serial port with baud rate 9600bps
}
void loop()
{
   if(Serial.available())
   {
      count = 0;
      while(Serial.available() && count < 12)          // Read 12 characters and store them in input array
      {
         input[count] = Serial.read();
         count++;
         delay(5);
      }
      Serial.print(input);                             // Print RFID tag number 
      
      if((input[0] ^ input[2] ^ input[4] ^ input[6] ^ input[8] == input[10]) && 
         (input[1] ^ input[3] ^ input[5] ^ input[7]  == input[11]))
            Serial.println("No Error");
             a = String(input);
   Serial.println(a);
   
   if ( a == "08008DA1BC98")
   {Serial.print("    yes");
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
}

