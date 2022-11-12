#include <iostream>
using namespace std;
int main(){
    // Mostrar la suma de numeros del 1 al 10
    int suma = 0;
    int cont = 1;
    int limite = 10;
    while (cont <= limite){
        suma = suma + cont;
        cont++;
    }
    cout << "La suma de los numeros del 1 al "
         << limite << " es:\n" << suma;
    return 0;
}
