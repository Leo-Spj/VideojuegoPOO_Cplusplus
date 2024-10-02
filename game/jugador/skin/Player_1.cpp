//
// Created by Leo on 01/10/2024.
//

#include "Player_1.h"
#include "../../../lib/miniwin.h"

using namespace miniwin;

Player_1::Player_1() {}

const int escalado = 15;
const bool pintarBorde = false;

void Player_1::colores(const std::string& color) {
    if (color == "c_1") {
        color_rgb(157, 133, 133);
    }
    if (color == "c_2") {
        color_rgb(240, 157, 157);
    }
}

void Player_1::dibujaCuadrado(int a, int b, const std::string& colorRelleno) {
    if (colorRelleno.empty()) return;
    const int x = a * escalado;
    const int y = b * escalado;
    colores(colorRelleno);
    rectangulo_lleno(x, y, x + escalado, y + escalado);
    if (pintarBorde) {
        color_rgb(100, 100, 100);
        linea(x, y, x, y + escalado);
        linea(x, y + escalado, x + escalado, y + escalado);
        linea(x + escalado, y + escalado, x + escalado, y);
        linea(x + escalado, y, x, y);
    }
}

void Player_1::dibujaFila(int fila, const std::vector<std::string>& colores) {
    for (int i = 0; i < colores.size(); ++i) {
        if (!colores[i].empty()) {
            dibujaCuadrado(i, fila, colores[i]);
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