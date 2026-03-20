#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// PIEZAS//
// se muestra cada pieza en 4 filas (4 bytes)
//pieza T en binario
    unsigned char piezaT[4] = {
    0b00000000,
    0b00011100, // ###
    0b00001000, //  #
    0b00000000
};
// pieza [] en binario
    unsigned char pieza0[4] = {
        0b00000000,
        0b00011000, //   ##
        0b00011000, //   ##
        0b00000000
};
//pieza | en binario
    unsigned char piezaI[4] = {
        0b00000000,
        0b00111100, // #### (Cuatro bloques seguidos)
        0b00000000,
        0b00000000
    };
    unsigned char piezaS[4] = {
        0b00000000,
        0b00001100, //      ##
        0b00011000, //     ##
        0b00000000
    };

    unsigned char piezaL[4] = {
        0b00000000,
        0b00010000, //  #
        0b00010000, //  #
        0b00011000  //  ##
    };

// todas las piezas estan listas T,O,I,S,L
    // Agrúpalas todas en un solo lugar
    unsigned char* catalogo[] = { piezaT, piezaO, piezaI, piezaL, piezaS, };
    int totalPiezas = 5;

// funciones
    void imprimirTablero(unsigned char* tablero, int alto, int ancho, unsigned char* pieza, int pFila, int pCol);
    bool hayColision(unsigned char* tablero, int alto, unsigned char* pieza, int pFila, int pCol);

int main(){
    srand(time(0));

    //ancho y alto del tabblero
    cout << "ancho (multiplo de 8): " ;
    cin >> ancho;
    cout << "alto (8): " ;
    cin >> alto;
    if (ancho % 8 != 0 || ancho < 8 || alto < 8) {
        cout << "Dimensiones no validas." << endl;
        return 1;
    }


        // 2. Memoria Dinámica
        // Usamos unsigned char porque cada uno guarda 8 bits (un bloque del ancho)
        unsigned char* tablero = new unsigned char[alto];
        for (int i = 0; i < alto; i++) tablero[i] = 0; // Limpiar tablero

        // Nueva lógica aleatoria
        int indice = rand() % totalPiezas;    // Elige el número al azar
        unsigned char* piezaActual = catalogo[indice]; // Usa el número para sacar la pieza

        int piezaFila = 0;
        int piezaCol = (ancho / 2) - 2;
        unsigned char* piezaActual = catalogo[indice];

        char accion;
        bool jugando = true;



