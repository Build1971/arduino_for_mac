//
//  main.cpp
//  arduino_for_mac
//
//  Created by Koen Meesters on 19/12/2024.
//
#include <time.h>
#include <iostream>
#include "arduino.h"
int main(int argc, const char * argv[]) {
    srand((int)time(NULL));
    setup();
    int loopCounter = 0;
    while (loopCounter<max_loops) {
        loop();
        loopCounter++;
        std::cout << "loop counter: " << loopCounter << '\n';
    }
    return 0; //unlike Arduino, this program ends after max_loops loops and returns to the system...
}
