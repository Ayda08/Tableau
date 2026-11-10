#pragma once
#include<iostream>
using namespace std;
class Tableau
{
protected:
	double* Tab;
	int taille;
private:
	double& operator[](int i);
public:
	Tableau(int t=0);
	Tableau(const Tableau& T);
	Tableau operator=(const Tableau& T);
	void afficher()const;
	~Tableau();
};

