// C++ code
//sensor moisture

int moisture=A0;
int red=7;
int blue=6;
int green=5;
void setup()
{
Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
    pinMode(5,OUTPUT);

}
void loop(){
  int moisture=analogRead(A0);
  Serial.println(moisture);
  if(moisture<=300 && moisture>=00)
  { Red();}
  if(moisture<=500 && moisture>300)
  {Yellow();}
    if(moisture<=900&& moisture>500)

  {Blue();}}
  void Red(){
   digitalWrite(red,HIGH);
    digitalWrite(blue,LOW);
    digitalWrite(green,LOW);}
      void Yellow(){
   digitalWrite(red,HIGH);
    digitalWrite(blue,LOW);
    digitalWrite(green,HIGH);
      }
  void Blue(){
   digitalWrite(red,LOW);
    digitalWrite(blue,HIGH);
    digitalWrite(green,LOW);}




