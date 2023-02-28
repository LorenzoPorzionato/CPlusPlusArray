/*scrivi una funzione che prenda in input un array di interi
e la sua lunghezza e restituisca l'elemento piu' grande
dell'array*/

#include <iostream>
#include <array>

using namespace std;

int max(int arr[], int lung)
{
    int result = arr[0];
    for (int i = 1; i < lung; i++)
    {
        if (arr[i] < result)
            result = arr[i];
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int lung = sizeof(arr) / sizeof(arr[0]);
    cout << "l'elemento piu' grande dell'array e' " << max(arr, lung) << endl;
}