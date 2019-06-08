#ifndef Torre_H
#define Torre_H
#include "Pieza.h"

class Torre:public Pieza{ 
    private:
        char torre;
    public:
        Torre();
        Torre(char);
        char gettorre();
        void settorre(char);
        virtual bool validarMovimiento(int, int, int, int);
        virtual string toString();
};
#endif

