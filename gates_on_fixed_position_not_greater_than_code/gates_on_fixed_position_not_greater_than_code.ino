 
      // the number of the pushbutton pin
const int ledPin =  3;      // the number of the LED pin
 int x = 0;
int buttonstate = 0;
int buttonstate2 = 0; 
int y = 0;
int a = 0;
void setup() {
 
  pinMode(3, OUTPUT);
 pinMode(5,INPUT);
  Serial.begin(9600);
  pinMode(6,INPUT);
pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() 
{ 
buttonstate = digitalRead(5);
buttonstate2 = digitalRead(6);




if(buttonstate == HIGH)
{
  if(x<100)
{
  digitalWrite(7,HIGH);
digitalWrite(8,LOW);
Serial.println(x);
delay(30);
 
x++;
}
 
}
if(buttonstate2 == HIGH)
{
  if(y <100)
  {
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
digitalWrite(3,HIGH);
delay(30);
y++;
  }
}

if(x<99)
{y = 100;
  }
  if(x == 99)
  {y = 0;}

if(y<99)
{x = 100;
  }

  if(y ==99)
  {x = 0;
    }
else
{
digitalWrite(7,LOW);
digitalWrite(8,LOW);

digitalWrite(3,LOW);

  }
}

