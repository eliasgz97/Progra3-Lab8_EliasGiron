#ifndef Reina_H
#define Reina_H
#include "Pieza.h"
class Reina:public Pieza{
    private:
        char reina;

    public:
        Reina();
        Reina(char);
        char getreina();
        void setreina(char);
        virtual bool validarMovimiento(int, int, int, int);
        virtual string toString();
};
#endif
