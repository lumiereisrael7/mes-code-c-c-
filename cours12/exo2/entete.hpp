#ifndef _EXO1
    #define _EXO1

    #include <iostream>
    #include <map>
    #include <cmath>

    using namespace std;

    template <typename T> class polynome
    {
        map<int, T> P;

        public:
            void ajout(int m, T c)
            {
                if(P.find(m) != P.end())
                    cout << "le monome existe deja" << endl;

                else
                    if (c != (T) 0)
                        P.insert(make_pair(m, c));
            }

            void suppression(int m)
            {
                if(P.find(m) == P.end())
                    cout << "le monome n'existe pas" << endl;

                else
                    P.erase(m);
            }
            T coef(int m)
            {
                auto el = P.find(m);
                if(el == P.end())
                    return 0;

                else
                    return el->second;
            }

            polynome addition(polynome q)
            {
                polynome p;

                for (auto el = P.begin(); el != P.end(); el++)
                    p.ajout(el->first, q.coef(el->first) + this->coef(el->first));

                for (auto el = q.P.begin(); el != q.P.end(); el++)
                    if (p.P.find(el->first) == p.P.end())
                        p.ajout(el->first, el->second);

                return p;
            }

            polynome soustraction(polynome q)
            {
                polynome p;

                for (auto el = P.begin(); el != P.end(); el++)
                    p.ajout(el->first, q.coef(el->first) - this->coef(el->first));

                for (auto el = q.P.begin(); el != q.P.end(); el++)
                    if (p.P.find(el->first) == p.P.end())
                        p.ajout(el->first, el->second * -1);

                return p;
            }
            polynome produit(polynome q)
            {
                polynome p, r;

                for (auto el = P.begin(); el != P.end(); el++)
                {
                    for (auto e = q.P.begin(); e != q.P.end(); e++)
                    {
                        r = r.addition(el->second*e->secondel->first+e->first)
                    }
                }
            }

            T evaluer(T x)
            {
                T s = 0;
                for (auto el = P.begin(); el != P.end(); el++)
                    s += pow(x, el->first) * el->second;

                return s;
            }

            void afficher()
            {
                for (auto el = P.begin(); el != P.end(); el++)
                {
                    if (el != P.begin())
                        cout << " + ";
                    cout << el->second <<"x^" <<el->second;
                }

                cout << endl;

            }

    };

#endif