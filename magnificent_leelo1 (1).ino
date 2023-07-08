// C++ code
//
int red=4;
int bottom=3;
int reading=0;
void setup()
{
  pinMode(red,OUTPUT);
  pinMode(bottom,INPUT);
}

void loop()
{

    reading=digitalRead(bottom);
if (reading==HIGH)
{digitalWrite(red,!digitalRead(red));}
  delay(250);


 
}