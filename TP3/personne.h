
#ifndef personne_h
#define personne_h

#include <string>
class Personne
{

// Prototypes
public:
Personne();
Personne(std::string nom, std::string prenom, unsigned short age, std::string profession);

//constructeur pour initiliser tous les attributs 
void demenager(std::string nouvelle_adresse);
void anniversaire();
void changer_travail (std::string nouveau_travail); 
void marier(std::string nouveau_nom);
void separer(std::string nouveau_nom);
void afficher() const;

// Attributs
private:
std::string m_nom; 
std::string m_prenom; 
unsigned short m_age; 
std::string m_profession; 
std::string m_adresse;
};
#include "personne.cpp"
#endif