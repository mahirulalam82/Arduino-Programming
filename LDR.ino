// C++ code
//LDR
int light=12;
void setup()
{
Serial.begin(9600);
  pinMode(light,OUTPUT);
}
void loop(){
  int resistance=analogRead(A0);
  Serial.println(resistance);
if(resistance<400){digitalWrite(light,HIGH);
                  delay(1000);}
  else{digitalWrite(light,LOW);}
delay(1000);}