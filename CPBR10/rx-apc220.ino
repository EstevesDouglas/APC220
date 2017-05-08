
void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}
 
void loop(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  Mandar();
}//voidloop
 
void Mandar(){
  delay(1000);
  Serial.println("teste2"); 
}

