#include "lib/miniwin.h"
#include "game/escenario/Fondo.h"

using namespace miniwin;

int main() {
    Fondo fondo;
    fondo.redimensionar();

    while (true) {

        borra();

        fondo.movimientoJugador();

        refresca();

        espera(10);
    }

    return 0;
}
