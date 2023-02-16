#include <iostream>
#include <cmath>
#include "ponto.h"

ponto::ponto(){
    x = y = 0;
}
/*
ponto::ponto(float x, float y){
    this->x = x;
    this->y = y;
}
*/

float ponto::dist(){
    return sqrt(x * x + y * y);
}

void ponto::setX(float x){
    this->x = x;
}
void ponto::setY(float y){
    this->y = y;
}

float ponto::getX(){
    return x;
}

float ponto::getY(){
    return y;
}
