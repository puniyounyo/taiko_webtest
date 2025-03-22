void setup() {
  Serial.begin(9600);
  while (!Serial); // Leonardoではシリアルポートが開くまで待つ
  Serial.println("Serial communication started.");
}

void loop() {
  if (Serial.available()) {
    String receivedData = Serial.readStringUntil('\n');
    receivedData.trim(); // 改行コードや空白を削除
    Serial.print("Received: ");
    Serial.println(receivedData);
    Serial.print("Echo: ");
    Serial.println(receivedData); // 受信したデータをそのまま送信
  }
}
