//pump control pin
int pump = 2;
int valve = 3
void setup() {
  // set pump contrl pun to output
  pinMode(pump, OUTPUT);
  pinMode(valve, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
 //turn on pump to fulls speed
  digitalWrite(pump, HIGH);

  //wait 2 seconds (miliseconds)
  delay(5000);

  //turn off pump
  digitalWrite(pump, LOW);

  //wait 2  seconds
  delay(2000);
}
