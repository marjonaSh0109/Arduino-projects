// C++ code
//
#define potentiometer A2
void setup()
{Serial.begin(9600);
 pinMode(11,OUTPUT);
 
 
}

void loop()
{
 int led=analogRead(potentiometer)/4;
  analogWrite(11,led);
  delay(100);
}