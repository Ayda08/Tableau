#pragma once
#include "Tableau.h"
class TableauBorne :public Tableau
{
private:
	float BorneGauche;
	float BorneDroite;
public:
	TableauBorne(float, float, int);
	double operator[](int i) const;
	void afficher()const;
};

