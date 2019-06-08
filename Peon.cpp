#include "Pieza.h"
#include "Peon.h"

Peon::Peon()
{
    peon = 'P';
    nombre = 'P';
}
Peon::Peon(char peon) : Pieza(nombre)
{
    peon = 'P';
    nombre = 'P';
}
char Peon::getpeon()
{
    return peon;
}
void Peon::setpeon(char peon)
{
    this->peon = peon;
}
bool Peon::validarMovimiento(int x, int x2, int y, int y2)
{

    if (x < x2 && y == y2)
    {
        return true;
    }
    else
    {
        if(x > x2 && y == y2){
            return true;
        } else {
            return false;
        }
    }
}
string Peon::toString()
{
    return "";
}
