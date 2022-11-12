#include <iostream>
using namespace std;
int main(){
    // Sumar los numeros introducidos hasta
    // que la entrada sea 0
    int num;
    int suma = 0;
    cin >> num;
    // while (cin >> num && num != 0){
    while (num != 0){
        suma = suma + num;
        cin >> num;
    }
    cout << "La suma total es: " << endl << suma;
    return 0;
}