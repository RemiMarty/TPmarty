#pragma once // evite d'écrire #indef et #define pour que le code soit plus lisible 
#include "Livre.h"

class Roman : public Livre {
public:
    Roman(const std::string& titre, const std::string& auteur, const std::string& isbn, const std::string& genre);
    std::string getType() const override;
    std::string getGenre() const;
 
private:
    std::string genre;
};
#include "Roman.cpp"