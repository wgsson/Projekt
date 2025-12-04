# Redovisning

## Syfte
Syftet är att mäta och visualisera **luftfuktighet och temperatur i realtid** i lokaler där epoxi ska appliceras. Epoxi är mycket känsligt för fukt — för hög eller för låg luftfuktighet kan leda till dålig härdning, bubblor eller försämrad hållbarhet.  
Projektet ska hjälpa hantverkare att enkelt se om förhållandena är optimala innan och under applicering.

---

## Analys av användare och kontext
### Målgrupp
Yrkesverksamma hantverkare som arbetar med epoxi i:
- Industrilokaler  
- Garage  
- Verkstäder  
- Lager, storkök och förråd  

### Kontext & behov
- Stressiga arbetsmiljöer  
- Lokaler med varierande fukt och temperatur  
- Felaktiga förhållanden upptäcks ofta för sent  
- Behov av **snabb, tydlig och mobil information**

### Vad användarna behöver
- Realtidsdata  
- Enkelt att läsa av  
- Trend över tid  
- En sensor som är lätt att montera utan att skada väggar  

---

## Beskrivning av system

### Sensor & hårdvara
- **DHT11** (mäter luftfuktighet och temperatur)  
- **ESP8266** (mikrokontroller som läser och skickar datan)  
- Strömkälla (USB/powerbank)  
- Flexibelt väggfäste som:
  - Kan hängas utan att skada yta  
  - Inte sitter vid ventilation eller öppna dörrar  
  - Är lätt att flytta mellan olika lokaler  

### Kommunikation & mjukvara
- **Arduino IDE**
  - DHT Sensor Library  
  - Adafruit Unified Sensor Library  
- **MQTT** via Mosquitto  
- **Node.js backend**  
- **Chart.js** för visualisering  

---

## Visualisering (Line Chart)
Vi använder **Line Chart** eftersom den:
- visar förändringar över tid tydligt  
- passar för jämförelse mellan temperatur och luftfuktighet  
- gör det enkelt att upptäcka risknivåer  
- ger *kunskap*, inte bara siffror  

---

## Vad som mäts
- **Luftfuktighet (RH%)**  
- **Temperatur (°C)**  
- **Tid** (NTP-server)  

---

## Optimala förhållanden för epoxi
- Luftfuktighet: **under 80% RH**  
- Yttemperatur: **minst 3°C över daggpunkten**  
- Rekommenderad temperatur: **≥ +5°C**  

Felaktig luftfuktighet kan leda till:
- Bubblor  
- För långsam eller för snabb härdning  
- Missfärgning  
- Sprickor  
- Förkortad livslängd  

---

## Utförande
1. DHT11 monteras i ett anpassat väggfäste.  
2. ESP8266 läser av mätvärden regelbundet.  
3. MQTT publicerar värden till en lokal Mosquitto-broker.  
4. Backend tar emot värden och skickar dem vidare till frontend.  
5. Webbsidan ritar upp en Line Chart i realtid.  

---

## Material
- DHT11 luftfuktighetssensor  
- ESP8266 mikrokontroller  
- Arduino IDE  
- Mosquitto MQTT  
- Node.js  
- Chart.js  
- Strömkälla  
- Väggfäste  

---

## Förväntat resultat och nytta
Projektet ska resultera i:
- En fungerande sensorstation för epoxi-arbetsmiljöer  
- Realtidsvisualisering av luftfuktighet och temperatur  
- Stabil MQTT-baserad dataöverföring  
- En design som fungerar i verkliga arbetsmiljöer  

**Nytta:**  
Hantverkare får kontroll på klimatförhållandena och kan undvika felhärdning — vilket sparar både tid och kostnader.

---

## Bildexempel
**Så här kan epoxi se ut:**

![Bild på epoxigolv](bilder_slutprojekt/image-000-1-830x701.jpg)
