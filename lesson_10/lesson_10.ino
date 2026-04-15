int pinNum = 11;
int hold = 500;
int brightness = 1;
String countMessage = "Brightness set to: ";

void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pinNum, brightness);
  delay(hold);
  brightness = brightness + 1;
  Serial.print(countMessage);
  Serial.println(brightness);
}
