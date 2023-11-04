#pragma once
#include <vector>
#include "Livre.h"
#include "Membre.h"

class GestionEmprunts {
public:
    GestionEmprunts(std::vector<Livre*>& bibliotheque, std::vector<Roman*>& romans, std::vector<BD*>& bds, std::vector<Membre>& membres);
    void emprunterLivre(const std::string& nomMembre, const std::string& titreLivre);
    void retournerLivre(const std::string& nomMembre, const std::string& titreLivre); 
    void afficherEmprunts() const;

protected:
    std::vector<Livre*>& bibliotheque;
    std::vector<Membre>& membres;
    std::vector<Roman*>& romans;
    std::vector<BD*>& bds;

    std::vector<std::pair<std::string, std::string>> emprunts;
};
#include "GestionEmprunts.cpp"