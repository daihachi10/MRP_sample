/*

  D2626 永瀬大地
  スイッチを押すとLEDが交互に点滅するプログラム

*/

#define LED01 4  // 4番ピンをLEDに接続
#define LED02 16 // 16番ピンをLEDに接続
#define SWITCH 2 // 2番ピンをSWITCHに接続

int LEDSwitchDelay = 50;

void setup() {

  Serial.begin(9600);
  pinMode(SWITCH, INPUT_PULLUP);
  pinMode(LED01, OUTPUT);
  pinMode(LED02, OUTPUT);
}

// 赤LED
void redOn() {
  digitalWrite(LED01, HIGH);
  digitalWrite(LED02, LOW);
}

// 青LED
void blueOn() {
  digitalWrite(LED01, LOW);
  digitalWrite(LED02, HIGH);
}

void loop() {
  if (digitalRead(SWITCH) == LOW) {
    Serial.println("Switch is pressed");
    redOn();
    delay(LEDSwitchDelay);
    blueOn();
    delay(LEDSwitchDelay);
  } else {
    Serial.println("Switch is not pressed");
    digitalWrite(LED01, LOW);
    digitalWrite(LED02, LOW);
  }
  delay(50);
}
