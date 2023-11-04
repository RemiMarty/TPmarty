#include "Livre.h"

Livre::Livre(const std::string& titre, const std::string& auteur, const std::string& isbn)
    : titre(titre), auteur(auteur), isbn(isbn) {
    // Initialisation du constructeur
}

std::string Livre::getType() const {
    return "Livre";
}

std::string Livre::getTitre() const {
    return titre;
}

std::string Livre::getAuteur() const {
    return auteur;
}

std::string Livre::getISBN() const {
    return isbn;
}
