#ifndef Caballo_H
#define Caballo_H
#include "Pieza.h"

class Caballo:public Pieza{
    private:
        char caballo;
    public:
        Caballo();
        Caballo(char);
        char getnombre();
        void setnombre(char);
        virtual string toString();
        virtual bool validarMovimiento(int, int, int, int);
};
#endif