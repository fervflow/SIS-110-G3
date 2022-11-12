#include <iostream>
using namespace std;
int main(){
    int A, B, resultado;
    char operador;
    cin >> A >> operador >> B;
    switch(operador){
        case '/': resultado = A / B; break;
        case '*': resultado = A * B; break;
        case 37: resultado = A % B; break;
    }
    cout << A << " " << operador << " " << B
         << " = " << resultado << endl;
    return 0;
}