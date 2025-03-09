#include "Centre.h"
#include <typeinfo>
CentreFormation::CentreFormation(){}
CentreFormation::CentreFormation(const CentreFormation &cf)
{
    Formateur* q;
    for(int i=0;i<cf.tab.size();i++)
    {
        if (typeid (*cf.tab[i]) == typeid (Formateur))
        {
            q=new Formateur(*cf.tab[i]);
        }
        else if (typeid (*cf.tab[i]) == typeid (Formateur))
        {
            q=new FormateurSpec(static_cast<const FormateurSpec&>(*cf.tab[i]));
        }
        tab.push_back(q);
    }
}
void CentreFormation::ajouter(Formateur* formateur, int indice) {
    int choix;
    
    cout << "Tapez 1 pour ajouter un Formateur  ou 2 pour un Formateur Specilise : ";
    cin >> choix;

    if (choix == 1) {
        tab.insert(tab.begin() + indice, new Formateur(*formateur)); 
    } 
    else if (choix == 2) {
        tab.insert(tab.begin() + indice, new FormateurSpec(*static_cast<FormateurSpec*>(formateur)));
    } 
    else {
        std::cout << "Choix invalide, aucun formateur ajouté." << std::endl;
    }
}
void CentreFormation::afficher()
{
    for (int i = 0; i < tab.size(); i++) {
        tab[i]->afficher(); 
        cout << std::endl;
}
}
CentreFormation::~CentreFormation() 
{
    for (int i=0;i<tab.size();i++) {
        delete tab[i]; 
    }
    tab.clear();
}


