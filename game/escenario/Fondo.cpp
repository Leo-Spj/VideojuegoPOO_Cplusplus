//
// Created by Leo on 01/10/2024.
//

#include "Fondo.h"
#include "../../lib/miniwin.h"
#include <windows.h>

using namespace miniwin;

Fondo::Fondo() : escalado(5) {
    anchoPantalla = 200 * escalado;
    altoPantalla = 150 * escalado;
    player = Player_1(anchoPantalla, altoPantalla);

    // Centrando al jugador en la pantalla
    int bajarImagen =  13;
    player.mover((anchoPantalla / (2 * player.getEscalado())) - (player.getColumnaMayor()/2) , (altoPantalla / (2 * player.getEscalado())) + (player.getFilaMayor()/2) + bajarImagen);

}

void Fondo::redimensionar() {
    vredimensiona(anchoPantalla, altoPantalla);
}


// no se usa la libreria miniwin para el movimiento dado que no puse lograr movimientos diagonales
void Fondo::dibujar() {
    bool izquierda = GetAsyncKeyState(VK_LEFT) & 0x8000;
    bool derecha = GetAsyncKeyState(VK_RIGHT) & 0x8000;
    bool arriba = GetAsyncKeyState(VK_UP) & 0x8000;
    bool abajo = GetAsyncKeyState(VK_DOWN) & 0x8000;

    if (izquierda && arriba) {
        player.mover(-1, 0);
        player.mover(0, -1);
    } else if (izquierda && abajo) {
        player.mover(-1, 0);
        player.mover(0, 1);
    } else if (derecha && arriba) {
        player.mover(1, 0);
        player.mover(0, -1);
    } else if (derecha && abajo) {
        player.mover(1, 0);
        player.mover(0, 1);
    } else if (izquierda) {
        player.mover(-1, 0);
    } else if (derecha) {
        player.mover(1, 0);
    } else if (arriba) {
        player.mover(0, -1);
    } else if (abajo) {
        player.mover(0, 1);
    }

    player.dibujar();
}

