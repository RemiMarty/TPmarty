#ifndef arme_h
#define arme_h

#include <iostream>
#include <string>
class Arme
{
private:
    std::string m_nomarme;// Nom de l'arme de l'héros
    int m_puissancearme;// Puissance de l'arme de l'héros

public:
    Arme(); // Constructeur par défaut
    Arme (std::string nomarme, int puissancearme); // Constructeur permettant d'initialiser les attributs 
    void changerarme (std::string nomarme, int puissancearme);
    void afficher() const;
    int getpuissance() const;
};
#include "arme.cpp"
#endif