#include "entete.hpp"

using namespace std;

int main()
{
    float x[] = {8.2, 9.5, 5.0, 2.5, 8.5};
    int y[] = {5, 8, 25, 26, 85, 36, 52, 0};
    char * str = "bonjour";

    cout << "tableau1 avant tri :" << endl;
    montrer(x, 5);

    cout << "tableau1 apres tri :" << endl;
    tri(x, 5);
    montrer(x, 5);

    cout << "tableau2 avant tri :" << endl;
    montrer(y, 5);

    cout << "tableau2 apres tri :" << endl;
    tri(y, 5);
    montrer(y, 5);

    cout << "tableau3 avant tri :" << endl;
    montrer(str, 5);

    cout << "tableau3 apres tri :" << endl;
    tri(str, 5);
    montrer(str, 5);

    return 0;
}