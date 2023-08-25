// C++ code
//motor control
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10,OUTPUT);
}

void loop()
{
analogWrite(10,120);
  analogWrite(11,0);
  delay(1000);
  analogWrite(11,120);
  analogWrite(10,0);
  delay(10000);
}