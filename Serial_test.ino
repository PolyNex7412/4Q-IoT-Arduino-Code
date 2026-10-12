// シリアルモニターに3秒間隔でHello Worldを出力
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(3000);
  Serial.println("Hello World");
}
