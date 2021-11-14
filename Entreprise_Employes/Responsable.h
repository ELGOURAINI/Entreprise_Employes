#pragma once
#include "Employe.h"
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
namespace entr
{
	class Responsable :public Employe
	{
    private:
        vector<Responsable>* inf_H;
    public:
        Responsable(string nom, double indice_sal);
        void ajouter_inf(Responsable&);
        void print_inf()const;
        ~Responsable();
	};
}


