#include "Torre.h"
#include "Pieza.h"

Torre::Torre(){
    torre='T';
    nombre='T';
}
Torre::Torre(char torre):Pieza(nombre){
    torre = 'T';
    nombre = 'T';
}
char Torre::gettorre(){
    return torre;
}
void Torre::settorre(char torre){
    this->torre=torre;
}
string Torre::toString(){
    return "";
}
bool Torre::validarMovimiento(int x, int x2, int y, int y2){
    if(x == x2 || y == y2){
        return true;
    } else {
        return false;
    }
} 

