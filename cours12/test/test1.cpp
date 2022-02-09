#include "entete.hpp"
using namespace std;

int main()
{
    map<char, int> m;
    m['A'] = 'A' - 'A' ;
    m['E'] = 'E' - 'A';
    m['I'] = 'I' - 'A';

    map<char, int> ::iterator im;
    for (im=m.begin() ; im!=m.end() ; im++)
    {
        cout << im->first<<" ";
        cout << im->second << endl;
    }

    cout << endl;

    for (auto el : m)
    {
        cout << el.first << " "; 
        cout << el.second <<endl;
    }

    cout << endl;

    for (auto &el : m)
    {
        cout << el.first << " "; 
        cout << el.second <<endl;
    }

    return 0;
}