void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float nilai_sensor = analogRead(34);
  Serial.println("Nilai Sensor Analog : " + String(nilai_sensor));
  delay(500);
}
