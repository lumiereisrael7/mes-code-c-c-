#include "entete.hpp"

using namespace std;

template <typename T, typename U> T somme(T x, U y)
{
    return x + y;
}

int somme(char * a, char * b)
{
    return(strlen(a) + strlen(b));
}