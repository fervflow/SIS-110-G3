#include <iostream>
using namespace std;
int main(){
    // Sumar los numeros introducidos hasta que la entrada sea 0

    int num;
    int suma = 0;
    cin >> num;
    
    for(/*decl. de variables*/; num != 0; cin >> num){
        suma = suma + num;
    }

    //for (int num = 1; num != 0; cin >> num, suma += num){}

    cout << "La suma total es: " << endl << suma;
    return 0;
}