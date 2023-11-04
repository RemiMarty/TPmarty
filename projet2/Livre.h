#pragma once
#include <string>

class Livre {
public:
    Livre(const std::string& titre, const std::string& auteur, const std::string& isbn);
    virtual std::string getType() const;
    std::string getTitre() const;
    std::string getAuteur() const;
    std::string getISBN() const;

protected:
    std::string titre;
    std::string auteur;
    std::string isbn;
};
#include "Livre.cpp"