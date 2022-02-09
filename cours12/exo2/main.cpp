#include "entete.hpp"

using namespace std;

int main()
{
    polynome<int> p, q, r;

    p.ajout(4, 5);
    p.ajout(6, 8);
    p.afficher();
    cout << "p(2) = " << p.evaluer(2) << endl;
    
    q.ajout(5, 25);
    q.ajout(4, 20);
    q.ajout(6, 2);
    q.afficher();
    cout << "q(2) = " << q.evaluer(2) << endl;

    r = p.addition(q);
    r.afficher();
    cout << "r(2) = " << r.evaluer(2) << endl;

    return 0;
}