// C++ code
//Temperature sensor
void setup()
{
Serial.begin(9600);
  pinMode(7,OUTPUT);
}
void loop(){
  int temp=temperature();
  Serial.println(temp);
if(temp<=-10 || temp>=100)
  digitalWrite(7,HIGH);
  Serial.println("buzzer is on");
  if(temp>=-11 || temp<100)
    digitalWrite(7,LOW);
  Serial.println("buzzer is off");

}
int temperature(){
  int t=analogRead(A0);
  return map(t,20,358,-40,125);}