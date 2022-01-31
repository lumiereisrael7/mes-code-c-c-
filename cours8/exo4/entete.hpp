#ifndef _HEAD

#define _HEAD
#include <iostream>

using namespace std;


template <typename T> struct element
{
    element<T> * suivant;
    T val;
};

template <typename T> class liste
{
    element<T> * Tete;
    int taille;
    
    public:
    liste ()
    {
        Tete = 0;
        taille = 0;
    }

    void add (T elem);
    T pop ();
    void afficher();
    int Taille()
    {
        return taille;
    }
};

template <typename T> void liste<T>::add(T elem)
{
    if (!Tete)
    {
        Tete = new element<T>;
        Tete->suivant = 0;
        Tete->val = elem;
    }

    else
    {
        element<T> * tmp = new element<T>;
        tmp->val = elem;
        tmp->suivant = Tete;
        Tete = tmp;
    }

    taille ++;
}

template <typename T> T liste<T>::pop()
{
    if (!Tete)
    {
        cout<< "liste vide !!! " << endl;
        return ;
    }

    else
    {
        T val = Tete->val;
        element<T> * tmp = Tete;
        Tete = Tete->suivant;
        delete tmp;
        taille --;
        return val;
    }
}


template <typename T> void liste<T>::afficher()
{
    element<T> * tmp = Tete;

    while(tmp)
    {
        cout<< tmp->val << " -->";
        tmp = tmp->suivant;
    }

    cout << " X" << endl;
}

#endif