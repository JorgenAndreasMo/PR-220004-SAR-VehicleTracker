#ifndef PERIPHERALS_H
#define PERIPHERALS_H

#include "Arduino.h"
#include <TinyGPSPlus.h>
#include <MFRC522.h>

class Peripherals{
    private:

    public:
        TinyGPSPlus GPS;
        MFRC522 NFC;

};



#endif