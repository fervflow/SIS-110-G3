#include <iostream>
using namespace std;
int main(){
    int A, B, resultado;
    char operador;
    bool no_error = true;
    cin >> A >> operador >> B;
    switch(operador){
        case '+': resultado = A + B; break;
        case '-': resultado = A - B; break;
        case '/': {
                    if(B == 0){
                        cout << "Error: Divisor 0.";
                        no_error = false;
                        break;
                    }
                    else{
                        resultado = A / B;
                    }
                }
                break;
        case '*': resultado = A * B; break;
        case '%': resultado = A % B; break;
    }
    if(no_error == true){
        cout << A << " " << operador << " " << B;
        cout << " = " << resultado << endl;
    }
    return 0;
}
