#define LED_01 4        //4番ピンをLEDに接続
#define LED_02 16       //16番ピンをLEDに接続
#define SW_01 2         //2番ピンをSWITCHに接続
#define SW_02 17        //17番ピンをSWITCHに接続

double brightness = 255;

void setup() {
  Serial.begin(9600);
  ledcAttach(LED_01,5000,8);
  pinMode(SW_01,INPUT_PULLUP);
  pinMode(SW_02,INPUT_PULLUP);
  pinMode(LED_02,OUTPUT);
}

void loop() {
    if (digitalRead(SW_01) == LOW && brightness < 255) {
        brightness += 5;
        
    } else if (digitalRead(SW_02) == LOW && brightness > 0) {
        brightness -= 5;
    }
    ledcWrite(LED_01,brightness);
    ledcWrite(LED_02,256-brightness);
    Serial.println(brightness);
    delay(10);
}