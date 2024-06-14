//Define the pin where the gas sensor is connected
int gasSensorPin = 35;

void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(115200);

  // Configure the gas sensor pin as input
  pinMode(gasSensorPin, INPUT);
}

void loop() {
  // Read the analog value from the gas sensor
  int sensorValue = analogRead(gasSensorPin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Gas Sensor Value: ");
  Serial.println(sensorValue);

  // Wait for 1 second before the next reading
  delay(1000);
}
