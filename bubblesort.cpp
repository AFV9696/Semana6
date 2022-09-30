#include <iostream>

using namespace std;

void imprimirArreglo(int arreglo[], int tam){
    cout << "[" ;
    for(int i = 0; i < tam; i++){
        cout << arreglo[i] << " ";
    }
    cout << "]" << endl;
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
}

void inSort(int arreglo[], int n) {

    int i, key, j;

    for (i = 1; i < n; i++){ 
        key = arreglo[i]; 
        j = i - 1; 
  
        while (j >= 0 && arreglo[j] > key)
        { 
            arreglo[j + 1] = arreglo[j]; 
            j = j - 1; 
        } 
        arreglo[j + 1] = key; 
    } 
} 


int main() {

    int arreglo[] = {21, 65, 98, 15};
    

    bSort(arreglo, 4);
    imprimirArreglo(arreglo, 4);
    inSort(arreglo, 4);
    imprimirArreglo(arreglo, 4);

    return 0;
}

