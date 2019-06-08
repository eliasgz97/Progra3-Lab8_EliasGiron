#include "Alfil.h"
#include "Pieza.h"
Alfil::Alfil()
{
    alfil = 'A';
    nombre = 'A';
}
Alfil::Alfil(char alfil): Pieza(nombre)
{
    alfil = 'A';
    nombre = 'A';
}
char Alfil::getalfil()
{
    return alfil;
}
void Alfil::setalfil(char alfil)
{
    this->alfil = alfil;
}
bool Alfil::validarMovimiento(int x, int x2, int y, int y2)
{
    if(x != x2 && y != y2){
        return true;
    } else {
        return false;
    }
}
string Alfil::toString()
{
    return "";
}
