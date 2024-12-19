//
//  main.cpp
//  arduino_for_mac
//
//  Created by Koen Meesters on 19/12/2024.
//
#include <time.h>
#include <iostream>
#include "myProj_ino.h"
int main(int argc, const char * argv[]) {
    srand((int)time(NULL));
    int loopCounter = 0;
    setup();
    while (loopCounter<1000) {
        loop();
        loopCounter++;
    }
    return 0;
}
