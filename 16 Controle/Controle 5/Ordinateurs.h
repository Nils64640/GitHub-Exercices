#pragma once
#include "ProdInfo.h"
class Ordinateurs :
    public ProdInfo
{
private:
    double _disque_dur;
    static int _nb_ordinateur;
public:
    Ordinateurs();
    Ordinateurs(string marque, float prixht, double disque_dur);
    ~Ordinateurs();

    void affiche();

    double get_disque_dur();
    void set_disque_dur(double disque_dur);
};

