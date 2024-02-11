#include"ProdInfo.h"
#include"Ordinateurs.h"
#include"Imprimantes.h"
#include <clocale>              // pour gestion des caractères accentués
// initialisation des static
int ProdInfo::_nb_produit = 0; 
int Ordinateurs::_nb_ordinateur = 0;
int Imprimantes::_nb_imprimante = 0;
int main() {
 	setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués

	Ordinateurs ordi1; // constructeur par défaut
	ordi1.set_marque("DELL"); 
	ordi1.set_prixht(800);
	ordi1.set_disque_dur(500);
	ordi1.affiche();

	Ordinateurs ordi2("Toshiba", 650, 400); // constructeur avec parametre
	ordi2.affiche();

	Imprimantes impr1; // constructeur par défaut
	impr1.set_marque("Photo");
	impr1.set_prixht(110);
	impr1.set_reseau(false);
	impr1.set_definition(420);
	impr1.affiche();

	Imprimantes impr2("Intel", 250, true, 1920); // constructeur avec parametre
	impr2.affiche();

	cout << "La valeur totale des ordinateurs HT est de : " << ordi1.get_prixht() + ordi2.get_prixht() << " euros" << endl;
	cout << "La valeur totale des ordinateurs HT est de : " << (ordi1.get_prixht() + ordi2.get_prixht()) * 1.2 << " euros" << endl << endl; // ajout de la tva dans le totale

	cout << "La valeur totale des ordinateurs HT est de : " << impr1.get_prixht()+ impr2.get_prixht() << " euros" << endl;
	cout << "La valeur totale des ordinateurs HT est de : " << (impr1.get_prixht() + impr2.get_prixht()) * 1.2 << " euros" << endl << endl; // ajout de la tva dans le totale

	cout << "Remise du fournisseur, -65 euros sur les ordinateurs :" << endl;
	ordi1.set_prixht(ordi1.get_prixht()-65);
	ordi2.set_prixht(ordi2.get_prixht() - 65);

	ordi1.affiche();
	ordi2.affiche();

	system("pause");
	return 0; // Fin de programme
}