//
//  myProj_ino.cpp
//  arduino_for_mac
//
//  Created by Koen Meesters on 19/12/2024.
//
#include "arduino.h"
#define _MAC //toggle this off if you copy the code to an arduino environment
#ifdef _MAC
SerialClass Serial;
#endif

void setup() {
    Serial.begin(9600);
    Serial.println(__FILE_NAME__);
    Serial.println("Compiled on:");
    Serial.print(__DATE__);
    Serial.print(" ");
    Serial.println(__TIME__);
    pinMode(2, INPUT_PULLUP);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(A0, INPUT);
    randomSeed(analogRead(A0));
}

void loop() {
    delay(1000);
    analogWrite(12, 128);
    digitalWrite(4, HIGH);
    Serial.println(digitalRead(2));
    Serial.println(analogRead(A0));
    Serial.println("Millis: ");
    Serial.println(millis());
    Serial.println("Micros: ");
    Serial.println(micros());
    Serial.println(random(20));
    #ifdef _MAC
    printPinState();
    #endif
}
