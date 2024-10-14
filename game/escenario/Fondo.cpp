//
// Created by Leo on 01/10/2024.
//

#include "Fondo.h"
#include "../../lib/miniwin.h"
#include <windows.h>
#include "../enemigos/EnemigoNiv1/EnemigoNiv1.h"

using namespace miniwin;


Fondo::Fondo() : escalado(5) {
    anchoPantalla = 200 * escalado;
    altoPantalla = 150 * escalado;
    player = Player_1(anchoPantalla, altoPantalla);
    // Centrando al jugador en la pantalla
    int bajarImagen =  13;
    player.mover((anchoPantalla / (2 * player.getEscalado())) - (player.getColumnaMayor()/2) , (altoPantalla / (2 * player.getEscalado())) + (player.getFilaMayor()/2) + bajarImagen);

    // Añadir enemigos
    EnemigoNiv1* enemigo1 = new EnemigoNiv1(anchoPantalla, altoPantalla);
    enemigo1->moverConParametros(20, 1);
    enemigos.push_back(enemigo1);

    EnemigoNiv1* enemigo2 = new EnemigoNiv1(anchoPantalla, altoPantalla);
    enemigo2->moverConParametros(40, 6);
    enemigos.push_back(enemigo2);
}

Fondo::~Fondo() {
    for (auto enemigo : enemigos) {
        delete enemigo;
    }
}

void Fondo::redimensionar() {
    vredimensiona(anchoPantalla, altoPantalla);
}

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

void Fondo::actualizarEnemigos() {
    for (auto enemigo : enemigos) {
        enemigo->mover();
        enemigo->dibujar();
    }
}
