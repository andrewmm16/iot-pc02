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

# Requisitos de la Capa de Servicios de Aplicación

| Application Service Layer Requirement | Especificación de requisitos |
|---------------------------------------|------------------------------|
| **Servicio 1: Servicio de Monitoreo de Uso de Agua** | - Interfaz gráfica en la aplicación móvil y la aplicación de escritorio para visualizar el uso de agua en tiempo real<br>- Gráficos que muestren el consumo de agua diario, semanal y mensual<br>- Alertas que notifiquen al usuario sobre patrones inusuales de uso de agua |
| **Servicio 2: Servicio de Control de Válvula** | - Interfaz en la aplicación móvil para permitir a los usuarios abrir o cerrar la válvula manualmente<br>- Indicadores visuales que muestren el estado de la válvula y si sea si está abierta o cerrada y el flujo de agua<br>- Opción para programar los horarios para el funcionamiento automático del grifo |
| **Servicio 3: Servicio de Configuración del Dispositivo** | - Interfaz de configuración desde la aplicación móvil para ajustar el umbral o threshold de proximidad del sensor que detecta cuando el usuario acerca las manos al grifo y que por defecto detecta si traspasa los 10 cm<br>- Opción para cambiar la duración del flujo de agua que realiza el Relay Module al abrir la válvula de agua (por defecto está en 5 segundos) según las preferencias del usuario<br>- Configuración de la conectividad WIFI y gestión de la red |
| **Servicio 4: Servicio de Mantenimiento y Soporte** | - Sección en la aplicación para acceder a manuales de usuario y guías para solucionar problemas recurrentes<br>- Opción para enviar consultas al soporte técnico directamente desde la aplicación móvil |
| **Servicio 5: Servicio sobre el Uso del Agua** | - Notificaciones sobre actualizaciones de software y mantenimiento<br>- Interfaz que ofrezca consejos y recomendaciones personalizadas para la conservación del agua basadas en el consumo del usuario<br>- Gráficos y estadísticas que comparen el uso de agua del usuario con promedios de consumo en su área, solo en caso de que otros usuarios también usen la misma solución IoT<br>- Challenges para reducir el consumo de agua, con recompensas virtuales o logros para motivar a los usuarios<br>- Notificaciones periódicas que recuerden a los usuarios la importancia de conservar el agua y cómo el mal uso impacta al medio ambiente |
