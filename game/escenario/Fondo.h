//
// Created by Leo on 01/10/2024.
//

// Fondo.h

#ifndef FONDO_H
#define FONDO_H

#include "game/jugador/skin/Player_1.h"
#include <vector>
#include "../enemigos/Enemigo.h"

class Fondo {
public:
    Fondo();
    ~Fondo();
    void redimensionar();
    void movimientoJugador();
    void actualizarEnemigos();

private:
    int anchoPantalla;
    int altoPantalla;
    int escalado;
    Player_1 player;
    std::vector<Enemigo*> enemigos;
};

#endif // FONDO_H