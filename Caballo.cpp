#include "Caballo.h"
#include "Pieza.h"

Caballo::Caballo()
{
    caballo = 'C';
    nombre = 'C';
}
Caballo::Caballo(char caballo) : Pieza(nombre)
{
    nombre = 'C';
    caballo = 'C';
}
bool Caballo::validarMovimiento(int x, int x2, int y, int y2)
{
    if (((x - x2 == 2 || x2 - x == 2) || (x2 - x == 1 || x - x2 == 1)) && (((y - y2 == 2 || y2 - y == 2) || (y - y2 == 1 || y2 - y == 1))))
    {
        return true;
    }
    else
    {
        return false;
    }
}
char Caballo::getnombre()
{
    return nombre;
}
void Caballo::setnombre(char caballo)
{
    this->caballo = caballo;
}
string Caballo::toString()
{
    return "";
}