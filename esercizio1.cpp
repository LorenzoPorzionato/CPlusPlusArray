#include <iostream>
/*dato un array di interi, calcola la somma degli elementi pari e degli 
elementi dispari in due cicli separati*/
using namespace std;
int main(){
int arrayDiInteri[10] = {1,2,3,4,5,6,7,8,9,10};
int sommePari=0;
int sommeDispari=0;

for(int i=0;i < 10;i++){
    if(arrayDiInteri[i]%2==0)
    sommePari+=arrayDiInteri[i];
}
for(int i=0; i<10; i++){
    if(arrayDiInteri[i]%2!=0)
    sommeDispari+=arrayDiInteri[i];
}

cout << "Somma pari: " << sommePari <<endl;
cout << "Somma dispari: " << sommeDispari << endl;

}