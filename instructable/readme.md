# Instructable

Een instructable is een stappenplan - zonder verdere uitleg - hoe je vertrekkend van de bill of materials en gebruik makend van de technische tekeningen de robot kan nabouwen. Ook de nodige stappen om de microcontroller te compileren en te uploaden staan beschreven.  

### stap 1
bestel alle componenten uit de bill of materials  


### stap 2
Test alle componenten afzonderlijk aan de hand van de proof of concepts. Raadpleeg indien nodig de datasheets.

### stap 3
Soldeer de componenten op het printplaatje volgens het elektrisch schema. Gebruik plug-in pinnen zodat defecte componenten later eenvoudig vervangen kunnen worden. Vergeet geen plug-in pinnen te voorzien voor de aansluitingen van de motoren, batterij en sensor). 

### stap 4
Bevestig de motoren op het HDPE-plaatje.
Plaats elke motor gecentreerd op 1,5 cm van de achterzijde.
Boor twee kleine gaatjes links en rechts van elke motor en klem ze vast met ijzerdraad.
Bevestig de sensor op 1,5 cm van de voorzijde.
Boor één gaatje links en rechts ter hoogte van de uiterste montagepunten.
Klem de sensor vast met ijzerdraad.
Via de plug-in pinnen kunnen motoren en sensor eenvoudig met het printplaatje verbonden worden.

### stap 5
Bevestig de batterijhouder met dubbelzijdige tape op het HDPE-plaatje, met de kabel en schakelaar naar de achterkant gericht en klepje naar boven.
Plaats het printplaatje bovenop de batterijhouder met behulp van de velcrostrip.
Verbind de batterij met het printplaatje.

### stap 6
Voorzie een steunpunt aan de voorzijde van de robot zodat het frame stabiel blijft en niet over de grond schuurt.
Gebruik hiervoor een klein, glad object dat weinig wrijving veroorzaakt, bijvoorbeeld een stukje kunststof, een vilten dopje of een rond vijsje met een glad oppervlak.
Bevestig dit steunpunt helemaal vooraan onder het HDPE-plaatje, gecentreerd tussen de twee wielen.
Gebruik hiervoor dubbelzijdige tape om het tijdelijk vast te zetten, en eventueel een druppel superlijm om het stevig te fixeren.
Het steunpunt moet stevig vastzitten, maar tegelijk glad genoeg zijn zodat de robot soepel over papier of gladde oppervlakken kan schuiven zonder vast te haken.

### stap 7
Upload het programma naar de Arduino Nano.
Ontkoppel hiervoor de TX- en RX-pinnen van de HC-05-module, aangezien deze storingen kunnen veroorzaken.
Maak na het uploaden verbinding met de HC-05-module via de seriële communicatie-app.


De lijnvolgerrobot is nu klaar voor gebruik. De instellingen en parameters kunnen aangepast worden volgens de gebruiksaanwijzing.
