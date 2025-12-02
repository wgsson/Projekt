#include "ESP8266WiFi.h"
#include "time.h"
#include "DHT.h"

// ---- DHT Inställningar ----
#define DHTPIN D4          // Pin D4 (valfri digital pin på ESP32)
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// ---- WiFi Inställningar ----
const char* ssid = "MDU_guest";
const char* password = "Frozen202512";

// ---- NTP (internet-tid) ----
const char* ntpServer = "pool.ntp.org";
const long gmtOffset_sec = 3600;         // Sverige UTC+1
const int daylightOffset_sec = 0;     // Sommartid

// ---- Funktion för att skriva tid ----
void printLocalTime() {
  struct tm timeinfo;
  if (!getLocalTime(&timeinfo)) {
    Serial.println("Kunde inte hämta tid");
    return;
  }

  char buffer[64];
  strftime(buffer, sizeof(buffer), "%A, %B %d %Y %H:%M:%S", &timeinfo);
  
  Serial.println(buffer);
  }

void setup() {
  Serial.begin(115200);

  // Starta DHT11
  dht.begin();
  delay(2000);

  // Anslut WiFi
  Serial.printf("Ansluter till WiFi: %s\n", ssid);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi ansluten!");

  // Starta NTP
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
  Serial.println("NTP tid konfigurerad!");
}

void loop() {
  // Läs av sensorn
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Kolla om värdena är giltiga
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Fel vid läsning av DHT11!");
    delay(2000);
    return;
  }

  // Skriv ut tid + sensorvärden
  printLocalTime();
  Serial.printf("  |  Fukt: %.1f%%  Temp: %.1f°C\n", humidity, temperature);

  delay(2000); // Mät var 2 sekund
}
