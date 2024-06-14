
int pin = 25;
int reading = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Reading: ");
  reading = analogRead(pin);
  Serial.println(reading);
  delay(1000);
}
