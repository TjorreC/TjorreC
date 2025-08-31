# Gebruiksaanwijzing

### opladen / vervangen batterijen
De robot werkt op twee 18650 Li-ion batterijen. Gebruik steeds een geschikte externe lader om deze op te laden. Voor het vervangen trek je de velcrostrip voorzichtig los en open je het klepje van de batterijhouder. De batterijen kunnen vervolgens eenvoudig uitgenomen en vervangen worden.

### draadloze communicatie
#### verbinding maken
Schakel de batterijschakelaar op ON om het systeem onder spanning te zetten. Het ledje op de HC-05-module zal snel knipperen. Installeer een seriële communicatie-app, bijvoorbeeld Serial Bluetooth Terminal (beschikbaar in de Google Play Store). Maak hiermee verbinding met de bluetoothmodule. Zodra dit gelukt is, knippert het ledje trager. De microcontroller kan nu draadloos commando’s ontvangen.
#### commando's
debug [on/off] – Toont de ingestelde parameters en uitlezingen (wit- en zwartwaarden).
run – Start de robot.
stop – Stopt de robot.
set cycle [µs] – Stelt de cycle time in. Deze moet hoger zijn dan de calculation time (aanbevolen: 2×). De calculation time is zichtbaar via het debug-commando.
set power [0..255] – Regelt de motor­kracht.
set diff [0..1] – Past de snelheid in bochten aan. Hoe hoger de waarde, hoe sterker de robot versnelt in bochten.
set kp [0..] – Correctie op basis van fout. Hogere waarden zorgen voor snellere bijsturing, maar te hoog kan schokkerig gedrag veroorzaken.
set ki [0..] – Corrigeert sterker naarmate een fout langer aanhoudt.
set kd [0..] – Corrigeert op basis van de verandering van de fout ten opzichte van de vorige cyclus.
calibrate black – Slaat de zwarte referentiewaarden van de sensor op.
calibrate white – Slaat de witte referentiewaarden van de sensor op.

### kalibratie
De sensoren meten waardes tussen 0 en 1000 om onderscheid te maken tussen wit en zwart. Deze waardes kunnen variëren door lichtinval, reflecties of andere storingen. Voor een betrouwbare werking moet de robot opnieuw gekalibreerd worden bij een verandering van omgeving of ondergrond.

### settings
De robot rijdt stabiel met volgende parameters:  

### start/stop button
Op het printplaatje bevindt zich een duidelijke rode knop. Hiermee kan de robot gestart en gestopt worden.
De knop werkt via een interruptfunctie met debounce, zodat foutieve triggers worden vermeden.
