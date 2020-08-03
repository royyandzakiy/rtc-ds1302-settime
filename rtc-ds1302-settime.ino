#include <virtuabotixRTC.h>
virtuabotixRTC myRTC(6,7,8);

//#define SET_TIME

void setup() {
  Serial.begin(9600);
  Serial.println("--- RTC Time Check Start! ---");
  #ifdef SET_TIME
    Serial.println("RTC Set Time");
    myRTC.setDS1302Time(30,35,22,6,3,8,2020);
  #endif
  
  Serial.println("Check Time #1");
  myRTC.updateTime();
  Serial.println(myRTC.seconds);
  Serial.println(myRTC.minutes);
  Serial.println(myRTC.hours);
  Serial.println(myRTC.month);
  Serial.println(myRTC.year);

  delay(3000);
  Serial.println("Check Time #2");
  myRTC.updateTime();
  Serial.println(myRTC.seconds);
  Serial.println(myRTC.minutes);
  Serial.println(myRTC.hours);
  Serial.println(myRTC.month);
  Serial.println(myRTC.year);

  delay(3000);
  Serial.println("Check Time #3");
  myRTC.updateTime();
  Serial.println(myRTC.seconds);
  Serial.println(myRTC.minutes);
  Serial.println(myRTC.hours);
  Serial.println(myRTC.month);
  Serial.println(myRTC.year);

  Serial.println("--- RTC Time Check Done! ---");
}

void loop() {
}
