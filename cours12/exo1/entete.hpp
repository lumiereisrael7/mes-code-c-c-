#ifndef _EXO1
    #define _EXO1

    #include <iostream>
    #include <map>
    #include <vector>
    #include <deque>
    #include <queue>

    using namespace std;

    int ajoute_evenement(map<int, queue<string, deque<string> > > &, int, string);

    void affiche(map<int, queue<string, deque<string> > > &);

    void affiche_queue(queue<string, deque<string> >);

#endif