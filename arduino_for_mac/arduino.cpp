//
//  arduino.cpp
//  arduino_for_mac
//
//  Created by Koen Meesters on 19/12/2024.
//
#include "arduino.h"
#include <iostream>
void SerialClass::print(int myInt) {
    std::cout << myInt;
}

void SerialClass::print(uint8_t myInt) {
    std::cout << (int)myInt;
}

void SerialClass::println(int myInt) {
    std::cout << myInt << '\n';
}

void SerialClass::print(uint32_t myInt) {
    std::cout << myInt;
}

void SerialClass::println(uint32_t myInt) {
    std::cout << myInt << '\n';
}


void SerialClass::println(uint8_t myInt) {
    std::cout << (int)myInt << '\n';;
}

void SerialClass::print(const char* charPtr) {
    while (*charPtr != '\0') {
        std::cout << *charPtr;
        charPtr++;
    }
}

void SerialClass::println(const char* charPtr) {
    while (*charPtr != '\0') {
        std::cout << *charPtr;
        charPtr++;
    }
    std::cout << '\n';
}

using namespace std::chrono;
uint32_t micros() {
    return (uint32_t)duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();
}

uint32_t millis() {
    return (uint32_t)(duration_cast<microseconds>(system_clock::now().time_since_epoch()).count()/1000);
}

void delay(uint32_t myDelay) {
    uint32_t m_start = millis();
    while (millis()-m_start < myDelay) {
        ;
    }
}

void randomSeed(uint32_t seed) {
    srandom((uint)time(NULL)); //make random yield real random...
}

uint32_t random(uint32_t max) {
    return (uint32_t)random() * max / RAND_MAX;
}

PinState pinState[numOfPins];

void pinMode(uint8_t pinNr, uint8_t pinMode){
    pinState[pinNr].m_mode = pinMode;
}

uint8_t digitalRead(uint8_t pinNr){
    return HIGH;
}

uint16_t analogRead(uint8_t pinNr){
    return 1023;
}

void digitalWrite(uint8_t pinNr, int8_t state){
    pinState[pinNr].m_state = state;
}

void analogWrite(uint8_t pinNr, uint8_t pwm){
    pinState[pinNr].m_pwm = pwm;
}

void printPinState() {
    std::cout << "Pinstate\n";
    std::cout << "Nr,mode,state,pwm\n";
    for (uint8_t pinNr=0; pinNr<numOfPins; pinNr++) {
        std::cout << (int)pinNr << ", ";
        std::cout << (int)pinState[pinNr].m_mode << ", ";
        std::cout << (int)pinState[pinNr].m_state << ", ";
        std::cout << (int)pinState[pinNr].m_pwm << '\n';
    }
}
