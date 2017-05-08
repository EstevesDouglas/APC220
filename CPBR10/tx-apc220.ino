// Base TX Arduino Mega
int buf;

void setup(){
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
 
void loop(){
  delay(1000);
  while(Serial1.available() > 0)  {
    buf = Serial1.read();  
      if (buf == '0'){
        pisca();
        Serial.print("0");
      }
      if (buf == '1'){
        pisca();
        Serial.print("1");
      }
  }
  delay(500);
}

void pisca(){
     digitalWrite(LED_BUILTIN, HIGH);
     delay(1000);
     digitalWrite(LED_BUILTIN, LOW);
     delay(1000);
  }

