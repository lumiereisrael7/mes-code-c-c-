#include "entete.hpp"

using namespace std;

int main()
{
    map<int, queue<string, deque<string> > > Evenements;

    ajoute_evenement(Evenements, 1963, string("Organisation de l'Unité africaine (OUA)"));
    
    ajoute_evenement(Evenements, 1963, "Fete des profs");

    ajoute_evenement(Evenements, 1969, "Rencontre administrative");

    affiche(Evenements);

    return 0;
}