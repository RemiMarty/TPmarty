#include "GestionEmprunts.h"
#include <iostream>

GestionEmprunts::GestionEmprunts(std::vector<Livre*>& bibliotheque, std::vector<Roman*>& romans,std::vector<BD*>& bds, std::vector<Membre>& mem  )
    : bibliotheque(bibliotheque), membres(mem),romans(romans),bds(bds) {
    // Initialisation du constructeur 
}

void GestionEmprunts::emprunterLivre(const std::string& nomMembre, const std::string& titreLivre) {
    // Vérifier si le membre et le livre existent
    bool membreExiste = false;
    bool livreExiste = false;

    for (const Membre& membre : membres) {
        if (membre.getNom() == nomMembre) {

            membreExiste = true;
            break;
        }
    }

    for (Livre* livre : bibliotheque) {
        if (livre->getTitre() == titreLivre) {
            livreExiste = true;
            break;
        }
    }

      for (Roman* roman : romans) {
        if (roman->getTitre() == titreLivre) {
            livreExiste = true;
            break;
        }
    }

    for (BD* bd : bds) {
        if (bd->getTitre() == titreLivre) {
            livreExiste = true;
            break;
        }
    }
    

    if (!membreExiste || !livreExiste) {
        std::cout << "Membre ou livre introuvable. Emprunt impossible." << std::endl;
        return;
    }

    // Vérifier si le livre est déjà emprunté
    for (const std::pair<std::string, std::string>& emprunt : emprunts) {
        if (emprunt.first == nomMembre) {
            std::cout << "Ce membre a déjà emprunté un livre. Emprunt impossible." << std::endl;
            return;
        }
        if (emprunt.second == titreLivre) {
            std::cout << "Ce livre est déjà emprunté. Emprunt impossible." << std::endl;
            return;
        }
    }

    // Effectuer l'emprunt
    emprunts.push_back(std::make_pair(nomMembre, titreLivre));
    std::cout << "Emprunt effectué avec succès." << std::endl;
}

void GestionEmprunts::retournerLivre(const std::string& nomMembre, const std::string& titreLivre) {
    // Vérifier si le membre et le livre existent
    bool membreExiste = false;
    bool livreExiste = false;

    for (const Membre& membre : membres) {
        if (membre.getNom() == nomMembre) {
            membreExiste = true;
            break;
        }
    }

    for (Livre* livre : bibliotheque) {
        if (livre->getTitre() == titreLivre) {
            livreExiste = true;
            break;
        }
    }
    for (Roman* roman : romans) {
        if (roman->getTitre() == titreLivre) {
            livreExiste = true;
            break;
        }
    }

    for (BD* bd : bds) {
        if (bd->getTitre() == titreLivre) {
            livreExiste = true;
            break;
        }
    }

    if (!membreExiste || !livreExiste) {
        std::cout << "Membre ou livre introuvable. Retour impossible." << std::endl;
        return;
    }

    // Vérifier si le livre est emprunté
    bool empruntTrouve = false;
    for (std::vector<std::pair<std::string, std::string>>::iterator it = emprunts.begin(); it != emprunts.end(); ++it) {
        if (it->first == nomMembre && it->second == titreLivre) {
            it = emprunts.erase(it);
            empruntTrouve = true;
            break;
        }
    }

    if (empruntTrouve) {
        std::cout << "Livre retourné avec succès." << std::endl;
    } else {
        std::cout << "Ce livre n'a pas été emprunté par ce membre. Retour impossible." << std::endl;
    }
}

void GestionEmprunts::afficherEmprunts() const {
    std::cout << "Emprunts en cours :" << std::endl;
    for (const std::pair<std::string, std::string>& emprunt : emprunts) {
        std::cout << "Membre : " << emprunt.first << ", Livre : " << emprunt.second << std::endl;
    }
}