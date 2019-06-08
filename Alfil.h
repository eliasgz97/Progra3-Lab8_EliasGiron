#ifndef Alfil_H
#define Alfil_H
#include "Pieza.h"
class Alfil:public Pieza{
    private:
        char alfil;
    public:
        Alfil();
        Alfil(char);
        char getalfil();
        void setalfil(char);
        virtual bool validarMovimiento(int, int, int, int);
        virtual string toString();
};
#endif
