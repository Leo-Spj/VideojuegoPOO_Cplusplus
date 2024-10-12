//
// Created by Leo on 01/10/2024.
//

#include "Fondo.h"
#include "../../lib/miniwin.h"

using namespace miniwin;

Fondo::Fondo() : escalado(5) {
    anchoPantalla = 200 * escalado;
    altoPantalla = 150 * escalado;
    player = Player_1(anchoPantalla, altoPantalla);
}

void Fondo::redimensionar() {
    vredimensiona(anchoPantalla, altoPantalla);
}

void Fondo::dibujar() {
    int t = tecla();

    if (t == IZQUIERDA) {
        player.mover(-1, 0);
    } else if (t == DERECHA) {
        player.mover(1, 0);
    } else if (t == ARRIBA) {
        player.mover(0, -1);
    } else if (t == ABAJO) {
        player.mover(0, 1);
    }

    player.dibujar();
}

