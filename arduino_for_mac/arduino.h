//
//  arduino.h
//  arduino_for_mac
//
//  Created by Koen Meesters on 19/12/2024.
//
#include <iostream>
#ifndef ARDUINO_H
#define ARDUINO_H
class SerialClass {
    int m_baudRate;
public:
    void begin(int baudRate) {
        m_baudRate = baudRate;
    }
    void print(int);
    void println(int);
    void print(uint8_t);
    void println(uint8_t);
    void print(const char* charPtr);
    void println(const char* charPtr);
};

void delay(uint32_t);
uint32_t millis();
uint32_t micros();

#endif
