#include <iostream>
using namespace std;
int main(){
    /*
    Le dan un conjunto de N números distintos y ordenados ascendentemente. Un rango es un conjunto finito
    de enteros consecutivos. Formalmente, para dos enteros positivos cualesquiera a ≤ b, el rango [a,b] se define
    como el conjunto de todos los enteros que se encuentran entre a y b, ambos inclusive. Por ejemplo, [3,3] =
    {3} y [4,7] = {4,5,6,7}.
    Del conjunto de números que tiene, determine la cantidad de rangos que hay en dicho conjunto. 
    */

    int N;
    int num;
    int cant_rangos = 1;
    int temp; 
    cin >> N;
    cin >> num;
    temp = num;
    int i = 1;
    while (i < N){
        cin >> num;
        if(num - 1 != temp){
            cant_rangos++;
        }
        temp = num;
        i++;
    }
    /*for(int i = 1; i < N; temp = num, i++){
        cin >> num;
        if(num - 1 != temp)
            cant_rangos++;
    }*/
    cout << cant_rangos;
    return 0;
}