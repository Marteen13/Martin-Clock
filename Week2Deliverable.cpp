void setup() {
Serial.begin(9600);
pinMode(2,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(2) == 1){
  Serial.println("PUSHED");
  
}
else{
  Serial.println("OFF");
  
}
delay(100);
}