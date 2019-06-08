#include "Pieza.h"
#include <vector>
using std::vector;
#include <fstream>
using std::ifstream;

#ifndef PARTIDA_H
#define PARTIDA_H
class FigureFileReader
{
    private:
        ifstream file;
    public:
        void movimiento(Pieza***, vector<string>&);

};

#endif