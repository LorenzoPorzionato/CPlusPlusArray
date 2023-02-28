/*scrivi una funzione che prenda in input un array di interi
e la sua lunghezza e restituisca true se l'array e' ordinato
in ordine crescente e false altrimenti*/
#include <iostream>
#include <array>

using namespace std;

bool ordinatoCrescente(int arr[], int lung)
{

    for (int i = 0; i < lung; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            return false;
            break;
        }
        else
        {
            return true;
        }
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int lung = sizeof(arr) / sizeof(arr[0]);
    if (ordinatoCrescente(arr, lung) == 0)
    {
        cout << "non e' ordinato " << endl;
    }
    else
    {
        cout << "e' ordinato " << endl;
    }
}