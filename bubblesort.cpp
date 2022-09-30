#include <iostream>

using namespace std;

int main() {

    int arregloeglo[] = {21, 65, 98, 15};
    

    bSort(arregloeglo, 4);

    return 0;
}

void intercambio(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void bSort(int arreglo[], const int tam){

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam - 1; j++){
            if(arreglo[j] < arreglo [j+ 1]){
                intercambio(arreglo[j], arreglo[j + 1]);
        
            }
        }
    }