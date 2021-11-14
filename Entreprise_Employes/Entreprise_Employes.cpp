// Entreprise_Employes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Employe.h"
#include <iostream>
#include <string.h>
using namespace std;
using namespace entr;

int main()
{
    Employe* E=new Employe("oumaima", 120);
    E->print();
    cout << endl << "le salaire de l'employe : " << E->salaire() << " DH" << endl <<endl;

    Employe* E1 = new Employe("chaimae", 180.50);
    E1->print();
    cout << endl << "le salaire de l'employe : " << E1->salaire() << " DH" << endl <<endl;

    delete E, E1;
}
