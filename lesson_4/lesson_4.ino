void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
   delay(200);
  digitalWrite(13,LOW);
  digitalWrite(11,HIGH);
   delay(200);
  digitalWrite(11,LOW);
  digitalWrite(9,HIGH);
   delay(200);
  digitalWrite(9,LOW);
  digitalWrite(7,HIGH);
   delay(200);
  digitalWrite(7,LOW);
  digitalWrite(9,HIGH);
   delay(200);
  digitalWrite(9,LOW);
  digitalWrite(11,HIGH);
   delay(200);
   digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
   delay(200);
  digitalWrite(13,LOW);
   delay(1000);
 
}

