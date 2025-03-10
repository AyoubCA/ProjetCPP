#include "FormateurSpec.h"
#include <iostream>
using namespace std;
FormateurSpec::FormateurSpec(Formateur f,string sp):Formateur(f),specialite(sp) {}
FormateurSpec::FormateurSpec(const FormateurSpec& autre):Formateur(autre), specialite(autre.specialite) {}
FormateurSpec::~FormateurSpec()
{
    delete []lang;
}
void FormateurSpec::afficher()
{
    Formateur::afficher();
    cout<<"La specialite est : "<<specialite<<endl;
}
