//
//  myProj_ino.cpp
//  arduino_for_mac
//
//  Created by Koen Meesters on 19/12/2024.
//
#include "arduino.h"
SerialClass Serial;

void setup() {
    pinMode(1, INPUT_PULLUP);
    Serial.begin(9600);
    Serial.println("Hello world!");
}

int loopCounter = 0;
void loop() {
    Serial.println(loopCounter);
    delay(1000);
    loopCounter++;
}
