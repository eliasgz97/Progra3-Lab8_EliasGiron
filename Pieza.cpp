#include "Pieza.h"

Pieza::Pieza(){
    nombre = ' ';
}
Pieza::Pieza(char nombre){
    nombre=' ';
}
char Pieza::getnombre(){
    return nombre;
}
void Pieza::setnombre(char nombre){
    this->nombre=nombre;
}
bool Pieza::validarMovimiento(int x, int x2, int y, int y2){
    return true;
}
string Pieza::toString(){
    return " ";
}