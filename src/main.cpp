#include <Arduino.h>

#define PIR 16

void setup() {
  Serial.begin(115200);
  pinMode(PIR, INPUT);
}

void loop() {
  int coNguoi = digitalRead(PIR);
  Serial.println(coNguoi ? "co nguoi" : "khong");
  delay(300);
}