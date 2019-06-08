#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
#include "Pieza.h"
#include "Torre.h"
#include "Caballo.h"
#include "Alfil.h"
#include "Reina.h"
#include "Rey.h"
#include "Peon.h"
Pieza ***llenado()
{
    Pieza ***tablero;
    tablero = new Pieza **[8];
    for (int i = 0; i < 8; i++)
    {
        tablero[i] = new Pieza *[8];
    }
    return tablero;
}
void imprimir(Pieza ***tablero)
{
    int filas = 8, columnas = 8;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << '[' << tablero[i][j]->getnombre() << ']';
        }
        cout << endl;
    }
}

int main()
{
    char resp = 's';
    Pieza ***tablero = llenado();
    int opcion = 0;
    bool blanco = true, negro = false;
    string pieza, movimiento;
    char turn = 'S';
    string p_pieza, s_pieza;
    string coordenada;
    char x_pieza, x_movimiento;
    int y_pieza = 0, y_movimiento = 0, p_ajugar = 0;
    string partida;
    while (resp == 's' || resp == 'S')
    {
        while (turn == 'S' || turn == 's')
        {
            cout << "Ingrese nombre de partida: " << endl;
            cin >> partida;
            cout << "1. Jugar partida: \n"
                    "2. Recrear partida: \n"
                    "Ingrese opcion: "
                 << endl;
            cin >> opcion;
            switch (opcion)
            {
            case 1:
            {
                cout << "1. Peon\n"
                        "2. Torre\n"
                        "3. Alfil\n"
                        "4. Reina\n"
                        "5. Caballo \n"
                        "Ingrese pieza a utilizar"
                     << endl;
                cin >> p_ajugar;
                switch (p_ajugar)
                {
                case 1:
                {
                    Peon* peon = new Peon();
                    Rey* rey = new Rey();
                    tablero[6][4] = peon;
                    tablero[7][4] = rey;
                }
                break;
                case 2:
                {
                    Rey *rey = new Rey();
                    Torre *torre = new Torre();
                    tablero[0][0] = torre;
                    tablero[7][4] = rey;
                }
                break;
                case 3:
                {
                    Alfil *alfil = new Alfil();
                    Rey *rey = new Rey();
                    tablero[0][2] = alfil;
                    tablero[7][4] = rey;
                }
                break;
                case 5:
                {
                    Rey *rey = new Rey();
                    Caballo *caballo = new Caballo();
                    tablero[0][1] = rey;
                    tablero[0][4] = caballo;
                }
                break;
                }
                while (blanco)
                {
                    //imprimir(tablero);
                    cout << "Jugador 1, ingrese su coordenada: " << endl;
                    cin >> coordenada;
                    x_pieza = ((int)coordenada[1] - 49) * (-1) + 8;
                    y_pieza = (coordenada[2] - 48) * (-1) + 8;
                    x_movimiento = ((int)coordenada[4] - 49) * (-1) + 8;
                    y_movimiento = (coordenada[5] - 48) * (-1) + 8;
                    if (!tablero[x_pieza][y_pieza]->validarMovimiento(x_pieza, y_pieza, x_movimiento, y_movimiento))
                    {
                        cout << "Movimiento invalido: " << endl;
                        blanco = true;
                    }
                    else
                    {
                        tablero[x_movimiento][y_movimiento] = tablero[x_pieza][y_pieza];
                        tablero[x_pieza][y_pieza]->setnombre(' ');
                        blanco = false;
                        negro = true;
                    }
                }
                while (negro)
                {
                    imprimir(tablero);
                    cout << "Jugador 2, ingrese su coordenada: " << endl;
                    cin >> coordenada;
                    x_pieza = ((int)coordenada[1] - 49) * (-1) + 8;
                    y_pieza = (coordenada[2] - 48) * (-1) + 8;
                    x_movimiento = ((int)coordenada[4] - 49) * (-1) + 8;
                    y_movimiento = (coordenada[5] - 48) * (-1) + 8;
                    if (!tablero[x_pieza][y_pieza]->validarMovimiento(x_pieza, y_pieza, x_movimiento, y_movimiento))
                    {
                        cout << "Movimiento invalido: " << endl;
                        negro = true;
                    }
                    else
                    {
                        tablero[x_movimiento][y_movimiento] = tablero[x_pieza][y_pieza];
                        tablero[x_pieza][y_pieza]->setnombre(' ');
                        negro = false;
                        blanco = true;
                    }
                }
            }
            break;
            case 2:

                break;
            }
            cout << "Desea regresar?[s\n]: " << endl;
            cin >> turn;
        }
        cout << "Desea regresar?[s\n]: " << endl;
        cin >> resp;
    }
}