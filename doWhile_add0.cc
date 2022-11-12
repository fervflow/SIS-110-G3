#include <iostream>
using namespace std;
int main(){
    // Sumar los numeros introducidos hasta
    // que la entrada sea 0
    int num;
    int suma = 0;
    do{
        cin >> num;
        suma = suma + num;
    }
    while (num != 0);
    cout << "La suma total es: " << endl << suma;
    return 0;
}