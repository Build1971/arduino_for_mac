//
//  myProj_ino.cpp
//  arduino_for_mac
//
//  Created by Koen Meesters on 19/12/2024.
//
#include "arduino.h"
SerialClass Serial;

void setup() {
    Serial.begin(9600);
    Serial.println("Hello world!");
    pinMode(0, Tx);
    pinMode(1, Rx);
    pinMode(2, INPUT_PULLUP);
    pinMode(3, OUTPUT);
}

int loopCounter = 0;
void loop() {
    Serial.println(loopCounter);
    delay(1000);
    digitalRead(2);
    analogWrite(3, 128);
    digitalWrite(1, HIGH);
    Serial.println(millis());
    Serial.println(micros());
    printPinState();
    loopCounter++;
}
