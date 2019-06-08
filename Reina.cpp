#include "Reina.h"
#include "Pieza.h"

Reina::Reina()
{
    reina = 'R';
    nombre = 'R';
}
Reina::Reina(char reina) : Pieza(nombre)
{
    reina = 'R';
    nombre = 'R';
}
char Reina::getreina()
{
    return reina;
}
void Reina::setreina(char reina)
{
    this->reina = reina;
}
bool Reina::validarMovimiento(int x, int x2, int y, int y2)
{
    if (((x - x2 == 2 || x2 - x == 2) || (x2 - x == 1 || x - x2 == 1)) && (((y - y2 == 2 || y2 - y == 2) || (y - y2 == 1 || y2 - y == 1))))
    {
        return false;
    }
    else
    {
        return true;
    }
}
string Reina::toString()
{
    return "";
}
