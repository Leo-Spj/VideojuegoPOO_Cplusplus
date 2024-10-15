#include "Player_1.h"
#include "ColorFlyweight.h"
#include "../../../lib/miniwin.h"
#include <vector>
#include <string>

using namespace miniwin;

Player_1::Player_1() { }

Player_1::Player_1(int ancho, int alto)
    : posX(0), posY(0), filaMayor(5), columnaMayor(8), escalado(20), pintarBorde(true), anchoPantalla(ancho), altoPantalla(alto) {
}

void Player_1::colores(const std::string& color) {
    ColorFlyweight::getInstance().setColor_Player1(color);
}

void Player_1::dibujaCuadrado(int a, int b, const std::string& colorRelleno, int c, int d) {
    const int x = a * escalado;
    const int y = b * escalado;

    colores(colorRelleno);
    rectangulo_lleno(x + c, y + d, (x + escalado) + c, (y + escalado) + d);

    if (pintarBorde) {
        color_rgb(100, 100, 100);
        linea(x + c, y + d, x + c, y + escalado + d);
        linea(x + c, y + escalado + d, x + escalado + c, y + escalado + d);
        linea(x + escalado + c, y + escalado + d, x + escalado + c, y + d);
        linea(x + escalado + c, y + d, x + c, y + d);
    }
}

void Player_1::dibujaFila(int fila, const std::vector<std::string>& colores) {
    for (int i = 0; i < colores.size(); ++i) {
        if (!colores[i].empty()) {
            dibujaCuadrado(i + posX, fila + posY, colores[i], 0, 0);
        }
    }
}

void Player_1::dibujar() {
    dibujaFila(0, {"", "", "", "c_1", "c_1", "", "", ""});
    dibujaFila(1, {"", "", "c_1", "c_1", "c_1", "c_1", "", ""});
    dibujaFila(2, {"", "c_1", "c_1", "c_1", "c_1", "c_1", "c_1", ""});
    dibujaFila(3, {"c_1", "c_1", "c_2", "c_1", "c_1", "c_2", "c_1", "c_1"});
    dibujaFila(4, {"c_1", "", "c_2", "", "", "c_2", "", "c_1"});

    for (const auto& bala : balas) {
        bala.dibujar();
    }
}

void Player_1::mover(int dx, int dy) {
    int nuevoPosX = posX + dx;
    int nuevoPosY = posY + dy;

    // Limitar el movimiento dentro de los límites de la pantalla
    if (nuevoPosX < 0) {
        posX = 0;
    } else if (nuevoPosX > (anchoPantalla / escalado) - columnaMayor) {
        posX = (anchoPantalla / escalado) - columnaMayor;
    } else {
        posX = nuevoPosX;
    }

    if (nuevoPosY < 0) {
        posY = 0;
    } else if (nuevoPosY > (altoPantalla / escalado) - filaMayor) {
        posY = (altoPantalla / escalado) - filaMayor;
    } else {
        posY = nuevoPosY;
    }

    if (tecla() == ESPACIO) {
        disparar();
    }
}

void Player_1::disparar() {
    balas.emplace_back(posX * escalado + (columnaMayor * escalado) / 2, posY * escalado, -5, "c_1");
}

void Player_1::actualizarBalas() {
    for (auto it = balas.begin(); it != balas.end();) {
        it->mover();
        if (it->fueraDePantalla(anchoPantalla, altoPantalla)) {
            it = balas.erase(it);
        } else {
            ++it;
        }
    }
}