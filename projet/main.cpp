/*nom : quiz géographie 
fait par: Marty Rémi            le 27/09/2023             version 1.4
*/
//bibliothèque
#include"fonction.h"//lien avec le header
#include<fstream>
#include<iostream>
#include<string>
#include<array>
using namespace std;

int main(){
    array<string, 10> tableau ;
        // ouverture et connexion au fichier texte
    string const nomfichier("C:/Users/moi/Desktop/TPmarty/TPmarty/projet/historique.txt");
    ofstream monFlux(nomfichier.c_str());
    //ecriture dans le fichier texte
    if (monFlux)
    {
        question1(tableau[0]);
        question2(tableau[1]);
        question3(tableau[2]);
        question4(tableau[3]);
        question5(tableau[4]);
        question6(tableau[5]);
        question7(tableau[6]);
        question8(tableau[7]);
        question9(tableau[8]);
        question10(tableau[9]);

        for(size_t i(0); i < 10; i++) {
            monFlux << "la reponse de l'utilisateur est :" << tableau[i]<< endl;
        }
    }
    //système de note
        note(vrai,faux);

return 0;
}

