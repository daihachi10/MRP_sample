/*

  J2523髙橋湊
  DCモーター（サイトロン使用）

*/

#define PWM 4   //4番ピンをPWMに接続
#define DIR 32  //32番ピンをDIRに接続

void setup() {

  Serial.begin(9600);
  ledcAttach(PWM,5000,8);
  pinMode(DIR,OUTPUT);

}

void loop() {

  //正転増加
  for (int i = 0; i < 255; i++) {
    ledcWrite(PWM,i);
    digitalWrite(DIR,0);
    delay(10);
    Serial.println(i);
  }
  //正転減少
  for (int i = 255; i > 0; i--) {
    ledcWrite(PWM,i);
    digitalWrite(DIR,0);
    delay(10);
    Serial.println(i);
  }
  //逆転増加
  for (int i = 0; i < 255; i++) {
    ledcWrite(PWM,i);
    digitalWrite(DIR,1);
    delay(10);
    Serial.println(i);
  }
  //逆転減少
  for (int i = 255; i > 0; i--) {
    ledcWrite(PWM,i);
    digitalWrite(DIR,1);
    delay(10);
    Serial.println(i);
  }

}
