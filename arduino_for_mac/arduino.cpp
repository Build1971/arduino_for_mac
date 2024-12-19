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
    //std::cout << m_start << '\n';
    while (millis()-m_start < myDelay) {
        ;
    }
}
