int thresholdValue = 512;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  int sensorReading = analogRead(A0);
  if (sensorReading > thresholdValue) {
    Serial.println("Sensor value above threshold");
  } else {
    Serial.println("Sensor value below threshold");
  }

  delay(100);
}
