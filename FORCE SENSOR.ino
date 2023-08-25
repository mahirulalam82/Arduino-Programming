// C++ code
//Force sensor

int Force=A0;
void setup()
{
Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}
void loop(){
  int force=analogRead(Force);
  Serial.println(force);
  
  if(force<=200 && force>=0);
  {Red();
  delay(1000);}
if(force<=400 && force>200)
{Blue();
   delay(1000);}

if(force<=1100 && force>400)
{Green();
   delay(1000);}
}
void Red(){
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);}
  void Blue(){
    digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
    digitalWrite(5,LOW);}

    void Green(){
    digitalWrite(5,HIGH);
  digitalWrite(7,LOW);
      digitalWrite(7,LOW);}

