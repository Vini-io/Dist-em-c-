#include <iostream>
#include "ponto.cpp"
using namespace std;


int main(){

    ponto *DIST = new ponto;

    float x, y;

    cout << "digite valor de x: ", cin >> x;
    cout << "digite valor de y: ", cin >> y;

    DIST->setX(x);
    DIST->setY(y);

    cout << "\nValor de X: " << DIST->getX() << endl;
    cout << "Valor de Y: " << DIST->getY() << endl;
    cout << "Dist: " << DIST->dist()<<endl;

    system("pause");
}
