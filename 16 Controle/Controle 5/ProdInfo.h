#pragma once
#include <iostream>
#include <string>
using namespace std;
class ProdInfo
{
protected:
	string _marque;
	float _prixht;
	static int _nb_produit;
public:
	ProdInfo();
	ProdInfo(string marque, float prixht);
	~ProdInfo();

	void affiche();

	string get_marque();
	float get_prixht();
	int get_nb_produit();
	void set_marque(string marque);
	void set_prixht(float prixht);
	void set_nb_produit(int nb_produit);
};

