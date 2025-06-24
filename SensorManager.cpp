#include "SensorManager.h"

void SensorManager::setup(){
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void SensorManager::updateSensors(){
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  long duration = pulseIn(echoPin,HIGH);
  distance = (duration * 0.034)/2;

}


double SensorManager::getDistance(){
  return distance;
}