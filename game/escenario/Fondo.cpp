//
// Created by Leo on 01/10/2024.
//

#include "Fondo.h"
#include "../../lib/miniwin.h"

using namespace miniwin;

Fondo::Fondo() : escalado(5) {
    anchoPantalla = 200 * escalado;
    altoPantalla = 150 * escalado;
}

void Fondo::redimensionar() {
    vredimensiona(anchoPantalla, altoPantalla);
}

void Fondo::dibujar() {
    player.dibujar();
}