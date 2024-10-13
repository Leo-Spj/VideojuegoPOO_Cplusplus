//
// Created by Leo on 12/10/2024.
//


#include "EnemigoNiv1.h"
#include "../../../lib/miniwin.h"

using namespace miniwin;

EnemigoNiv1::EnemigoNiv1() : Enemigo(0, 0, 20) {}

EnemigoNiv1::EnemigoNiv1(int x, int y, int escalado) : Enemigo(x, y, escalado) {}

void EnemigoNiv1::setEscalado(int nuevoEscalado) {
    escalado = nuevoEscalado;
}

void EnemigoNiv1::colores(const std::string& color) {
    if (color == "c_1") {
        color_rgb(255, 0, 0); // Red
    } else if (color == "c_2") {
        color_rgb(0, 255, 0); // Green
    } else if (color == "c_3") {
        color_rgb(0, 0, 255); // Blue
    }
}

void EnemigoNiv1::dibujaCuadrado(int a, int b, const std::string& colorRelleno, int c, int d) {
    const int x = a * escalado;
    const int y = b * escalado;

    colores(colorRelleno);
    rectangulo_lleno(x + c, y + d, x + escalado + c, y + escalado + d);
}

void EnemigoNiv1::dibujaFila(int fila, const std::vector<std::string>& colores) {
    for (int i = 0; i < colores.size(); ++i) {
        if (!colores[i].empty()) {
            dibujaCuadrado(i + posX, fila + posY, colores[i], 0, 0);
        }
    }
}

void EnemigoNiv1::mover() {
    posX += 1; // Simple movement to the right
    if (posX > 200) posX = 0; // Reset position if it goes off-screen
}

void EnemigoNiv1::dibujar() {
    dibujaFila(0, {"", "c_2", "", "", "c_2", ""});
    dibujaFila(1, {"c_1", "c_2", "", "", "c_2", "c_1"});
    dibujaFila(2, {"c_1", "c_1", "c_3", "c_3", "c_1", "c_1"});
    dibujaFila(3, {"", "c_1", "c_1", "c_1", "c_1", ""});
    dibujaFila(4, {"", "", "c_1", "c_1", "", ""});
    dibujaFila(5, {"", "", "c_1", "c_1", "", ""});
}