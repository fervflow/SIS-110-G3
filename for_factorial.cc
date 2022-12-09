#include<iostream>
using namespace std;
int main(){
    // Dado un entero N, mostrar su factorial !
    // 5! = 5 * 4 * 3 * 2 * 1 = 120
    // 5! = 1 * 2 * 3 * 4 * 5 = 120
    // 1! = 1
    int N;
    int factorial = 1;
    cin >> N;

    for(int i = 2; i <= N; i++){
        factorial = factorial * i;
    }

    // Alternativa moviendo la instruccion dentro del header del 'for'
    //for(int i = 2; i <= N; i++, factorial = factorial * i - factorial){}

    cout << "El factorial de " << N << " es: " << factorial;

    return 0;
}