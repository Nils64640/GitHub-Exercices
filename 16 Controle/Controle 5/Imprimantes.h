#pragma once
#include "ProdInfo.h"
class Imprimantes :
    public ProdInfo
{
private:
    bool _reseau;
    int _definition;
    static int _nb_imprimante;
public:
    Imprimantes();
    Imprimantes(string marque, float prixht, bool reseau, int definition);
    ~Imprimantes();

    void affiche();

    bool get_reseau();
    int get_definition();
    void set_reseau(bool reseau);
    void set_definition(int definition);
};

