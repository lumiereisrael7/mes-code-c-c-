# include <iostream>
#include <map>
using namespace std ;
void affiche (const map<char, int> &) ;

int main()
{
    map<char, int> m ; 
    cout << "map initial : " ; 
    affiche(m) ;

    m['S'] = 5 ; /* la cle S n’existe pas encore, l’element est crée */
    m['C'] = 12 ; /* idem */

    cout << "map SC : " ; 
    affiche(m) ;
    
    cout << "valeur associée à la cle 'S' : " << m['S'] << endl ;
    cout << "valeur associée à la cle 'X' : " << m['X'] << endl ;
    
    cout << "map X : " ; 
    affiche(m) ;

    m['S'] = m['c'] ; /* on a utilisé m['c'] au lieu de m['C'] ; */
    /* la cle 'c' est creee */
    cout << "map final : " ; 
    affiche(m) ;
}

void affiche (const map<char, int> & m)
//********** version C++98 **********
{
    map<char, int>::const_iterator im ;
    
    for (im=m.begin() ; im!=m.end() ; im++)
        cout << "(" << (*im).first << "," << (*im).second << ") " ;

    cout << endl ;
}