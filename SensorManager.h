#ifndef SENSORMANAGER_H
#define SENSORMANAGER_H

#include <Arduino.h>

class  SensorManager{
  public: 
    void setup();
    void updateSensors();
    double getDistance();
    
  private:
    int triggerPin = 5;
    int echoPin = 18;
    double distance;
};


#endif