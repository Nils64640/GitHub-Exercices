#include <iostream>
#include <string>
#include <clocale>
using namespace std;

class Personne {
protected:
  string nom;
  int age;
public:
  Personne():nom{" "},age{0}{
  }
  Personne(string a,int b):nom{a},age{b}{
  }
  void set_nom(string a){
    nom = a;
  }
  void set_age(int a){
    age = a;
  }
  string get_nom(){
    return(nom);
  }
  int get_age(){
    return(age);
  }
};

class Eleve: public Personne {
protected:
  string lycee;
  string classe;
public:
  Eleve():lycee{""},classe{""}{
    nom =" ";
    age =0;
  }
  Eleve(string a, int b,string c,string d):lycee{c},classe{d}{
    nom =a;
    age =b;
  }
  void set_lycee(string a){
    lycee = a;
  }
  string get_lycee(){
    return(lycee);
  }
  void set_classe(string a){
    classe = a;
  }
  string get_classe(){
    return(classe);
  }

};

class JoueurPro: public Personne {
protected:
  string club;
  int nbeMinutesJeu;
public:
  JoueurPro():club{""},nbeMinutesJeu{0}{
    nom =" ";
    age =0;
  }
  JoueurPro(string a, int b,string c,int d):club{c},nbeMinutesJeu{d}{
    nom =a;
    age =b;
  }
  void set_lycee(string a){
    club = a;
  }
  string get_lycee(){
    return(club);
  }
  void set_nbeMinutesJeu(int a){
    nbeMinutesJeu = a;
  }
  int get_nbeMinutesJeu(){
    return(nbeMinutesJeu);
  }

};



int main(){
 Eleve eleve1("Banquet",18,"Hasparren","BTS");
 Personne personne1("Frite",18);
 JoueurPro pro("Joseph",18,"Pong",200);
}
