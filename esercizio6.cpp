/*scrivi nel main un algoritmo che su un array calcola
e restiruisce un nuovo array che contenga solo gli
elementi dell'array di input che sono pari*/

#include <iostream>
#include <array>

using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int pari = 0;
    int lung = sizeof(array) / sizeof(array[0]);
    int n;

    for (int i = 0; i < lung; i++)
    {
        if (array[i] % 2 == 0)
        {
            pari++;
        }
        else
        {
           return pari;
        }

    }


    int array2[pari] = {};
    for (int i = 0; i < pari; i++)
    {
        cin >> array2[i];
    }
    
}
