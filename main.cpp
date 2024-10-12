#include "lib/miniwin.h"
#include "game/escenario/Fondo.h"

using namespace miniwin;

int main() {
    Fondo fondo;
    fondo.redimensionar();

    while (true) {

        borra();

        fondo.dibujar();

        refresca();

        espera(30);
    }

    return 0;
}
