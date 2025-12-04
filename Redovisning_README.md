# EpoxiSense – Luftfuktighetsmätning för epoxi

## Syfte
Mäta och visualisera luftfuktighet och temperatur i realtid i lokaler där epoxi appliceras. Hjälper hantverkare att undvika felhärdning.

---

## Målgrupp
Yrkeshantverkare i industrilokaler, garage och verkstäder. Behov: snabbt, tydligt och mobil dataflöde.

---

## System
- **Sensor:** DHT11 (temp, fukt)  
- **Mikrokontroller:** ESP8266
- **Arduino IDE** kodhantering + bibliotek (även för NTP så att vi får in tid)
- **Backend:** NodeRED + MQTT (Mosquitto)
-  **Frontend:** Webbsida med Chart.js (Point Styling)
-  **Flöde:** ESP8266 → MQTT → Node.js → Webbläsare
-  **Data från DHT11 samt NTP-biblotek i terminalen via MQTT**
  <img width="300" height="105" alt="image" src="https://github.com/user-attachments/assets/1592225c-118b-4701-9534-ca2e2fbd9dae" />



## Visualisering
- **Line Chart** visar temperatur och luftfuktighet över tid. Ger snabb överblick över om förhållanden (Tidpunkt och luftfuktighet) är optimala.
![bild på line craft](bilder_slutprojekt/linechart2.png)
---

## Vad som mäts
- Luftfuktighet (RH%)  
- Temperatur (°C)  
- Tid (NTP-stämpel)

---

## Optimala förhållanden
- Luftfuktighet: <80% RH  
- Temperatur: ≥5°C och minst 3°C över daggpunkten

## Väggfäste

## Tidsplan
# V.49: 
- Sensor kopplad mot MQTT (klar)
- Visualisering bestämd (klar)
- Lägga upp en plan för väggfäste (klar)
# V.50:
- MQTT kopplad till visualiseringen
- Starta arbete med fästet
- Bygga visualisering
# V.51:
- Fortsätta/koppla visualisering
- Redovisa

