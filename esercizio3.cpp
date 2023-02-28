/*scrivi una funzione che prenda in input un array di interi
e la sua lunghezza e restituisca la somma di tutti gli
elementi dell'array*/

#include <iostream>
using namespace std;

int sum(int arr[], int lung)
{
    int sum = 0;
    for (int i = 0; i < lung; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int lung = sizeof(arr) / sizeof(arr[0]);
    cout << " la somma di tutti gli elementi dell'array e' " << sum(arr, lung) << endl;
}