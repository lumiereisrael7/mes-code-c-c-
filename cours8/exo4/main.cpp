#include "entete.hpp"

using namespace std;

int main()
{
    liste<int> L1;

    cout << "Liste crée : \n\ttaille: " << L1.Taille() << endl;

    cout << "\najout d'un element : \n\tliste: ";
    L1.add(5);
    L1.afficher();
    
    cout << "\n\ttaille: " <<L1.Taille() << endl;

    L1.add(6);
    L1.add(25);
    L1.add(8);
    cout << "\najout d'un element : \n\tliste: ";
    L1.add(6);
    L1.afficher();

    cout << "\n\ttaille: " <<L1.Taille() << endl;

    return 0;
}