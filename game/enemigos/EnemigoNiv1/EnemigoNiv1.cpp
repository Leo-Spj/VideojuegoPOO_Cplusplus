#include "EnemigoNiv1.h"
#include "../../../lib/miniwin.h"
#include "../../jugador/skin/ColorFlyweight.h"

using namespace miniwin;

EnemigoNiv1::EnemigoNiv1() : Enemigo(0, 0, 0), direccionX(1), direccionY(1) {}

EnemigoNiv1::EnemigoNiv1(int ancho, int alto)
    : Enemigo(0, 0, 5), altoFigura(46), anchoFigura(30), anchoPantalla(ancho), altoPantalla(alto), direccionX(1), direccionY(1) {
}

void EnemigoNiv1::dibujaCuadrado(int a, int b, const std::string& colorRelleno, int c, int d) {
    const int x = a * escalado;
    const int y = b * escalado;

    ColorFlyweight::getInstance().setColor_Enemigo1(colorRelleno);
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
    int velocidad = 1.75;

    int dx = direccionX * velocidad;

    if (posX + dx < 0 || posX + dx > (anchoPantalla / escalado) - anchoFigura) {
        direccionX = -direccionX;
    }

    moverConParametros(direccionX * velocidad, 0);
}

void EnemigoNiv1::moverConParametros(int dx, int dy) {
    int nuevoPosX = posX + dx;
    int nuevoPosY = posY + dy;

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
}

void EnemigoNiv1::dibujar() {
    dibujaFila(0, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(1, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(2, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(3, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(4, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(5, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "c_1", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(6, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "", "c_1", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(7, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "c_1", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(8, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(9, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "c_1", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(10, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "c_1", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(11, {"", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "c_1", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(12, {"", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(13, {"", "", "", "", "", "", "", "", "", "", "", "", "c_1", "c_1", "", "", "", "", "", "", "", "", "", "c_1", "c_1", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(14, {"", "", "", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(15, {"", "", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(16, {"", "", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", ""});
dibujaFila(17, {"", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "c_1", "", "", "", "", "", "", "", ""});
dibujaFila(18, {"", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", ""});
dibujaFila(19, {"", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", ""});
dibujaFila(20, {"", "", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "c_1", "", "", "", "", "", ""});
dibujaFila(21, {"", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "c_1", "c_1", "", "", "", "", ""});
dibujaFila(22, {"", "", "", "", "", "", "", "", "c_1", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(23, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(24, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(25, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(26, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});
dibujaFila(27, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""});


    for (const auto& bala : balas) {
        bala.dibujar();
    }
}

void EnemigoNiv1::disparar() {
    auto ahora = std::chrono::steady_clock::now();
    std::chrono::duration<double> tiempoTranscurrido = ahora - ultimoDisparo;

    if (tiempoTranscurrido.count() >= 2.0) {
        balas.emplace_back(posX * escalado + (anchoFigura * escalado) / 2, posY * escalado + altoFigura * escalado, 30, "c_1");
        ultimoDisparo = ahora;
    }
}

void EnemigoNiv1::actualizarBalas() {
    for (auto it = balas.begin(); it != balas.end();) {
        it->mover();
        if (it->fueraDePantalla(anchoPantalla, altoPantalla)) {
            it = balas.erase(it);
        } else {
            ++it;
        }
    }
}