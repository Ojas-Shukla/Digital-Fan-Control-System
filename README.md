# Digital-Fan-Control-System
<p>An Automatic Digital Fan Control System that adjusts fan speed based on room temperature using Arduino Uno, DHT22 Sensor, Servo Motor, and I2C LCD Display.

The system continuously monitors temperature and automatically controls fan speed to maintain comfort and improve energy efficiency.

This project is designed for Embedded Systems and can be simulated on Wokwi or implemented using real hardware.</p></n>

<h3>📌 Features</h3>
<p>
✅ Automatic fan speed control
✅ Real-time temperature monitoring
✅ LCD temperature display
✅ Energy-efficient control
✅ Simple Arduino-based design
✅ Wokwi simulation support</p></n>

<h3>🛠 Components Used</h3>
<p>
| Component                    | Quantity    |
| ---------------------------- | ----------- |
| Arduino Uno                  | 1           |
| DHT22 Temperature Sensor     | 1           |
| Servo Motor (Fan Simulation) | 1           |
| 16x2 LCD Display (I2C)       | 1           |
| Jumper Wires                 | As required |
</p></n>


<h3>⚙️ Working Principle</h3>
<p>
1. The DHT22 sensor reads the temperature.

2. Arduino processes the temperature value.

3. Based on temperature:

  * Below 25°C → Fan OFF (0° servo angle)

  * 25°C – 35°C → Medium Speed (90° servo angle)

  * Above 35°C → Full Speed (180° servo angle)

4. Temperature and fan status are displayed on the LCD.
</p></n>

<h3>🔌 Circuit Connections</h3>
<p>
| DHT22 Pin | Arduino Pin |
| --------- | ----------- |
| VCC       | 5V          |
| GND       | GND         |
| Data      | Pin 2       |
</p></n>
<p>
| Servo Pin | Arduino Pin |
| --------- | ----------- |
| VCC       | 5V          |
| GND       | GND         |
| Signal    | Pin 9       |
</p></n>

<p>
| LCD Pin | Arduino Pin |
| ------- | ----------- |
| VCC     | 5V          |
| GND     | GND         |
| SDA     | A4          |
| SCL     | A5          |
</p></n>

<h4><b>This project can be simulated on Wokwi:

https://wokwi.com/projects/456681379403831297</b></h4></n>

<h3>🚀 Future Improvements</h3>
<p>
* PWM fan speed control (real DC fan)

* Mobile app monitoring (IoT)

* Automatic humidity control

* Temperature history graph

* ESP32 WiFi integration
</p>

