#pragma once
#include <iostream>
#include <string.h>
using namespace std;
namespace entr {
	class Employe
	{
	private:
		int mat;
		string nom;
		double ind_sal;
		static int ind_mat;
		static double valeur;

	public:
		Employe( string, double);
		void print() const;
		double salaire();
	};
}


