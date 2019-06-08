#ifndef Pieza_H
#define Pieza_H
#include <string>
#include <typeinfo>
#include <iostream>
using std::string;
using std::cout;
using std::cin;

class Pieza{
    protected:
        char nombre;

    public:
        Pieza();
        Pieza(char);
        char getnombre();
        void setnombre(char);
        virtual bool validarMovimiento(int, int, int, int);
        virtual string toString();
};
#endif
