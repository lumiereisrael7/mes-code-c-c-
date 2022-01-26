#include "liste_point.hpp"

using namespace std;

int main()
{
    liste_point * lp = new liste_point;

    point p1(1, 2), p2(2, 3), p3(3, 4);

    lp->ajouter(&p3);
    lp->affiche();

    lp->ajouter(&p2);
    lp->affiche();

    lp->ajouter(&p1);
    lp->affiche();

    delete lp;

    return 0;
}