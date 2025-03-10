#pragma once
#include"Formateur.h"
using namespace std;

class FormateurSpec : public Formateur {
private:
    string specialite;

public:
    FormateurSpec(Formateur,string="");
    FormateurSpec(const FormateurSpec& );
    //void setSpecialite(string Specialite){specialite = Specialite;}
    //string getSpecialite(){ return specialite; }
    void afficher();
    ~FormateurSpec();
};
