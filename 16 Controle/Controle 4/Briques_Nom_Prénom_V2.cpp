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
	const int max_y{ 1024 };
	afficher(brique1); //affiche contenue de brique 1
	afficher(brique2); //affiche contenue de brique 2
	while (true) {
		if (max_y >= brique1.y + brique1.hauteur) { // vérifie que brique 2 atteint le bas
			brique1.y = deplacer(brique1.y, brique1.descente); // deplace y par rapport a leur valeur de descente
			if (max_y >= brique1.y + brique1.hauteur) {
				afficher(brique1); //affiche contenue de brique 1
			}
			else {
				brique1.y = max_y - brique1.hauteur;
			}
		}
		if (max_y >= brique2.y + brique2.hauteur) { // vérifie si brique 2 atteint le bas
			deplacer(brique2); // deplace y par rapport a leur valeur de descente
			if (max_y >= brique2.y + brique2.hauteur) {
				afficher(brique2); //affiche contenue de brique 2
			}
			else {
				brique2.y = max_y - brique2.hauteur;
			}
		}
		if ((max_y - brique1.hauteur <= brique1.y) && (max_y - brique2.hauteur <= brique2.y)) { // vérifie quand les deux brique ont atteint le bas
			break;
		}
	}
	cout << "C'est fini !" << endl;
	afficher(brique1); //affiche contenue de brique 1
	afficher(brique2); //affiche contenue de brique 2
	cout << "Et comme les briques ont une hauteur de "<< brique1.hauteur<< ", elles sont pile en bas!" << endl;

	return 0; // fin de programme
}

// déclaration des fonction
void afficher(const brique& affi) {
	cout << "Brique numero " << affi.numero << " en x=" << affi.x << "\tet y = " << affi.y << endl; // affiche les statistiques d'une brique
}

void deplacer(brique& var) { // deplace la brique
	var.y += var.descente;
}

int deplacer(int y, int descente) { // deplace la brique
	return(y + descente);
}