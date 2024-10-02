//
// Created by Leo on 01/10/2024.
//

#ifndef FONDO_H
#define FONDO_H

#include "game/jugador/skin/Player_1.h"

class Fondo {
public:
    Fondo();
    void redimensionar();
    void dibujar();

private:
    int anchoPantalla;
    int altoPantalla;
    int escalado;
    Player_1 player;
};

#endif // FONDO_H