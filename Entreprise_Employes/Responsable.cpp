#include "Responsable.h"
#include <iostream>
#include <string.h>
using namespace std;
using namespace entr;

entr::Responsable::Responsable(string nom,double ind) :Employe(nom,ind)
{
	this->inf_H = new vector<Responsable>();
}

void entr::Responsable::ajouter_inf(Responsable& emp_inf)
{
	this->inf_H->push_back(emp_inf);
}

void entr::Responsable::print_inf() const
{
	
	int taille = this->inf_H->size();
	if (taille > 0) {
		this->print();
		cout << "est responsable de: " << endl << "\t";
		for (int i = 0; i < taille; i++) {

			(*this->inf_H)[i].print_inf();

		}
		return;
	}
	this->print();
}

entr::Responsable::~Responsable()
{
	this->inf_H->~vector();
}
