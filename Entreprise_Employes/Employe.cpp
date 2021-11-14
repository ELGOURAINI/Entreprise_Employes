#include "Employe.h"
#include <iostream>
#include <string.h>
using namespace std;
using namespace entr;

int Employe::ind_mat = 1;
double Employe::valeur = 20;

entr::Employe::Employe( string nom, double ind)
{
	this->nom = nom;
	this->mat = ind_mat;
	this->ind_sal = ind;
	this->ind_mat++;
}

void entr::Employe::print() const
{
	cout << "-------information employe-------" << endl;
	cout << "la matricule       : " << this->mat << endl;
	cout << "le nom             : " << this->nom << endl;
	cout << "l'indice salariale : " << this->ind_sal << endl;
}


double entr::Employe::salaire()
{
	double S;
	S = valeur * this->ind_sal;
	return S;
}


