#include "Device.h"

Device::Device() {}

void Device::setup(){
  Serial.begin(9600);
  Serial.println("Los mejores cortes de pelo");
  Serial.println("Te los dan en los chamos");
  Serial.println("O terminas sin un brazo :b");

  sensormanager.setup();
  actuatormanager.setup();
}

void Device::loop(){
  sensormanager.updateSensors();

  statemanager.setDistance(sensormanager.getDistance());

  actuatormanager.updateActuators(statemanager.getDistance());

  Serial.print("Distance: ");
  Serial.print(statemanager.getDistance());
  Serial.print(" cm, Valve: ");
  Serial.println(actuatormanager.getDoorState() == 1 ? "Open": "Closed");

  delay(2500);
}