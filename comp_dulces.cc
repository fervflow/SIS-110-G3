#include <iostream>
using namespace std;
int main(){
    int N, M;
    cin >> N >> M;
    if((N - 2*M) % 3 == 0){
        cout << "Es posible repartir dulces";
    }else{
        cout << "No es posible repartir dulces";
    }
    cout << endl;
    return 0;
}