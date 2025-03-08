// C++ code
//

int led=13;
int buzzer=12;
int trig =9;
int echo =8;
int actualDistance;
double distance;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buzzer,OUTPUT);
   pinMode(trig,OUTPUT);
   pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  actualDistance = pulseIn(echo,HIGH);
  
  distance = actualDistance*0.034/2;
  
  Serial.print("Distance=");
  Serial.println(distance);
  
  if(distance>=15 && distance<=50){
    digitalWrite(led,HIGH);
    delay(100);
    digitalWrite(led,LOW);
    delay(100);
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
    delay(100);
    
    
    
  }
  
  
  
}