/*nom : quiz géographie 
fait par: Marty Rémi            le 27/09/2023             version 1 
*/
#include"fonction.h"
#include<fstream>
#include<iostream>
#include<string>
#include<array>
using namespace std;

int main(){
    array<string, 10> tableau ;

    string const nomfichier("C:/Users/moi/Desktop/TPmarty/TPmarty/projet/historique.txt");
    ofstream monFlux(nomfichier.c_str());
    if (monFlux)
    {
        question1(tableau[0]);
        for(size_t i(0); i < 10; i++) {
            monFlux << "la reponse de l'utilisateur est :" << tableau[i]<< endl;
        }
    }


return 0;
}

