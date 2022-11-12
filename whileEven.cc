#include <iostream>
using namespace std;
int main(){
    // Imprimir los numeros pares desde i hasta N
    int i;
    cout << "Introduzca el limite i." << endl;
    cin >> i;
    int N;
    cout << "Introduzca el limite M." << endl;
    cin >> N;
    while (i <= N){
        if(i%2 == 0){
            cout << i << " ";
        }
        /*
        cout << i << " ";
        i += 2;
        */
        i = i + 1;
    }

    return 0;
}