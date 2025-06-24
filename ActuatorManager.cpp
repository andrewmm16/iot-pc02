#include "ActuatorManager.h"

void ActuatorManager::setup(){
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin,OUTPUT);
  digitalWrite(relayPin, LOW);
  digitalWrite(ledPin, LOW);
}

void ActuatorManager::updateActuators(double distance){
  if(distance < 10){
    doorState = 1;
    digitalWrite(relayPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(5000);
    digitalWrite(relayPin, LOW);
  }else{
    doorState = 0;
    digitalWrite(ledPin, LOW);
  }
}

int ActuatorManager::getDoorState(){
  return doorState;
}
