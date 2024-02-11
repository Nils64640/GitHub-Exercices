#include "Ordinateurs.h"

Ordinateurs::Ordinateurs():_disque_dur{0}
{
	_nb_ordinateur += 1;
	_nb_produit += 1;
}

Ordinateurs::Ordinateurs(string marque, float prixht, double disque_dur) : _disque_dur{ disque_dur }
{
	_marque = marque;
	_prixht = prixht;
	_nb_ordinateur += 1;
	_nb_produit += 1;
}

Ordinateurs::~Ordinateurs()
{
}

void Ordinateurs::affiche()
{
	cout << "Marque Ordinateur : " << _marque << endl;
	cout << "Prix Hors-Taxe : " << _prixht << " euros" << endl;
	cout << "Taille du disque dur : " << _disque_dur << " GB" << endl;
	cout << "Nombre total d'ordinateur en stock : " << _nb_ordinateur << endl << endl;
}

double Ordinateurs::get_disque_dur()
{
	return _disque_dur;
}

void Ordinateurs::set_disque_dur(double disque_dur)
{
	_disque_dur = disque_dur;
}
