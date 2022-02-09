#include "entete.hpp"

using namespace std;

int main()
{
    int a;
    pile Pile;

    cout << "Nbre d'élément à ajouter: "
    cin >> a;

    if (a > 0)
        for (int i = 0; i != a; i++)
        {
            cout << "\nElement " << i + 1 << " : ";
            cin >> a;
            Pile.ajouter(a);
            cout << "\nsommet actuel: " << Pile.sommet() << endl;
        }

    cout << endl << "Valeur que vous cherchez : ";

    cin >> a;

    if (Pile.rechercher(a) == 1)
        cout << a << " est présent"<< endl;

    else
        cout << a << " n'est pas présent"<< endl;
    return 0;
}