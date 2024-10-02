#include "lib/miniwin.h"
#include "game/escenario/Fondo.h"

using namespace miniwin;

int main() {
    Fondo fondo;
    fondo.redimensionar();
    fondo.dibujar();

    refresca();
    return 0;
}