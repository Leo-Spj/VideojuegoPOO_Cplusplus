#include "lib/miniwin.h"
#include "game/escenario/Fondo.h"

using namespace miniwin;

int main() {
    Fondo fondo;
    fondo.redimensionar();

    while (true) {
        borra();
        fondo.movimientoJugador();
        fondo.actualizarEnemigos();
        refresca();
        espera(15);
    }

    return 0;
}