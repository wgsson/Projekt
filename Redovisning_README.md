# EpoxiSense – Luftfuktighetsmätning för epoxi

## Syfte
Mäta och visualisera luftfuktighet och temperatur i realtid i lokaler där epoxi appliceras. Hjälper hantverkare att undvika felhärdning.

---

## Målgrupp
Yrkeshantverkare i industrilokaler, garage och verkstäder. Behov: snabbt, tydligt och mobil dataflöde.

---

## System
- **Sensor:** DHT11 (temp + fukt)  
- **Mikrokontroller:** ESP8266  
- **Backend:** Node.js + MQTT (Mosquitto)  
- **Frontend:** Webbsida med Chart.js  

**Flöde:** ESP8266 → MQTT → Node.js → Webbläsare

---

## Visualisering
Line Chart visar temperatur och luftfuktighet över tid. Ger snabb överblick över om förhållanden är optimala.

---

## Vad som mäts
- Luftfuktighet (RH%)  
- Temperatur (°C)  
- Tid (NTP-stämpel)

---

## Optimala förhållanden
- Luftfuktighet: <80% RH  
- Temperatur: ≥5°C och minst 3°C över daggpunkten

---

## Material
- DHT11 sensor  
- ESP8266 mikrokontroller  
- Arduino IDE  
- Mosquitto MQTT  
- NodeREAD + Chart.js  
- Strömkälla och väggfäste
