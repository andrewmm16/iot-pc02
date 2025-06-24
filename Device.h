#ifndef DEVICE_H
#define DEVICE_H

#include <Arduino.h>
#include <SensorManager.h>
#include <ActuatorManager.h>
#include <StateManager.h>

class Device{
  public:
    Device();
    void loop();
    void setup();

  private:
  SensorManager sensormanager;
  ActuatorManager actuatormanager;  
  StateManager statemanager;
};

#endif