#include <iostream>
#include"Formateur.cpp"
#include"FormateurSpec.cpp"
#include "Centre.cpp"
using namespace std;

int main()
{
    Formateur* q;
    Formateur f(135179617,"Gasmi","Nader",2);
    FormateurSpec g(f,"Science");
    CentreFormation c;
    c.ajouter(q);
    return 0;
}
