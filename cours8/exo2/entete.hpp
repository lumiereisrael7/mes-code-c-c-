/* #ifndef _HEAD

#define _HEAD */
#include <iostream>
using namespace std;
//#include <string>

/*template <typename T> void tri(T * x, int y);

template <typename T> void montrer(T * x, int n);*/
/* 
#endif */


template <typename T> void tri(T * x, int y)
{
    for(int i = 0; i < y ; i ++)
    {
        T min = *(x + i), tmp;
        int k = i;

        for(int j = i + 1; j < y; j ++)
        {
            if (*(x + j) < min)
            {
                min = *(x + j);
                k = j;
            }
        }
        
        if (k == i)
            continue;

        tmp = *(x + i);
        *(x + i) = min;
        *(x + k) = tmp;
    }   
}

template <typename T> void montrer(T * x, int n)
{
    for (int i = 0; i < n; i++)
        cout << *(x + i) << " ";

    cout << endl;
}