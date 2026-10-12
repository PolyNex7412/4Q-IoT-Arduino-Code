void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("HIGH")
  digitalWrite(13, HIGH);
  delay(2000);

  Serial.println("LOW")
  digitalWrite(13, LOW);
  delay(2000);
}
