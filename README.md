# Ember Mug 3 - Pregunta 1. Definition of application service layer requirements

## Definition of application service layer requirements

| Application Service Layer Requirement | Especificación de requisitos |
|---------------------------------------|------------------------------|
| **Servicio 1: Servicio de Control y Monitoreo de Temperatura** | **Interfaz de Aplicación Móvil:** Interfaz táctil intuitiva para el monitoreo y control de temperatura en tiempo real<br>**Panel de Escritorio:** Dashboard integral basado en web para análisis detallado y gestión de dispositivos<br>**Características Clave:**<br>• Visualización de temperatura en tiempo real con indicadores visuales<br>• Ajuste de configuración de temperatura (rango 45°C - 63.5°C)<br>• Visualización LED bar graph mostrando el nivel de temperatura ideal<br>• Notificaciones push para alertas de temperatura |
| **Servicio 2: Servicio de Configuración de Dispositivos y Gestión de Red** | **Interfaz de Aplicación Móvil:** Asistente de configuración amigable y panel de configuración<br>**Interfaz Web:** Opciones de configuración avanzadas para usuarios expertos<br>**Características Clave:**<br>• Emparejamiento y gestión de red WiFi<br>• Registro y autenticación de dispositivos<br>• Capacidades de control remoto de dispositivos<br>• Gestión de actualizaciones de firmware |
| **Servicio 3: Servicio de Detección de Nivel de Líquido y Modo de Operación** | **Interfaz de Aplicación Móvil:** Indicador visual de nivel de líquido y estado del modo de operación<br>**Interfaz de Tablet:** Visualización mejorada para entornos comerciales/oficina<br>**Características Clave:**<br>• Monitoreo de nivel de líquido en tiempo real (datos del sensor HC-SR04)<br>• Cambio automático de modo (STAND_BY/ACTIVE)<br>• Indicadores visuales para modos de operación<br>• Activación inteligente basada en proximidad |
| **Servicio 4: Servicio de Análisis de Datos y Reportes** | **Interfaz de Aplicación Móvil:** Dashboards de resumen y insights rápidos<br>**Interfaz de Escritorio:** Plataforma de análisis integral con reportes detallados<br>**Características Clave:**<br>• Análisis de patrones de uso y consumo<br>• Historial y tendencias de temperatura<br>• Seguimiento de consumo de energía<br>• Métricas de rendimiento del dispositivo<br>• Recomendaciones personalizadas para uso óptimo |
| **Servicio 5: Servicio de Soporte y Mantenimiento** | **Interfaz de Aplicación Móvil:** Centro de ayuda y guías de resolución de problemas<br>**Interfaz Web:** Portal de soporte integral con foros comunitarios<br>**Características Clave:**<br>• Guías interactivas de resolución de problemas<br>• Diagnósticos remotos y soporte<br>• Notificaciones de actualizaciones de software<br>• Acceso a manual de usuario y FAQ<br>• Integración de chat de soporte técnico directo |
| **Servicio 6: Servicio de Transmisión de Estado en Tiempo Real** | **Interfaz de Aplicación Móvil:** Actualizaciones de estado en tiempo real y notificaciones<br>**Dashboard de Escritorio:** Consola de monitoreo del sistema para múltiples dispositivos<br>**Características Clave:**<br>• Actualizaciones de estado en formato JSON cada 5 segundos<br>• Seguimiento de dirección MAC del dispositivo<br>• Monitoreo de modo de operación (STAND_BY/ACTIVE)<br>• Comparación de temperatura actual vs ideal<br>• Monitoreo de distancia de nivel de agua<br>• Seguimiento de timestamp para todos los eventos |

---

### Descripción General de la Arquitectura de Capa de Servicio

La capa de servicio de aplicación del Ember Mug 3 está diseñada para proporcionar gestión integral de dispositivos IoT a través de múltiples tipos de interfaz:

- **Aplicaciones Móviles**: Interfaz de usuario principal para interacción diaria
- **Dashboards de Escritorio/Web**: Análisis avanzado y gestión de múltiples dispositivos
- **Interfaces de Tablet**: Visualización mejorada para entornos comerciales

Cada servicio se integra con los componentes de hardware basados en ESP32, incluyendo el LED bar graph, sensor de temperatura DS18B20, tactile switches y sensor de proximidad HC-SR04 para entregar una experiencia de usuario fluida a través de todos los modos operacionales (STAND_BY/ACTIVE).
