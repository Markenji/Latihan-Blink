int led = 13; // PIN yang di pakai

void setup(){
pinMode(led,OUTPUT); // PIN 13 sebagai OUTPUT
}

void loop(){
  digitalWrite(led,HIGH);// Hidup
  delay(1000);
  digitalWrite(led,LOW);//Mati
  delay(1000);
}
