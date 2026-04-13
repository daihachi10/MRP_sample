#define LED 4     //4番ピンをLEDに接続
#define SWITCH 32 //32番ピンをSWITCHに接続


void setup() {
  Serial.begin(9600);
  pinMode(SWITCH,INPUT_PULLUP);
  pinMode(LED,OUTPUT);

}

void loop() {
  

}
