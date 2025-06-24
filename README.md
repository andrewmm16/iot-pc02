# ESP32 IoT Project 

## Overview
Modular ESP32-based IoT system with clean architecture for sensor integration and actuator control.

## Project Structure
```
├── sketch.ino              # Main Arduino sketch
├── Device.h/.cpp           # Main device controller
├── SensorManager.h/.cpp    # Sensor handling
├── ActuatorManager.h/.cpp  # Actuator control
├── StateManager.h/.cpp     # State management
├── diagram.json           # Wokwi circuit diagram
└── libraries.txt          # Required libraries
```

## Architecture
- **Device**: Main controller that orchestrates all components
- **SensorManager**: Handles sensor operations and data acquisition
- **ActuatorManager**: Controls actuators and outputs
- **StateManager**: Manages system state and data flow

## Getting Started
1. Connect your hardware according to your specific setup
2. Modify pin assignments in header files
3. Upload code to ESP32
4. Monitor via Serial 

## Customization
- **Sensors**: Replace sensor logic in `SensorManager`
- **Actuators**: Modify actuator control in `ActuatorManager`
- **Thresholds**: Adjust trigger values in actuator methods
- **Timing**: Change delays in main loop or actuator timing
- **Communication**: Add WiFi, Bluetooth, or other protocols

## Wokwi Simulation
Import `diagram.json` into Wokwi for simulation without physical hardware.

