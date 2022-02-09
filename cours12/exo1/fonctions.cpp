#include "entete.hpp"

using namespace std;

int ajoute_evenement(map<int, queue<string, deque<string> > > & Evenements, int date, string intitule)
{
    map<int, queue<string, deque<string> > >::iterator el = Evenements.find(date);

    if (el == Evenements.end())
    {
        //cout << 1;
        queue<string, deque<string> > L;
        L.push(intitule);
        Evenements.insert(make_pair(date, L));
    }

    else
    {
        el->second.push(intitule);
        
       // cout << el->first<< endl;
    }


    return 1;
}

void affiche_queue(queue<string, deque<string> > q)
{
    int i = 0, n = q.size();

    while(i < n)
    {
        cout << q.front() << " ";
        q.pop();
        i++;
    }
}

void affiche(map<int, queue<string, deque<string> > > & Evenements)
{
    for (auto el: Evenements)
    {
        cout << el.first << ": ";
        auto tmp(el.second);
        affiche_queue(tmp) ;

        cout << endl;
    }
}

