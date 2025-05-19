# Weather_Monitoring_System_using_ESP8266

This project captures and displays temperature and humidity data in real-time using a DHT11 sensor and shows it on a small OLED screen. 
It also prints the data to the serial monitor for additional observation or debugging.

**Components Used**

DHT11 Sensor: Measures temperature and humidity.

OLED Display (using OakOLED library): Displays the captured data.

NodeMCU (or compatible ESP8266 board): Used for running the sketch and interfacing with the sensor and display.

**Connections**

DHT11 Sensor Connections :- The DHT object is created using DHT dht(D4, DHT11);, meaning the DATA pin is connected to D4 on the NodeMCU.

OLED Display Connections (I2C Interface):-The oled.begin(); function initializes the OLED with default I2C pins D1 for SCL and D2 for SDA.


**How It Works:-**
The DHT11 sensor collects temperature and humidity data from the environment.

The microcontroller reads this data and prints it to the serial monitor for debugging or logging.

Simultaneously, the data is displayed on an OLED screen using the I2C interface.

The display updates every second with the latest values.

**Key Features:-**
Real-time monitoring of temperature and humidity.

Clear and compact OLED display output.

Serial output for testing and data logging.

Simple and cost-effective setup using basic components.

**Applications:-**
Indoor climate monitoring

Smart home systems

Educational electronics projects

IoT prototypes for environmental sensing




