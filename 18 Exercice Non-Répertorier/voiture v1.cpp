#include <iostream>
#include <string>
using namespace std;

struct marque {
	string nom;
	double capital;
	int nbModele;
	string modeleLePlusVendu;
};

struct voiture
{
	marque marqueDeLaVoiture;
	string modele;
	double nbKm;
	int annee;
	string couleur;
};

void affichageDetail(const voiture&);
void estLeModeleLePlusVendu(const voiture& );
void leVehiculeRouleBcp(const voiture&);
void prixDuCarburantRouleBeaucoup();

int main()
{
	setlocale(LC_CTYPE, "fra");

	marque renaud{ "Renaud", 587000, 38,"Clio" };
	marque peugeot{ "Peugeot", 654000,42,"206" };

	voiture renaudClio{
		renaud,
		"Clio",
		127563,
		2013,
		"rouge"
	};
	voiture peugeot308{
		peugeot,
		"308",
		57236,
		2020,
		"bleue"
	};
	cout << "affichage des détails " << endl;
	affichageDetail(peugeot308);
	affichageDetail(renaudClio);
	cout << "Le modèle est-il le plus vendu ?" << endl;
	estLeModeleLePlusVendu(peugeot308);
	estLeModeleLePlusVendu(renaudClio);
	cout << "le véhicule roule-t-il beaucoup ? " << endl;
	leVehiculeRouleBcp(peugeot308);
	leVehiculeRouleBcp(renaudClio);

	prixDuCarburantRouleBeaucoup();
}

void affichageDetail(const voiture& voit) {
	cout << "le modele de la voiture est " << voit.modele << " de la marque " << voit.marqueDeLaVoiture.nom << endl;
	cout << "le nombre de kilomètre de la voiture est " << voit.nbKm<< " depuis " << voit.annee << endl;
	cout << "la voiture est " << voit.couleur << endl;
	cout << endl;

}

void estLeModeleLePlusVendu(const voiture& voit) {
	cout << "La voiture " << voit.modele;
	if (voit.marqueDeLaVoiture.modeleLePlusVendu == voit.modele) {
		cout << " est les modele le plus vendu de la marque " << voit.marqueDeLaVoiture.nom << endl; 
	}
	else {
		cout << " n'est pas le modele le plus vendu de la marque " << voit.marqueDeLaVoiture.nom << endl;
		cout << "le modèle le plus vendu de la marque " << voit.marqueDeLaVoiture.nom << " est " << voit.marqueDeLaVoiture.modeleLePlusVendu << endl;
	}
	cout << endl;
}

void leVehiculeRouleBcp(const voiture&  voit) {
	cout << "La voiture " << voit.modele;
	if (voit.nbKm / (int(2021) - int(voit.annee)) > 30000) {
		cout << " roule beaucoup ";
	}
	else {
		cout << " ne roule pas beaucoup ";
	}
	cout << endl;
}

void prixDuCarburantRouleBeaucoup() {
	double prixDuCarburant = 1.45; // par L
	double consomation = 5; //  L/100 km
	
	double rouleBeaucoup = 30000;

	cout << "le cout est de " << ((prixDuCarburant * consomation) * rouleBeaucoup) / 100;

}