#ifndef Peon_H
#define Peon_H
#include "Pieza.h"
class Peon:public Pieza
{
private:
    char peon;
public:
    Peon();
    Peon(char);
    char getpeon();
    void setpeon(char);
    virtual bool validarMovimiento(int, int , int, int);
    virtual string toString();
};
#endif
