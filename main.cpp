#include <iostream>
 #include "Personne.h"
using namespace std;
int main ()
{
Personne sarko, carlita, manu, bibi; // Création de 4 objets de type Personne, créé par leurs surnoms 
carlita.marier("SARKOZY"); // Carla BRUNI se marie avec Nicolas SARKOZY
bibi.marier("MACRON"); // Brigitte se marie avec Emmanuel MACRON
manu.demenager("Palais de l'Elysée, 75008 PARIS"); // Emmanuel MACRON déménage à l'Elysée 
bibi.demenager("Palais de l'Elysée, 75008 PARIS"); // Brigitte MACRON déménage à l'élysée 
sarko.anniversaire(); // Nicolas SARKOZY a 1 an de plus
sarko.changer_travail ("Hommes d'Affaires"); // Nicolas SARKOZY a toujours aimé l'argent ! 
carlita.changer_travail ("Chanteuse"); // Faut croire que Carla BRUNI sait chanter ! 
manu.changer_travail ("Président de la République"); // Emmanuel MACRON devient Président 
bibi.changer_travail ("Première Dame"); // Brigitte MACRON devient la première Dame de France 
return 0;
}