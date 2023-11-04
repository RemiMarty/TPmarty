#pragma once
#include "Livre.h"

class BD : public Livre {
public:
    BD(const std::string& titre, const std::string& auteur, const std::string& isbn, int tome);
    std::string getType() const override;
    int getNbPages() const;

private:
    int tome;
};
#include "BD.cpp"