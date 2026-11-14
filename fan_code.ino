#include <DHT.h>

#define DHTPIN 4
#define DHTTYPE DHT22
#define FAN_PIN 5

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(FAN_PIN, OUTPUT);
  digitalWrite(FAN_PIN, LOW);
  Serial.println("Smart Temperature Controlled Fan Started");
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("DHT22 se reading nahi mili!");
    delay(2000);
    return;
  }

  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" C  Humidity: ");
  Serial.print(hum);
  Serial.println(" %");

  if (temp > 30) {
    digitalWrite(FAN_PIN, HIGH);
    Serial.println("Temp > 30C -> Fan ON");
  } else {
    digitalWrite(FAN_PIN, LOW);
    Serial.println("Temp < 30C -> Fan OFF");
  }

  delay(2000);
}
