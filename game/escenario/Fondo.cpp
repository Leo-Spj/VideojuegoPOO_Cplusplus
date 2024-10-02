//
// Created by Leo on 01/10/2024.
//

#include "Fondo.h"
#include "../../lib/miniwin.h"

using namespace miniwin;

Fondo::Fondo(int escalado) : escalado(escalado) {
    anchoPantalla = 450 * escalado;
    altoPantalla = 300 * escalado;
}

void Fondo::redimensionar() {
    vredimensiona(anchoPantalla, altoPantalla);
}