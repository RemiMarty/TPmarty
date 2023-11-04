#pragma once

#include <string>

class Membre {
public:
    Membre(const std::string& nom);
    std::string getNom() const;

private:
    std::string nom;
};
#include "Membre.cpp"