# Smart Temperature Controlled Fan

Temperature ke hisab se apne aap ON/OFF hone wala smart fan.

## Kaise Kaam Karta Hai?
- DHT22 sensor room ka temperature check karta hai.
- Agar temperature 30°C se zyada hua, to Fan ON ho jata hai.
- Agar temperature 30°C se kam hua, to Fan OFF ho jata hai.

## Chahiye Hoga
- ESP32 / Arduino
- DHT22 Sensor
- Fan (DC Fan)
- Relay Module
- Jumper Wires

## Connections
- DHT22 DATA -> Pin 4
- Fan / Relay -> Pin 5
- VCC -> 3.3V / 5V
- GND -> GND

## Code File
`fan_code.ino` me pura code hai.

Made by Pooja
