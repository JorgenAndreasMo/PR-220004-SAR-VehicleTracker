// Include guard (pragma once)
#ifndef GPS_H
#define GPS_H

// Include relevant libs
#include "Arduino.h"
#include <TinyGPSPlus.h>

class GPS: public TinyGPSPlus
{
    private:
        
        bool enabled;       // Power status
        char pos[];

    public:
        GPS(bool en);              // Constructor
        // TODO getPos();
        
        // Time calibration
        int getSec();
        int getMin();
        int getHou();

        // Date calibration
        int getDD();
        int getMM();
        int getYYYY();

        // Position
        double getLat();
        double getLng();



};

// Include guard
#endif
