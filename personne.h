
#ifndef Personne_h
#define Personne_h
#include <string>
class Personne
{
// Prototypes
public:
void demenager(std::string nouvelle_adresse); void anniversaire();
void changer_travail (std::string nouveau_travail); void marier(std::string nouveau_nom);
// Attributs
private:
std::string m_nom; std::string m_prenom; unsigned short m_age; std::string m_profession; std::string m_adresse;
};
#endif