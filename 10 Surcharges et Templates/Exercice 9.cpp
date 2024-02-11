/***************************************************************************************************
Exercice de révision Fonctions - Passage de paramètres par valeur/référence - Surcharges - Templates
----------------------------------------------------------------------------------------------------
A partir de la fonctions de base ci-dessous vous allez apporter plusieurs niveaux d'amélioration en
utilisant une fonction pour le calcul.
La définition de la fonction est après le main.

	V1:	avec une fonction qui retourne -1 si erreur (div par 0), 0 si OK, 
		et qui calcule l'hypothénuse et le cos phi (toutes les variables sont des doubles)
		Solution: --> passage par valeur pour adj et opp, par référence pour hyp et cosfi
	
	V2: la fonction peut fonctionner en 3 versions : celle de la V1, une qui calcule en plus le sin phi,
		une qui calcule en plus le sin phi et la tan phi (toutes les variables sont des doubles).
		Vous utiliserez les 3 versions dans le main.
		Solution: --> les surcharges
		
	V3: la fonction est celle de la V1, mais elle accepte n'importe quel type de données pour adj et opp.
		Vous testerez plusieurs appels dans le main.
		Solution: --> les templates

****************************************************************************************************/

//PYTHAGORE: calcul de l'hypothénuse d'un triangle
//////////////////////////////////////////////////
/*
#include <iostream>
#include <math.h>				
#include <clocale>              
int calcul(double adj,double opp, double& hyp, float& cosfi){
  hyp = sqrt(adj*adj + opp*opp);
  cosfi = adj / hyp;
  if (hyp != 0) return(hyp);
  return(-1);
}

int calcul(double adj,double opp, double& hyp, double& sinfi){
  hyp = sqrt(adj*adj + opp*opp);
  sinfi = opp / hyp;
  if (hyp != 0) return(hyp);
  return(-1);
}

int calcul(double adj,double opp, double& hyp, long double& tanfi){
  hyp = sqrt(adj*adj + opp*opp);
  tanfi = opp / adj;
  if (hyp != 0) return(hyp);
  return(-1);
}

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "fra");     
  float cosfi;
	double adj, opp, hyp, sinfi;
  long double tanfi;

	cout << "Tapez la valeur du coté adjacent: ";	cin >> adj;		cin.ignore();
	cout << "Tapez la valeur du coté opposé: ";		cin >> opp;		cin.ignore();

	if (calcul(adj,opp,hyp,cosfi) == -1) cout << "Erreur" << endl;
	else {
    cout << "L'hypothénuse vaut: " << hyp << endl;
	  cout << "Le cos phi vaut: " << cosfi << endl;
  }
  	if (calcul(adj,opp,hyp,sinfi) == -1) cout << "Erreur" << endl;
	else {
	  cout << "Le sin phi vaut: " << sinfi << endl;
  }
  	if (calcul(adj,opp,hyp,tanfi) == -1) cout << "Erreur" << endl;
	else {
	  cout << "Le tan phi vaut: " << tanfi << endl;
  }

	cout << "Taper Entrée pour continuer";                    
	cin.ignore();
	return 0;
}
*/
/***************************************************************************************************
Exercice de révision Fonctions - Passage de paramètres par valeur/référence - Surcharges - Templates
----------------------------------------------------------------------------------------------------
A partir de la fonctions de base ci-dessous vous allez apporter plusieurs niveaux d'amélioration en
utilisant une fonction pour le calcul.
La définition de la fonction est après le main.

	V1:	avec une fonction qui retourne -1 si erreur (div par 0), 0 si OK, 
		et qui calcule l'hypothénuse et le cos phi (toutes les variables sont des doubles)
		Solution: --> passage par valeur pour adj et opp, par référence pour hyp et cosfi
	
	V2: la fonction peut fonctionner en 3 versions : celle de la V1, une qui calcule en plus le sin phi,
		une qui calcule en plus le sin phi et la tan phi (toutes les variables sont des doubles).
		Vous utiliserez les 3 versions dans le main.
		Solution: --> les surcharges
		
	V3: la fonction est celle de la V1, mais elle accepte n'importe quel type de données pour adj et opp.
		Vous testerez plusieurs appels dans le main.
		Solution: --> les templates

****************************************************************************************************/

//PYTHAGORE: calcul de l'hypothénuse d'un triangle
//////////////////////////////////////////////////

#include <iostream>
#include <math.h>				
#include <clocale>              
int calcul(double adj,double opp, double& hyp, double& cosfi){
  hyp = sqrt(adj*adj + opp*opp);
  if (hyp != 0) {
    cosfi = adj / hyp;
    return(0);
  }
  else return(-1);
}

int calcul(double adj,double opp, double& hyp, double& cosfi, double& sinfi){
  hyp = sqrt(adj*adj + opp*opp);
  if (hyp != 0) {
    cosfi = adj / hyp;
    sinfi = opp / hyp;
    return(0);
  }
  else return(-1);
}

int calcul(double adj,double opp, double& hyp, double& cosfi, double& sinfi, double& tanfi){
  hyp = sqrt(adj*adj + opp*opp);
  if (hyp != 0 || adj != 0) {
    cosfi = adj / hyp;
    sinfi = opp / hyp;
    tanfi = opp / adj;
    return(0);
  }
  else return(-1);
}

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "fra");     
	double adj, opp, hyp,cosfi, sinfi, tanfi;

	cout << "Tapez la valeur du coté adjacent: ";	cin >> adj;		cin.ignore();
	cout << "Tapez la valeur du coté opposé: ";		cin >> opp;		cin.ignore();

	if (calcul(adj,opp,hyp,cosfi) == -1) cout << "Erreur" << endl;
	else {
    cout << "L'hypothénuse vaut: " << hyp << endl;
	  cout << "Le cos phi vaut: " << cosfi << endl;
  }
  if (calcul(adj,opp,hyp,cosfi,sinfi) == -1) cout << "Erreur" << endl;
	else {
    cout << "L'hypothénuse vaut: " << hyp << endl;
	  cout << "Le cos phi vaut: " << cosfi << endl;
	  cout << "Le sin phi vaut: " << sinfi << endl;
  }
  if (calcul(adj,opp,hyp,cosfi,sinfi,tanfi) == -1) cout << "Erreur" << endl;
	else {
    cout << "L'hypothénuse vaut: " << hyp << endl;
	  cout << "Le cos phi vaut: " << cosfi << endl;
	  cout << "Le sin phi vaut: " << sinfi << endl;
	  cout << "Le tan phi vaut: " << tanfi << endl;
  }

	cout << "Taper Entrée pour continuer";                    
	cin.ignore();
	return 0;
}