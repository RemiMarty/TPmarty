/*nom : quiz geographie 
fait par: Marty Remi            le 27/09/2023             version 1.4
*/
#include "fonction.h"
#include <iostream>
#include <string>
using namespace std;

int vrai = 0;
int faux = 0; 

void question1(string& reponse1){
    cout << "voici la premiere question" << endl;
    cout << "Quelle est la capitale de la France ?" << endl;
    getline(cin,reponse1);
    string correction("Paris"),correction2("paris");
    if(reponse1 == correction )
    {
        cout << "bravo bonne reponse !" << endl;
    vrai++;
    cout << vrai << endl;
    }
    else if(reponse1 == correction2)
    {
         cout << "bravo bonne reponse !" << endl;
    vrai++;
    }
    else
    {
        cout << "mauvaise reponse ! la bonne reponse etait Paris " <<endl;
    faux++;
    }
    cout << "pour repondre a la question suivante appuyez sur une touche " << endl;
    getchar();
}
void question2(string& reponse2){
    cout << "voici la deuxieme question" << endl;
    cout << "Quel est le plus grand pays en superficie ?" << endl;
    getline(cin,reponse2);
    string correction("Russie"),correction2("russie");
    if(reponse2 == correction )
    {
        cout << "bravo bonne reponse !" << endl;
    vrai++;
        cout << vrai << endl;

    }
    else if(reponse2 == correction2)
    {
         cout << "bravo bonne reponse !" << endl;
    vrai++;
    }
    else
    {
        cout << "mauvaise reponse ! la bonne reponse etait Russie " <<endl;
    faux++;
    }
    cout << "pour repondre a la question suivante appuyez sur une touche " << endl;
    getchar();
}
void question3(string& reponse3){
    cout << "voici la troisieme question" << endl;
    cout << "Quel est le pays avec le plus d'habitant ?" << endl;
    getline(cin,reponse3);
    string correction("Chine"),correction2("chine");
    if(reponse3 == correction )
    {
        cout << "bravo bonne reponse !" << endl;
    vrai++;        
    }
    else if(reponse3 == correction2)
    {
         cout << "bravo bonne reponse !" << endl;
    vrai++;         
    }
    else
    {
        cout << "mauvaise reponse ! la bonne reponse etait Chine " <<endl;
    faux++;
    }
    cout << "pour repondre a la question suivante appuyez sur une touche " << endl;
    getchar();
}
void question4(string& reponse4){
    cout << "voici la quatrieme question" << endl;
    cout << "Quelle est  la capitale de l'Angleterre ?" << endl;
    getline(cin,reponse4);
    string correction("Londres"),correction2("londres");
    if(reponse4 == correction )
    {
        cout << "bravo bonne reponse !" << endl;
     vrai++;       
    }
    else if(reponse4 == correction2)
    {
         cout << "bravo bonne reponse !" << endl;
     vrai++;        
    }
    else
    {
        cout << "mauvaise reponse ! la bonne reponse etait Londres " <<endl;
    faux++;
    }
    cout << "Pour repondre a la question suivante appuyez sur une touche " << endl;
    getchar();
}
void question5(string& reponse5){
    cout << "voici la cinquieme question" << endl;
    cout << "Quelle est la capitale de l'Allemagne ?" << endl;
    getline(cin,reponse5);
    string correction("Berlin"),correction2("berlin");
    if(reponse5 == correction )
    {
        cout << "bravo bonne reponse !" << endl;
            vrai++;
    }
    else if(reponse5 == correction2)
    {
         cout << "bravo bonne reponse !" << endl;
             vrai++;
    }
    else
    {
        cout << "mauvaise reponse ! la bonne reponse etait Berlin " <<endl;
    faux++;
    }
    cout << "pour repondre a la question suivante appuyez sur une touche " << endl;
    getchar();
}
void question6(string& reponse6){
    cout << "voici la sixieme question" << endl;
    cout << "Quel est le nom du point le plus profond des oceans ?" << endl;
    getline(cin,reponse6);
    string correction("Fosse des mariannes"),correction2("fosse des mariannes"),correction3("Fosse Des Mariannes"),correction4("fosse Des mariannes"), correction5("Fosse Des mariannes"), correction6("fosse Des Mariannes");
    if(reponse6 == correction )
    {
        cout << "bravo bonne reponse !" << endl;
            vrai++;
    }
    else if(reponse6 == correction2)
    {
         cout << "bravo bonne reponse !" << endl;
             vrai++;
    }
    else if(reponse6 == correction3)
    {
         cout << "bravo bonne reponse !" << endl;
             vrai++;
    }
    else if(reponse6 == correction4)
    {
         cout << "bravo bonne reponse !" << endl;
             vrai++;
    }
    else if(reponse6 == correction5)
    {
         cout << "bravo bonne reponse !" << endl;
             vrai++;
    }
    else if(reponse6 == correction6)
    {
         cout << "bravo bonne reponse !" << endl;
             vrai++;
    }
    else
    {
        cout << "mauvaise reponse ! la bonne reponse etait  Fosse des mariannes" <<endl;
    faux++;
    }
    cout << "Pour repondre a la question suivante appuyez sur une touche " << endl;
    getchar();
}
void question7(string& reponse7){
    cout << "voici la septieme question" << endl;
    cout << "Quel est le fleuve le plus long du monde ?" << endl;
    getline(cin,reponse7);
    string correction("Amazone"),correction2("amazone");
    if(reponse7 == correction )
    {
        cout << "bravo bonne reponse !" << endl;
            vrai++;
    }
    else if(reponse7 == correction2)
    {
         cout << "bravo bonne reponse !" << endl;
            vrai++;
    }
    else
    {
        cout << "mauvaise reponse ! la bonne reponse etait Amazone " <<endl;
            faux++;
    }
    cout << "Pour repondre a la question suivante appuyez sur une touche " << endl;
    getchar();
}
void question8(string& reponse8){
    cout << "voici la huitieme question" << endl;
    cout << "La montagne la plus haute ?" << endl;
    getline(cin,reponse8);
    string correction("Everest"),correction2("everest");
    if(reponse8 == correction )
    {
        cout << "bravo bonne reponse !" << endl;
            vrai++;
    }
    else if(reponse8 == correction2)
    {
         cout << "bravo bonne reponse !" << endl;
            vrai++;
    }
    else
    {
        cout << "mauvaise reponse ! la bonne reponse etait Everest " <<endl;
             faux++;
    }
    cout << "Pour repondre a la question suivante appuyez sur une touche " << endl;
    getchar();
}
void question9(string& reponse9){
    cout << "voici la neuvieme question" << endl;
    cout << "L'Arctique est-il un continent ?" << endl;
    getline(cin,reponse9);
    string correction("Non"),correction2("non");
    if(reponse9 == correction )
    {
        cout << "bravo bonne reponse !" << endl;
            vrai++;
    }
    else if(reponse9 == correction2)
    {
         cout << "bravo bonne reponse !" << endl;
            vrai++;
    }
    else
    {
        cout << "mauvaise reponse ! la bonne reponse etait Non " <<endl;
             faux++;
    }
    cout << "pour repondre a la question suivante appuyez sur une touche " << endl;
    getchar();
}
void question10(string& reponse10){
    cout << "voici la derniere question" << endl;
    cout << "Combien de y-a t-il de pays dans l'Union Europeenne ?" << endl;
    getline(cin,reponse10);
    string correction("27"),correction2("vingt-sept");
    if(reponse10 == correction )
    {
        cout << "bravo bonne reponse !" << endl;
            vrai++;
    }
    else if(reponse10 == correction2)
    {
         cout << "bravo bonne reponse !" << endl;
            vrai++;
    }
    else
    {
        cout << "mauvaise reponse ! la bonne reponse etait 27 ou vingt-sept " <<endl;
            faux++;
    }
    cout << "pour finir le test appuyez sur une touche " << endl;
    getchar();
}
void note(int& vrai,int& faux){

if(vrai==10){
    cout << " bravo ! tu es un genie de la geographie"<< endl;
    cout << "tu as eu "<< vrai << " bonnes reponses, et"<< faux << " mauvaise reponse !" << endl;
}
else if ( vrai >=5){
    cout << "pas mal tu te debrouille bien en geographie"<< endl;
    cout << "tu as eu "<< vrai << " bonnes reponses, et"<< faux << " mauvaise reponse !" << endl;
}
else{
    cout << "tu pourrais mieux faire retourne reviser"<< endl; 
    cout << "tu as eu "<< vrai << " bonnes reponses, et"<< faux << " mauvaise reponse !" << endl;
}
}
