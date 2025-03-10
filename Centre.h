#pragma once
#include<iostream>
#include"Formateur.h"
#include "FormateurSpec.h"
#include <vector>
using namespace std;

class CentreFormation 
{
vector<Formateur*> tab;
public:
    CentreFormation();
    CentreFormation(const CentreFormation&);
    ~CentreFormation();
    void afficher();
    void ajouter(Formateur*,int=0);


};

