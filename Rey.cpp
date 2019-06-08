#include "Rey.h"
#include "Pieza.h"
Rey::Rey()
{
    rey = 'K';
    nombre = 'K';
}

Rey::Rey(char rey) : Pieza(nombre)
{
    rey = 'K';
    nombre = 'K';
}
char Rey::getrey()
{
    return rey;
}
void Rey::setrey(char rey)
{
    this->rey = rey;
}
bool Rey::validarMovimiento(int x, int x2, int y, int y2)
{
    if (x - x2 <= 1 && y - y2 <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
string Rey::toString()
{
    return "";
}
