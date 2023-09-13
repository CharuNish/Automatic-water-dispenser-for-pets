
#define sensorPin A0
#define Buzzer 4

int val = 0;
int Threshold = 200;

void setup()
{
  pinMode(Buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int level = readSensor();
  
  Serial.print("Water level: ");
  Serial.println(level);
  
  delay(1000);
  if (level < Threshold)
 {
  digitalWrite(Buzzer,HIGH);
  Serial.println("Buzzer On");
 }
 
 else
 {
  digitalWrite(Buzzer,LOW);
  Serial.println("Buzzer Off");
 }
}

  int readSensor() {
 
  val = analogRead(sensorPin);    
  return val;             
}
