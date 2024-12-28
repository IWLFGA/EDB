int thresholdValue = 512;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
  
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0); //variable & pin for strain gauge
  
  if (sensorValue > thresholdValue) {
    Serial.println(String(sensorValue) + "   Sensor value above threshold");
  } else {
    Serial.println(String(sensorValue) + "    Sensor value below threshold");
  }

  delay(500);
  
}
