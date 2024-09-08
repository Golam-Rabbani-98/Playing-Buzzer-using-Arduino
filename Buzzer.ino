const int sensr=5;
const int led=9;


void setup() {
  pinMode(sensr,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  int m=digitalRead(sensr);
  if(m==HIGH)
    {digitalWrite(led,HIGH);
    delay(500);
    Serial.println("Motion detected");
    }

else
    {digitalWrite(led, LOW);
    delay(500);
    Serial.println("No motion detected");
    }
    
    

}
