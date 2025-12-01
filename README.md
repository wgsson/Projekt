# Luftfuktighet inom hantverkarbranschen
## Introduktion
Epoxi är en form av flytande massa (tvåkomponentshärdplast) som bland annat används som golvyta i lokaler så som industrier, storkök och garage. Man häller alltså ut Epoxi på golvytor och skrapar ut det för att få det jämnt. Epoxi är ett fuktkänsligt material och en för hög luftfuktighet gör att härdprocessen går för långsamt och man riskerar golvets hållbarhet. Därför är det av stor vikt att mäta luftfuktighet i lokaler där epoxi ska användas.  

**Såhär kan epoxi se ut:**

![Bild på epoxigolv](bilder_slutprojekt/image-000-1-830x701.jpg)

## Projektbeskrivning
- Syfte: Minska risken att Epoxin ska torka för sakta eller för snabbt genom att kontrollera luftfuktigheten vid applicering av epoxi
- Målgrupp: yrkeshantverkare som arbetar med Epoxi
- Sensor: Luftfuktighetssensor kopplat mot app
- Kontext: Stressiga miljöer ofta i industrilokaler med varierande fukt
- Problemområden: Vid för högluftfuktighet torkar inte Epoxin som det ska, bubblor kan bildas, missfärgning och minskad hållbarhet! Vid för låg luftfuktighet är risken att Epoxin härdar (torkar) för fort. 
- Kunskap: Genom att se trenden på luftfuktigheten under och innan applicering så minimerar det risken för att materialet ska härda för snabbt eller för långsamt. Vi kommer undersöka hur luftfuktigheten ändras under torkningstiden för att få ett estimat när nästa lager kan läggas.
- Kommer att redovisas genom en Line Chart.
<img width="652" height="373" alt="image" src="https://github.com/user-attachments/assets/f3a79cd3-c4de-4cd3-9ff0-9e37f19f7147" />

## Utfördande 
Mätningen kommer utföras genom att placera DHT11-sensorn på ett väggfäste i utvald miljö/lokal där data över temperatur, luftfuktighet och tid kommer inhämtas. Datan kommer samlas in genom en mikrokontroller och visualiseras i ett webbgränssnitt/applikation. 

## Material 
- Luftfuktighetssensor (DHT11)
- Mikrokontroller (Arduino)
- Någon form av webbgränssnitt för att visualisera mätvärden i realtid
- Strömkälla (batteri)
- Väggfäste till sensorn 
- Testmiljö (valfritt rum enligt Johan, behöver inte testas i epoximiljö)
## Vad ska mätas?
- Tid
- Luftfuktighet (RF%)
- Temperatur
