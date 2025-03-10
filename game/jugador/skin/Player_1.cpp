#include "Player_1.h"
#include "ColorFlyweight.h"
#include "../../../lib/miniwin.h"
#include <vector>
#include <string>

using namespace miniwin;

Player_1::Player_1() : vivo(true) { }

Player_1::Player_1(int ancho, int alto)
    : posX(0), posY(0), altoFigura(46), anchoFigura(30), escalado(6), pintarBorde(false), anchoPantalla(ancho), altoPantalla(alto), vivo(true) {
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
    if (!vivo) return; // No dibujar si el jugador está muerto

    // Dibujando
    dibujaFila(0, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_6", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(1, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_6", "c_1", "c_6", "", "", "", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(2, {"", "", "", "", "", "", "", "", "", "", "", "", "", "c_6", "c_1", "c_1", "c_1", "c_6", "", "", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(3, {"", "", "", "", "", "", "", "", "", "", "", "", "", "c_6", "c_1", "c_1", "c_1", "c_6", "", "", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(4, {"", "", "", "", "", "", "", "", "", "", "", "", "c_6", "c_1", "c_1", "c_1", "c_1", "c_1", "c_6", "", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(5, {"", "", "", "", "", "", "", "", "", "", "", "", "c_6", "c_1", "c_1", "c_1", "c_1", "c_1", "c_6", "", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(6, {"", "", "", "", "", "", "", "", "", "", "", "c_6", "c_1", "c_1", "c_1", "c_1", "c_1", "c_1", "c_1", "c_6", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(7, {"", "", "", "", "", "", "", "", "", "", "", "c_6", "c_1", "c_1", "c_1", "c_1", "c_1", "c_1", "c_1", "c_6", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(8, {"", "", "", "", "", "", "", "", "", "", "c_6", "c_2", "c_6", "c_6", "c_6", "c_6", "c_6", "c_6", "c_6", "c_2", "c_6", "", "", "", "", "", "", "", "", ""});
    dibujaFila(9, {"", "", "", "", "", "", "", "", "", "", "c_6", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_6", "", "", "", "", "", "", "", "", ""});
    dibujaFila(10, {"", "", "", "", "", "", "", "", "", "", "c_6", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_6", "", "", "", "", "", "", "", "", ""});
    dibujaFila(11, {"", "", "", "", "", "", "", "", "", "", "c_6", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_6", "", "", "", "", "", "", "", "", ""});
    dibujaFila(12, {"", "", "", "", "", "", "", "", "", "", "c_6", "c_2", "c_2", "c_6", "c_6", "c_6", "c_6", "c_6", "c_2", "c_2", "c_6", "", "", "", "", "", "", "", "", ""});
    dibujaFila(13, {"", "", "", "", "", "", "", "", "", "", "c_6", "c_2", "c_6", "c_8", "c_7", "c_7", "c_7", "c_7", "c_6", "c_2", "c_6", "", "", "", "", "", "", "", "", ""});
    dibujaFila(14, {"", "", "", "", "", "", "", "", "", "", "c_6", "c_2", "c_6", "c_8", "c_7", "c_7", "c_7", "c_7", "c_6", "c_2", "c_6", "", "", "", "", "", "", "", "", ""});
    dibujaFila(15, {"", "", "", "", "", "", "", "", "", "", "c_6", "c_2", "c_6", "c_8", "c_7", "c_7", "c_7", "c_7", "c_6", "c_2", "c_6", "", "", "", "", "", "", "", "", ""});
    dibujaFila(16, {"", "", "", "", "", "", "", "", "", "", "c_6", "c_2", "c_6", "c_7", "c_8", "c_7", "c_7", "c_7", "c_6", "c_2", "c_6", "", "", "", "", "", "", "", "", ""});
    dibujaFila(17, {"", "", "", "", "", "", "", "", "", "", "c_6", "c_2", "c_6", "c_7", "c_8", "c_7", "c_7", "c_7", "c_6", "c_2", "c_6", "", "", "", "", "", "", "", "", ""});
    dibujaFila(18, {"", "", "", "", "", "", "", "", "", "", "c_6", "c_2", "c_6", "c_7", "c_7", "c_8", "c_7", "c_7", "c_6", "c_2", "c_6", "", "", "", "", "", "", "", "", ""});
    dibujaFila(19, {"", "", "", "", "", "", "", "", "", "", "c_6", "c_2", "c_6", "c_7", "c_7", "c_7", "c_7", "c_7", "c_6", "c_2", "c_6", "", "", "", "", "", "", "", "", ""});
    dibujaFila(20, {"", "", "", "", "", "", "", "c_6", "c_6", "c_6", "c_6", "c_2", "c_2", "c_6", "c_6", "c_6", "c_6", "c_6", "c_2", "c_2", "c_6", "c_6", "c_6", "c_6", "", "", "", "", "", ""});
    dibujaFila(21, {"", "", "", "", "", "", "c_6", "c_9", "c_1", "c_1", "c_6", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_6", "c_1", "c_1", "c_9", "c_6", "", "", "", "", ""});
    dibujaFila(22, {"", "", "", "", "", "", "c_6", "c_9", "c_1", "c_1", "c_6", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_6", "c_1", "c_1", "c_9", "c_6", "", "", "", "", ""});
    dibujaFila(23, {"", "", "", "", "", "c_6", "c_9", "c_1", "c_1", "c_1", "c_6", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_6", "c_1", "c_1", "c_1", "c_9", "c_6", "", "", "", ""});
    dibujaFila(24, {"", "", "", "", "c_6", "c_9", "c_1", "c_1", "c_1", "c_1", "c_6", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_6", "c_1", "c_1", "c_1", "c_1", "c_9", "c_6", "", "", ""});
    dibujaFila(25, {"", "", "", "c_6", "c_9", "c_1", "c_1", "c_1", "c_1", "c_1", "c_6", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_6", "c_1", "c_1", "c_1", "c_1", "c_1", "c_9", "c_6", "", ""});
    dibujaFila(26, {"", "", "c_6", "c_9", "c_1", "c_1", "c_1", "c_1", "c_1", "c_1", "c_6", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_6", "c_1", "c_1", "c_1", "c_1", "c_1", "c_1", "c_9", "c_6", ""});
    dibujaFila(27, {"", "", "c_6", "c_9", "c_1", "c_1", "c_1", "c_1", "c_1", "c_1", "c_6", "c_6", "c_6", "c_6", "c_6", "c_6", "c_6", "c_6", "c_6", "c_6", "c_6", "c_1", "c_1", "c_1", "c_1", "c_1", "c_1", "c_9", "c_6", ""});
    dibujaFila(28, {"", "c_6", "c_9", "c_1", "c_1", "c_1", "c_1", "c_1", "c_6", "c_6", "", "c_6", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_6", "", "c_6", "c_6", "c_1", "c_1", "c_1", "c_1", "c_1", "c_9", "c_6"});
    dibujaFila(29, {"", "", "c_6", "c_6", "c_6", "c_6", "c_6", "c_6", "", "", "", "c_6", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_2", "c_6", "", "", "", "c_6", "c_6", "c_6", "c_6", "c_6", "c_6", ""});
    dibujaFila(30, {"", "", "c_5", "c_3", "c_3", "c_3", "c_5", "", "", "", "", "", "c_6", "c_6", "c_6", "c_6", "c_6", "c_6", "c_6", "", "", "", "", "", "c_5", "c_3", "c_3", "c_3", "c_5", ""});
    dibujaFila(31, {"", "c_5", "c_3", "c_3", "c_3", "c_3", "c_3", "c_5", "", "", "", "c_5", "c_4", "c_3", "c_3", "c_3", "c_3", "c_3", "c_4", "c_5", "", "", "", "c_5", "c_3", "c_3", "c_3", "c_3", "c_3", "c_5"});
    dibujaFila(32, {"", "c_5", "c_3", "c_3", "c_3", "c_3", "c_3", "c_5", "", "", "", "c_5", "c_4", "c_3", "c_3", "c_3", "c_3", "c_3", "c_4", "c_5", "", "", "", "c_5", "c_3", "c_3", "c_3", "c_3", "c_3", "c_5"});
    dibujaFila(33, {"", "", "c_5", "c_3", "c_3", "c_3", "c_5", "", "", "", "c_5", "c_4", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_4", "c_5", "", "", "", "c_5", "c_3", "c_3", "c_3", "c_5", ""});
    dibujaFila(34, {"", "", "c_5", "c_3", "c_3", "c_3", "c_5", "", "", "", "c_5", "c_4", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_4", "c_5", "", "", "", "c_5", "c_3", "c_3", "c_3", "c_5", ""});
    dibujaFila(35, {"", "", "", "c_5", "c_3", "c_5", "", "", "", "c_5", "c_4", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_4", "c_5", "", "", "", "c_5", "c_3", "c_5", "", ""});
    dibujaFila(36, {"", "", "", "c_5", "c_3", "c_5", "", "", "", "c_5", "c_4", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_4", "c_5", "", "", "", "c_5", "c_3", "c_5", "", ""});
    dibujaFila(37, {"", "", "", "", "c_5", "", "", "", "", "", "c_5", "c_4", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_4", "c_5", "", "", "", "", "", "c_5", "", "", ""});
    dibujaFila(38, {"", "", "", "", "", "", "", "", "", "", "c_5", "c_4", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_3", "c_4", "c_5", "", "", "", "", "", "", "", "", ""});
    dibujaFila(39, {"", "", "", "", "", "", "", "", "", "", "", "c_5", "c_4", "c_3", "c_3", "c_3", "c_3", "c_3", "c_4", "c_5", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(40, {"", "", "", "", "", "", "", "", "", "", "", "c_5", "c_4", "c_3", "c_3", "c_3", "c_3", "c_3", "c_4", "c_5", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(41, {"", "", "", "", "", "", "", "", "", "", "", "", "c_5", "c_4", "c_3", "c_3", "c_3", "c_4", "c_5", "", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(42, {"", "", "", "", "", "", "", "", "", "", "", "", "", "c_5", "c_4", "c_3", "c_4", "c_5", "", "", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(43, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_5", "c_4", "c_5", "", "", "", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(44, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_5", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
    dibujaFila(45, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});

    for (const auto& bala : balas) {
        bala.dibujar();
    }

    // Mostrar nombre debajo de la nave
    float x = posX * escalado;
    float y = (posY + altoFigura) * escalado ; // Ajustar la posición Y para que esté debajo de la nave
    texto(x, y, "Leonardo Espejo U21315835");
}

void Player_1::mover(int dx, int dy) {
    if (!vivo) return; // No mover si el jugador está muerto

    int nuevoPosX = posX + dx;
    int nuevoPosY = posY + dy;

    // Limitar el movimiento dentro de los límites de la pantalla
    if (nuevoPosX < 0) {
        posX = 0;
    } else if (nuevoPosX > (anchoPantalla / escalado) - anchoFigura) {
        posX = (anchoPantalla / escalado) - anchoFigura;
    } else {
        posX = nuevoPosX;
    }

    if (nuevoPosY < 0) {
        posY = 0;
    } else if (nuevoPosY > (altoPantalla / escalado) - altoFigura) {
        posY = (altoPantalla / escalado) - altoFigura;
    } else {
        posY = nuevoPosY;
    }

    if (tecla() == ESPACIO) {
        disparar();
    }
}

void Player_1::disparar() {
    if (!vivo) return; // No disparar si el jugador está muerto

    balas.emplace_back(posX * escalado + (anchoFigura * escalado) / 2, posY * escalado, -30, "c_1");
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