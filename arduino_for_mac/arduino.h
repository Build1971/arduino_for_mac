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
    void print(uint32_t);
    void println(uint32_t);
    void print(uint8_t);
    void println(uint8_t);
    void print(const char* charPtr);
    void println(const char* charPtr);
};

const uint8_t Tx = 0;
const uint8_t Rx = 1;
const uint8_t INPUT = 2;
const uint8_t INPUT_PULLUP = 3;
const uint8_t OUTPUT = 4;
const uint8_t HIGH = 1;
const uint8_t LOW = 0;
struct PinState {
    uint8_t m_mode = INPUT;
    uint8_t m_state = LOW;
    uint8_t m_pwm = 0;
};
const uint8_t numOfPins = 4;


void delay(uint32_t);
uint32_t millis();
uint32_t micros();
void pinMode(uint8_t pinNr, uint8_t pinMode = 0);
uint8_t digitalRead(uint8_t pinNr);
void digitalWrite(uint8_t pinNr, int8_t state);
uint16_t analogRead(uint8_t pinNr);
void analogWrite(uint8_t pinNr, uint8_t pwm);
void printPinState();
#endif
