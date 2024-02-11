#include "Imprimantes.h"

Imprimantes::Imprimantes():_reseau{false},_definition{0}
{
	_nb_imprimante += 1;
	_nb_produit += 1;
}

Imprimantes::Imprimantes(string marque, float prixht, bool reseau, int definition): _reseau{ reseau }, _definition{ definition }
{
	_marque = marque;
	_prixht = prixht;
	_nb_imprimante += 1;
	_nb_produit += 1;
}

Imprimantes::~Imprimantes()
{
}

void Imprimantes::affiche()
{
	cout << "Marque Ordinateur : " << _marque << endl;
	cout << "Prix Hors-Taxe : " << _prixht << " euros" << endl;
	cout << "En réseau ou pas : " << _reseau << endl;
	cout << "Définition de l'impression : " << _definition << " Pixel" << endl;
	cout << "Nombre total d'imprimante en stock : " << _nb_imprimante << endl << endl;
}

bool Imprimantes::get_reseau()
{
	return _reseau;
}

int Imprimantes::get_definition()
{
	return _definition;
}

void Imprimantes::set_reseau(bool reseau)
{
	_reseau = reseau;
}

void Imprimantes::set_definition(int definition)
{
	_definition = definition;
}
