#include <iostream>
#include "Point.h"

using namespace std;

int main(){ 

    Point p1;
    Point p2{5, 4};
    Point p3{4, 3};

    Point arr[] = {p1, p2, p3};

    imprimirPoints(arr, 3);

    return 0;
}

void imprimirPoints(const Point arr[], const int tam){

    for(int i = 0; i < tam; i++){
        arr[i].printArr();
    }
}
