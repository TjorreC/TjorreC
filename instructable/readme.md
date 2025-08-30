# Instructable

Een instructable is een stappenplan - zonder verdere uitleg - hoe je vertrekkend van de bill of materials en gebruik makend van de technische tekeningen de robot kan nabouwen. Ook de nodige stappen om de microcontroller te compileren en te uploaden staan beschreven.  

### stap 1
bestel alle componenten uit de bill of materials  


### stap 2
Test aan de hand van de proof of concepts alle componenten. Indien nodig kan je de datasheets raadplegen.

### stap 3
Soldeer alle componenten op het printplaatje (gebruik plug in pinnen om ev kapotte componenten te vervangen). 

### stap 4
Neem het HDPE plaatje en bevestig de motoren (center motor op 1.5 cm van achterkant plaatje) via 2 kleine boringen links en rechts van elke motor en vervolgens te klemmen via ijzerdraad. Bevestig ook de sensor 1.5cm voor de voorkant van het plaatje via 1 boring aan elke kant van de sensor op dezelfde plek als de 2 uiterste gaatjes, vervolgens weer klemmen met ijzerdraad. mbv de plug in pins zijn deze makkelijk te koppelen aan het printplaatje.

### stap 5
Gebruik de dubbelzijdige tape om de batterijhouder (met kabel en schakelaar naar achterkant gericht) te bevestigen op het plaatje. Bevestig het printplaatje op de batterij houder mbv de velcro sticker. koppel de batterij aan het printplaatje.


### stap 6
Upload het programma naar uw arduino nano. download de "Serial bluetooth terminal" app en maak zo verbinding met de HC-05 module (ontkoppel de tx en rx van de HC-05 module voor het uploaden, dit kan storing veroorzaken). De lijnvolger robot is nu klaar voor gebruik, hoe de parameters ingesteld moeten worden via de app staat uitgelegd in de gebruiksaanwijzing.
