#include "lib/miniwin.h"
#include <string>

using namespace miniwin;
using namespace std;

const int escalado = 3;
const bool pintarBorde = false;

#include "game/escenario/Fondo.h"

int main() {
    int escalado = 2; // Ejemplo de valor para escalado
    Fondo fondo(escalado);
    fondo.redimensionar();

    // Resto del código...
    return 0;
}