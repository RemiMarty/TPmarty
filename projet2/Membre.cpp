#include "Membre.h"

Membre::Membre(const std::string& n) : nom(n) {
    // Initialisation du constructeur
}

std::string Membre::getNom() const {
    return nom;
}
