// Created by Leo on 01/10/2024.

#include "Player_1.h"
#include "../../../lib/miniwin.h"
#include <vector>
#include <string>

using namespace miniwin;

Player_1::Player_1() : posX(0), posY(0), escalado(5), pintarBorde(true) {}

Player_1::Player_1(int ancho, int alto)
    : posX(0), posY(0), escalado(5), pintarBorde(true),
      anchoPantalla(ancho), altoPantalla(alto) {
}

void Player_1::colores(const std::string& color) {
    if (color == "c_1") {
        color_rgb(157, 133, 133);
    } else if (color == "c_2") {
        color_rgb(240, 157, 157);
    }
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
    dibujaFila(0, {"", "", "", "", "", "", "", ""});
    dibujaFila(1, {"", "", "", "c_1", "c_1", "", "", ""});
    dibujaFila(2, {"", "", "c_1", "c_1", "c_1", "c_1", "", ""});
    dibujaFila(3, {"", "c_1", "c_1", "c_1", "c_1", "c_1", "c_1", ""});
    dibujaFila(4, {"c_1", "c_1", "c_2", "c_1", "c_1", "c_2", "c_1", "c_1"});
    dibujaFila(5, {"c_1", "", "c_2", "", "", "c_2", "", "c_1"});
}

void Player_1::mover(int dx, int dy) {
    posX += dx;
    posY += dy;
}
