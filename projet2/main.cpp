#include <iostream>
#include <vector>
#include "Livre.h"
#include "Roman.h"
#include "BD.h"
#include "Membre.h"
#include "GestionEmprunts.h"

int main() {
    std::vector<Livre*> bibliotheque;
    std::vector<Membre> membres;
    std::vector<Roman*> romans;
    std::vector<BD*> bds;
    GestionEmprunts gestionEmprunts(bibliotheque, romans, bds, membres);

    while (true) {
        std::cout << "Bienvenue dans ce gestionnaire de bibliothéque. " << std::endl;
        std::cout << "Appuyer sur 1 / 2 / 3 / 4 / 5 / 6 / 7 en fonction de ce que vous voulez faire." << std::endl; 
        std::cout << "1. Ajouter un livre" << std::endl;
        std::cout << "2. Ajouter un membre" << std::endl;
        std::cout << "3. Emprunter un livre" << std::endl;
        std::cout << "4. Retourner un livre" << std::endl;
        std::cout << "5. Afficher la bibliothèque" << std::endl;
        std::cout << "6. Afficher les emprunts" << std::endl;
        std::cout << "7. Quitter" << std::endl;
        std::cout << std::endl;

        int choix;
        std::cin >> choix;

if (choix == 1) {
    std::cout << "Choisissez le type de livre en appuyant sur 1 / 2 / 3 : " << std::endl;
    std::cout << "1. Livre" << std::endl;
    std::cout << "2. Roman" << std::endl;
    std::cout << "3. BD" << std::endl;

    int typeLivre;
    std::cin >> typeLivre;

    std::string titre, auteur, isbn;
    std::cout << "Saisissez le titre : ";
    std::cin.ignore();
    std::getline(std::cin, titre);
    std::cout << "Saisissez l'auteur : ";
    std::getline(std::cin, auteur);
    std::cout << "Saisissez l'ISBN ( l'ISBN est le Numéro international normalisé du livre): ";
    std::cin >> isbn;

    if (typeLivre == 1) {
        // Créer un livre de base
        Livre* livre = new Livre(titre, auteur, isbn);
        bibliotheque.push_back(livre);
    } else if (typeLivre == 2) {
        std::string genre;
        std::cout << "Saisissez le genre du roman : ";
        std::cin.ignore(); 
        std::getline(std::cin, genre);

        // Créer un roman
        Roman* roman = new Roman(titre, auteur, isbn, genre);
        romans.push_back(roman);
    } else if (typeLivre == 3) {
        int tome;
        std::cout << "Saisissez le tome de la BD : ";
        std::cin >> tome;

        // Créer une BD
        BD* bd = new BD(titre, auteur, isbn, tome);
        bds.push_back(bd);       

    }
}
         else if (choix == 2) {
            std::string nom;
            std::cout << "Saisissez le nom du membre : ";
            std::cin.ignore();
            std::getline(std::cin, nom);
            Membre membre(nom);
            membres.push_back(membre);
        } else if (choix == 3) {
            std::cout << "Saisissez le nom du membre : ";
            std::string nomMembre;
            std::cin.ignore();
            std::getline(std::cin, nomMembre);

            std::cout << "Saisissez le titre du livre à emprunter : ";
            std::string titreLivre;
            std::getline(std::cin, titreLivre);

            gestionEmprunts.emprunterLivre(nomMembre, titreLivre);
        } else if (choix == 4) {
            std::cout << "Saisissez le nom du membre : ";
            std::string nomMembre;
            std::cin.ignore();
            std::getline(std::cin, nomMembre);

            std::cout << "Saisissez le titre du livre à retourner : ";
            std::string titreLivre;
            std::getline(std::cin, titreLivre);

            gestionEmprunts.retournerLivre(nomMembre, titreLivre);
        } else if (choix == 5) {
            // Afficher la bibliothèque (comme dans le code précédent)
            if (choix == 5) {
    std::cout << "Bibliothèque :" << std::endl;

    // Affichez d'abord les livres de type "Livre"
    std::cout << "Livres :" << std::endl;
    std::cout << "--------------------" << std::endl;
    for (Livre* livre : bibliotheque) {
        std::cout << "Type : Livre" << std::endl;
        std::cout << "Titre : " << livre->getTitre() << std::endl;
        std::cout << "Auteur : " << livre->getAuteur() << std::endl;
        std::cout << "ISBN : " << livre->getISBN() << std::endl;
        std::cout << "--------------------" << std::endl;
    }

    // Ensuite, affichez les livres de type "Roman"
    std::cout << "Romans :" << std::endl;
    std::cout << "--------------------" << std::endl;

    for (Roman* roman : romans) {
        std::cout << "Type : Roman" << std::endl;
        std::cout << "Titre : " << roman->getTitre() << std::endl;
        std::cout << "Auteur : " << roman->getAuteur() << std::endl;
        std::cout << "ISBN : " << roman->getISBN() << std::endl;
        std::cout << "Genre : " << roman->getGenre() << std::endl;
        std::cout << "--------------------" << std::endl;
    }

    // Enfin, affichez les livres de type "BD"
    std::cout << "BD :" << std::endl;
    std::cout << "--------------------" << std::endl;
    for (BD* bd : bds) {
        std::cout << "Type : BD" << std::endl;
        std::cout << "Titre : " << bd->getTitre() << std::endl;
        std::cout << "Auteur : " << bd->getAuteur() << std::endl;
        std::cout << "ISBN : " << bd->getISBN() << std::endl;
        std::cout << "Nombre de pages : " << bd->getNbPages() << std::endl;
        std::cout << "--------------------" << std::endl;
    }
}
        } else if (choix == 6) {
            gestionEmprunts.afficherEmprunts();
        } else if (choix == 7) {
            break;
        }
    }

    return 0;
}