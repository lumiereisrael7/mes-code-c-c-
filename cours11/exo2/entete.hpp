#ifndef _VECT
    #define _VECT

    #include <iostream>
    #include <vector>
    #include <stack>

    class pile
    {
        stack<int, vector<int>> Pile;

        pile(int, int);
        
        pile(int);

        void ajouter(int);
        void supprimer(int);
        bool vide();
        void affiche();
        int rechercher(int);
        int sommet();
    }

#endif