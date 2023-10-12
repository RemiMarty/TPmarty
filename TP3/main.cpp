#include <iostream>
#include "personne.h"

using namespace std;
int main ()
{
    Personne sarko("SARKOZY", "Nicolas",62, "Avocat" );
    Personne carlita("BRUNI", "Carla", 50,"Mannequin");
    Personne manu("MACRON", "Emmanuel", 40,"Banquier");
    Personne bibi("TROGNEUX", "Brigitte", 64, "Enseignante"); 
    Personne flanby("HOLLANDE", "Francois",67, "fonctionnaire" );
    Personne sego("ROYAL", "segolene", 68,"ministre");
    Personne jeanmimi("BLANQUIER", "jean-michel", 57,"ministre");
    Personne aure("DEVOS", "Aurelia", 42, "magistrate"); 


//affichage des info avant utilisations des objets 
cout << "information des personnages avant l'utilisation des objets" << endl ;
sarko.afficher();
carlita.afficher();
manu.afficher();
bibi.afficher();
flanby.afficher();
sego.afficher();
jeanmimi.afficher();
aure.afficher();


//action sur les objets 
carlita.marier("SARKOZY"); // Carla BRUNI se marie avec Nicolas SARKOZY
bibi.marier("MACRON"); // Brigitte se marie avec Emmanuel MACRON
manu.demenager("Palais de l'Elysée, 75008 PARIS"); // Emmanuel MACRON déménage à l'Elysée 
bibi.demenager("Palais de l'Elysée, 75008 PARIS"); // Brigitte MACRON déménage à l'élysée 
sarko.anniversaire(); // Nicolas SARKOZY a 1 an de plus
sarko.changer_travail ("Hommes d'Affaires"); // Nicolas SARKOZY a toujours aimé l'argent ! 
carlita.changer_travail ("Chanteuse"); // Faut croire que Carla BRUNI sait chanter ! 
manu.changer_travail ("Président de la République"); // Emmanuel MACRON devient Président 
bibi.changer_travail ("Première Dame"); // Brigitte MACRON devient la première Dame de France 
sego.changer_travail ("retraite"); 
flanby.changer_travail ("retraite"); 
aure.marier("BLANQUER"); 
sego.anniversaire();
jeanmimi.anniversaire();
flanby.separer("HOLLANDE");
aure.separer("DEVOS");

//affichage des info après utilisations des objets 
cout << "information des personnages apres l'utilisation des objets" << endl ;
sarko.afficher();
carlita.afficher();
manu.afficher();
bibi.afficher();
flanby.afficher();
sego.afficher();
jeanmimi.afficher();
aure.afficher();

return 0;
}