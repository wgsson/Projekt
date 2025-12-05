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

# EpoxMonitor 
- Realtidsvisning: Visar aktuell luftfuktighet, tid och temperatur direkt.
- Varningsfärger: Varnar om värdena är för höga eller låga.
- Historisk data: Möjlighet att se tidigare mätningar.
- Enkel layout: Ren, enkel och undvika maximilism.
- Daggpunktvarning: Visar om det finns risk för kondens på golvytan.
- Statusruta: Ger en snabb, tydlig översikt över den aktuella situationen.
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
Magnetfäste

- Målet är att NodeMCU och DHT11 sitter skyddade och på rätt höjd för att mäta luftfuktighet och temperatur.
- Vi har valt ett magnetfäste. Kapslingen fästs direkt på metall eller på en tunn metallplatta med tejp om väggen inte är metall. Det krävs inga verktyg, och väggarna blir inte skadade.
- Kapslingen är liten, skyddar elektroniken och har ventilationshål så sensorn kan mäta luftflödet korrekt. Den sitter stabilt på rätt höjd men kan flyttas om man vill testa olika placeringar.
- Fästet gör installationen snabb och enkel, ger pålitliga mätvärden och passar bra i olika arbetsmiljöer där epoxi används.


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

