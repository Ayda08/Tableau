#include "Tableau.h"
#include<iostream>
using namespace std;

Tableau::Tableau(int t)
{
	this->taille = t;
	this->Tab = new double[taille];
	for (int i = 0; i < taille;i++) {
		Tab[i] = 0;
	}
}

Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	this->Tab = new double[taille];
	for (int i = 0; i < taille;i++) {
		Tab[i] = T.Tab[i];

	}
}
Tableau Tableau::operator=(const Tableau& T)
{
	if (this != &T) {
		delete[]Tab;
	}
	this->taille = T.taille;
	this->Tab = new double[taille];
	for (int i = 0; i < taille;i++) {
		Tab[i] = T.Tab[i];

	}

	return *this;
}

void Tableau::afficher() const
{
	cout << "Tab=";
	for (int i = 0; i < taille;i++) {
		cout << this->Tab[i] << " ";
	}
}

double& Tableau::operator[](int i)
{
	if (i >= 0 && i < taille) {
		return this->Tab[i];
	}
	else {
		exit(-1);
	}
}



Tableau::~Tableau()
{
	delete[]Tab;
	Tab = nullptr;

}
