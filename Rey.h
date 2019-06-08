#ifndef Rey_H
#define Rey_H
#include "Pieza.h"
class Rey:public Pieza
{
private:
    char rey;

public:
    Rey();
    Rey(char);
    char getrey();
    void setrey(char);
    virtual bool validarMovimiento(int, int, int, int);
    virtual string toString();
};
#endif
