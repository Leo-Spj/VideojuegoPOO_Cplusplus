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
void Fondo::movimientoJugador() {
    bool izquierda = GetAsyncKeyState(VK_LEFT) & 0x8000;
    bool derecha = GetAsyncKeyState(VK_RIGHT) & 0x8000;
    bool arriba = GetAsyncKeyState(VK_UP) & 0x8000;
    bool abajo = GetAsyncKeyState(VK_DOWN) & 0x8000;

    int dx = 0, dy = 0;

    if (izquierda) dx -= 1;
    if (derecha) dx += 1;
    if (arriba) dy -= 1;
    if (abajo) dy += 1;


    player.mover(dx, dy);
    player.dibujar();
}

