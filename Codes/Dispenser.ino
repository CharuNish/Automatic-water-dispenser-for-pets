/* Change these value according to your calibration value */
int Threshold = 200;

#define sensorPin A0
#define echoPin 2 
#define trigPin 3
#define Control 13
#define Buzzer 4
int val = 0;

long duration; 
int distance; 


void setup()
{
  Serial.begin(9600);
 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(Control, OUTPUT);
  pinMode(Buzzer,OUTPUT);    
  //digitalWrite(Control, LOW);
  //digitalWrite(Buzzer, LOW);

}

void loop()
{
    
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  

  int level = analogRead(sensorPin);
  Serial.print("Water level: ");
  Serial.println(level);
  delay(1000);

  if (distance > 30)
  {
   digitalWrite(Control,HIGH);
   Serial.println("Pump Stopped");
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
  else
  {
    if (level < Threshold)
   {
    digitalWrite(Buzzer,HIGH);
    Serial.println("Buzzer On");
    digitalWrite(Control,HIGH);
    Serial.println("Pump Stopped"); 
   }
   else
   {
    digitalWrite(Buzzer,LOW);
    Serial.println("Buzzer Off");
    digitalWrite(Control,LOW);
    Serial.println("Pump Started");
  }
 delay(100);
  }

}
