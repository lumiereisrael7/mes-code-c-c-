#include "entete.hpp"

using namespace std;

int main()
{
    float x = 8.2;
    int y = 5;

    cout << "calcul de " << x << " + " << y << " avec un patron. La réponse est : " << somme<float>(x, y) << endl;


    string a("bonjour"), b("monsieur");

    cout << "calcul de " << a << " + " << b << " avec une spécialisation. La réponse est : " << somme(a, b) << endl;    

    return 0;
}