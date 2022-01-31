#include "entete.hpp"

using namespace std;

int main()
{
    float x = 8.2;
    int y = 5;

    //cout << "Entrez les dimensions: ";
    Rectangle<float, int> a(x, y);

    a.afficher();

    cout << "perimetre: " << a.perimetre() << endl << "aire : " << a.aire() << endl ; 
    return 0;
}