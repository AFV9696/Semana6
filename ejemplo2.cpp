#include <iostream>
#include "Point.h"

using namespace std;

void intercambio(int &a, int &b){

    int tmp = a;
    a = b;
    b = tmp;
}

void imprimirPoint(Point p){
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
}

void intercambioPoints(Point &a, Point &b){
    Point tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a = 20;
    int b = 40;
    
    intercambio(a, b);
    cout << a << endl;
    cout << b << endl;

    Point p1(4, 5);
    Point p2(9, 2);
    imprimirPoint(p1);
    imprimirPoint(p2);
    intercambioPoints(p1, p2);
    cout << "intercambio:" << endl;
    imprimirPoint(p1);
    imprimirPoint(p2);

    return 0;

}

