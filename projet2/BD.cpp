#include "BD.h"

BD::BD(const std::string& titre, const std::string& auteur, const std::string& isbn, int tome)
    : Livre(titre, auteur, isbn), tome(tome) {
    // Initialisation du constructeur
}

std::string BD::getType() const {
    return "BD";
}

int BD::getNbPages() const {
    return tome;
}