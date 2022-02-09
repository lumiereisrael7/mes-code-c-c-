#include "entete.hpp"

using namespace std;

int pile::sommet()
{
    return Pile.top();
}

bool pile::vide()
{
    if(Pile.size())
        return false;

    return true;
}

int pile::rechercher(int a)
{
    vector<int> v, i, j = 0;
    for (i = 0; i < Pile.size(); i++)
    {
        if(Pile.top() == a)
            j = 1;
        v.push_back(Pile.top());
        Pile.pop();
    }

    for(i = i - 1; i >= 0; i--)
        Pile.push(v[i]);

    return j;
}

int pile::supprimer()
{
    if(Pile.size())
    {
        int a = Pile.top();
        Pile.pop();
        return a;
    }
}