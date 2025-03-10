#include "Formateur.h"
#include <iostream>
#include <string>
using namespace std;

Formateur::Formateur(int c,string Nom,string Prenom, int nbLa) : cinn(c),nom(Nom),prenom(Prenom), nbl(nbLa) 
{
    lang=new string[nbl];
    cout<<" Donner les Langues des formations "<<endl;
    for(int i=0;i<nbl;i++)
    {
        cin>>lang[i];
    }
}
Formateur::Formateur(const Formateur& autre) : cinn(autre.cinn),nom(autre.nom),prenom(autre.prenom), nbl(autre.nbl) 
{
    lang=new string[nbl];   
    for(int i=0;i<nbl;i++)
    {
        lang[i]=autre.lang[i];
    }
}
void Formateur::afficher()
{
    cout << "Cin: " <<cinn<< ", Nom: " << nom << ", Prenom: " <<prenom  << ", nb Langues : " <<nbl<<endl;
    for(int i=0;i<nbl;i++)
    {
        cout<<lang[i]<<" ";
    }
    cout<<endl;
}
Formateur::~Formateur()
{
    delete []lang;
}
