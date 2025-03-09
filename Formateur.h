#pragma once
#include <iostream>
#include <string>
using namespace std;

class Formateur {
protected:
    int cinn;
    string nom;
    string prenom;
    int nbl;
    string *lang;

public:
    Formateur(int=101010,string="",string="", int=3);
    Formateur(const Formateur&);

    //void setNom(string Nom){nom = Nom;}
    //void setnbl(int nbLa){nbl = nbLa;}

    //string getNom(){ return nom; }
    //int getnbl(){ return nbl; }

    virtual ~Formateur();
    virtual void afficher();
};
