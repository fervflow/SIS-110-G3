#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    switch(n){
        case 1: cout << "Es 1." << endl; break; //interrupcion
        case 2: cout << "Es 2." << endl; break;
        case 3: {
                cout << "Es 3." << endl;
                break;
        }
        default: cout << "No es 1, 2 ni 3." << endl; break;
    }
    
    return 0;
}