#include "Roman.h"

Roman::Roman(const std::string& titre, const std::string& auteur, const std::string& isbn, const std::string& genre)
    : Livre(titre, auteur, isbn), genre(genre) {
    // Initialisation du constructeur
}

std::string Roman::getType() const {
    return "Roman";
}

std::string Roman::getGenre() const {
    return genre;
}