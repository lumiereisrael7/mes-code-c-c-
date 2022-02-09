#include "entete.hpp"

using namespace std;

int main()
{
    int t[] = {1, 2, 3, 4, 5};

    vector<int> v(t, t + 5);

    vector<int>::iterator it_v;

    for (it_v = v.begin(); it_v != v.end(); it_v++)
        cout << *it_v << "\t";

    cout << endl;
    it_v = v.begin();

    *(++it_v) = 6;

    vector<int>::const_iterator cit_v = v.begin();

   /*  *(++cit_v) = 7; /* main.cpp:22:16: error: assignment of read-only location ‘(& cit_v.__gnu_cxx::__normal_iterator<const int*, std::vector<int> >::operator++())->__gnu_cxx::__normal_iterator<const int*, std::vector<int> >::operator*()’
   22 |     *(++cit_v) = 7; */
    affiche(v);

    raffiche(v);

    return 0;
}