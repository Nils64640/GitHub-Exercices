#include "ProdInfo.h"

ProdInfo::ProdInfo():_marque{"XXX"},_prixht{0}
{
	_nb_produit += 1;
}

ProdInfo::ProdInfo(string marque, float prixht): _marque{ marque }, _prixht{ prixht }
{
	_nb_produit += 1;
}

ProdInfo::~ProdInfo()
{
}

void ProdInfo::affiche()
{
	cout << "Marque : " << _marque << endl;
	cout << "Prix Hors-Taxe : " << _prixht << " euros" << endl;
	cout << "Nombre total de produit en stock : " << _nb_produit << endl << endl;
}

string ProdInfo::get_marque()
{
	return _marque;
}

float ProdInfo::get_prixht()
{
	return _prixht;
}

int ProdInfo::get_nb_produit()
{
	return _nb_produit;
}

void ProdInfo::set_marque(string marque)
{
	_marque = marque;
}

void ProdInfo::set_prixht(float prixht)
{
	_prixht = prixht;
}
