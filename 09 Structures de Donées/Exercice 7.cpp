#include <iostream>
#include <string>
#include <math.h>
using namespace std;

struct programme {
  string texte;
  int mesure;
  double cout;
};

struct politique {
  string candidat;
  string nom_parti;
  programme programme;
  double score;
};

void afficher(politique& var){
  cout << "\nNom du candidat : " << var.candidat << "\nParti : " << var.nom_parti << "\nProgramme :\n\t" << var.programme.texte << "\n\tNombre de mesure : " << var.programme.mesure << "\n\tCoût des mesures : " << var.programme.cout << "M euro\nScore : " << var.score  << "%"<< endl;
}

string entete(politique& var,politique& var2,politique& var3,politique& var4){
  if (var.score>var2.score){
    if (var.score>var3.score){
      if (var.score>var4.score){
        return(var.candidat);
      }
      else{
        return(var4.candidat);
      }
    }
    else{
      if (var3.score>var4.score){
        return(var3.candidat);
      }
      else{
        return(var4.candidat);
      }
    }
  }
  else{
    if (var2.score>var3.score){
      if (var2.score>var4.score){
        return(var2.candidat);
      }
      else{
        return(var4.candidat);
      }
    }
    else{
      if (var3.score>var4.score){
        return(var3.candidat);
      }
      else{
        return(var4.candidat);
      }
    }
  }
}

int main()
{
  setlocale(LC_CTYPE, "fra");
  
  politique candidat1{"Marine le Pen", "Front Nationale", {"Pas de migrant",2,75.43},33};
  politique candidat2{"Macron", "République en Marche", {"Pour un avenir meilleur",3,50},35};
  politique candidat3{"Zemour", "Aucun", {"Un état plus ferme et moins laxiste",5,120.5},28};
  politique candidat4{"Mélanchon", "Socialiste", {"Aide por tous",10,1200},4};
  
  cout << "Candidat en tête de liste : " << entete(candidat1,candidat2,candidat3,candidat4) << endl;
  afficher(candidat1);
  afficher(candidat2);
  afficher(candidat3);
  afficher(candidat4);
  return(0);
}