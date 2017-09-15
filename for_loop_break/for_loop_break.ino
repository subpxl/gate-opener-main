void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 for (int x = 0; x < 255; x ++)
{
 Serial.println(x);
   
    if (x > 100)
    {      // bail out on sensor detect
      // x = 0;
       break;
     //  continue;
    }  
    delay(50);
}

}
