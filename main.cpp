#include <iostream>
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

// funciones
    void imprimirTablero(unsigned char* tablero, int alto, int ancho, unsigned char* pieza, int pFila, int pCol);
    bool hayColision(unsigned char* tablero, int alto, unsigned char* pieza, int pFila, int pCol);

int main(){
    //ancho y alto del tabblero
    cout << "ancho (multiplo de 8): " ;
    cin >> ancho;
    cout << "alto (8): " ;
    cin >> alto;
    if (ancho % 8 != 0 || ancho < 8 || alto < 8) {
        cout << "Dimensiones no validas." << endl;
        return 1;


