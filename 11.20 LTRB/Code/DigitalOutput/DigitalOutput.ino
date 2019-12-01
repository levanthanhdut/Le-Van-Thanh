//#define TenChan Chan
#define LED1 4
#define LED2 5
#define LED3 6
#define LED4 7

int led[4]={LED1,LED2,LED3,LED4};

void blynkLed(int led, int time = 1);

void setup() {
  for(int i=0;i<4;i++)
    pinMode(led[i],OUTPUT);
}

void loop() {
  effectLed1(3);
  effectLed2(3);
  effectLed3(3);
  effectLed4(3);
}
void effectLed4(int time){
  for(int i=0;i<time;i++){
    for(int j=0;j<4;j++)  
      ledOn(led[j],100);
    for(int j=0;j<4;j++)  
      ledOff(led[j],100);
  }
}
void effectLed3(int time){
  for(int i=0;i<time;i++){
    ledOn(led[0],0);
    ledOn(led[3],0);
    ledOff(led[1],0);
    ledOff(led[2],200);
    ledOn(led[1],0);
    ledOn(led[2],0);
    ledOff(led[0],0);
    ledOff(led[3],200);
  }
}
void effectLed2(int time){
  for(int i=0;i<time;i++)
    for(int j=0;j<4;j++)
      blynkLed1(led[j],100); 
}
void effectLed1(int time){
  for(int i=0;i<time;i++){
    for(int j=0;j<4;j++)
      ledOn(led[j],0);
    delay(200);
    for(int j=0;j<4;j++)
      ledOff(led[j],0);
    delay(200);
  }
}
void blynkLed1(int led, int time){ 
  ledOn(led,time);
  ledOff(led,time);
}
void ledOn(int led, int time){
  digitalWrite(led,1); 
  delay(time); 
}
void ledOff(int led, int time){
  digitalWrite(led,0);  
  delay(time);
}
