int reading = 0;
int pin = 25;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin, INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  reading = analogRead(pin);
  float percentage = (reading/4092.0)*100.0;
  Serial.print("Reading: ");
  Serial.println(percentage);
  Serial.println("%");
  delay(1000);
}
