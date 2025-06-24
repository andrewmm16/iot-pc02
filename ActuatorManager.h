#ifndef ACTUATORMANAGER_H
#define ACTUATORMANAGER_H
#include <Arduino.h>


class ActuatorManager{
  public: 
    void setup();
    void updateActuators(double distance);
    int getDoorState();
    
  private:
    int relayPin = 4;
    int ledPin = 2;
    int doorState = 0;
};

#endif