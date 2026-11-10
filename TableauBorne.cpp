#include "TableauBorne.h"
using namespace std;

TableauBorne::TableauBorne(float BorneGauche, float BorneDroite, int taille):Tableau(taille)
{
	this->BorneDroite = BorneDroite;
	this->BorneGauche = BorneGauche;
	this->taille = taille;
}

double TableauBorne::operator[](int i) const
{
	if (i >= 0 && i < taille) {
		return this->Tab[i];
	}
	else {
		exit(-1);
	}
}

void TableauBorne::afficher() const
{
	cout << "TableauBorne =";
	Tableau::afficher();
	cout << " BorneGauche=" << this->BorneGauche << endl;
	cout << " BorneDroite=" << this->BorneDroite << endl;
}
