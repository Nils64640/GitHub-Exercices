#include <iostream>
#include <string>
using namespace std;

struct brique { // initialisation et déclaration de la structure brique
	unsigned int numero{ 0 };
	unsigned int x{ 0 };
	unsigned int y{ 0 };
	string couleur;
	unsigned int largeur{ 0 };
	unsigned int hauteur{ 0 };
	unsigned int descente{ 0 };
};

// initialisation des fonctions
void afficher(const brique&);
void deplacer(brique& var);
int deplacer(int y, int descente);

int main() {
	setlocale(LC_CTYPE, "fra"); // gestion des accents
	brique brique1{ 1, 0, 0, "blanc", 1, 24, 44 };
	brique brique2{ 2, 20, 0, "blanc", 1, 24, 55};

	afficher(brique1); //affiche contenue de brique 1
	afficher(brique2); //affiche contenue de brique 2
	brique1.y=deplacer(brique1.y, brique1.descente); // deplace y par rapport a leur valeur de descente
	deplacer(brique2); // deplace y par rapport a leur valeur de descente
	afficher(brique1); //affiche contenue de brique 1
	afficher(brique2); //affiche contenue de brique 2

	return 0; // fin de programme
}

// déclaration des fonction
void afficher(const brique& affi) {
	cout << "Brique numero " << affi.numero << " en x=" << affi.x << "\tet y = " << affi.y << endl;
}

void deplacer(brique& var) {
	var.y += var.descente;
}

int deplacer(int y, int descente) {
	return(y + descente);
}