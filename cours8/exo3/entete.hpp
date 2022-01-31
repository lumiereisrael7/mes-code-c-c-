#ifndef _HEAD

#define _HEAD
#include <iostream>
//#include <string>

template <typename T, typename U> class Rectangle
{
    T L;
    U l;

    public:
    Rectangle (T Lo = 0, U la = 0 ): L(Lo), l(la) {}
    auto perimetre();
    auto aire(); 
    void afficher();
};

using namespace std;

template <typename T, typename U> auto Rectangle<T, U>::perimetre()
{
    return (L + l) * 2;
}

template <typename T, typename U> auto Rectangle<T, U>::aire()
{
    return L * l;
}

template <typename T, typename U> void Rectangle<T, U>::afficher()
{
    cout << "Rectangle: L = " << L << " ; l = " << l << endl;
}

#endif