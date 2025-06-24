#ifndef STATEMANAGER_H
#define STATEMANAGER_H

#include <Arduino.h>

class StateManager{
  public: 
    void setDistance(double distance);
    double getDistance();
  private: 
  double distance;
};
#endif 