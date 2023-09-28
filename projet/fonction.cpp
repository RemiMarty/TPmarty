/*nom : quiz géographie 
fait par: Marty Rémi            le 27/09/2023             version 1 
*/
#include "fonction.h"
#include <iostream>
#include <string>
using namespace std;

void question1(string& reponse1){
    cout << "voici la premiere question" << endl;
    cout << "quelle est la capitale de la france" << endl;
    getline(cin,reponse1);
    cout << "pour répondre a la question suivante appuyez sur une touche " << endl;
    getchar();
}