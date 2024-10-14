#include "EnemigoNiv1.h"
#include "../../../lib/miniwin.h"

using namespace miniwin;

EnemigoNiv1::EnemigoNiv1() : Enemigo(0, 0, 0), direccionX(1), direccionY(1) {}

EnemigoNiv1::EnemigoNiv1(int ancho, int alto)
    : Enemigo(0, 0, 15), filaMayor(5), columnaMayor(6), anchoPantalla(ancho), altoPantalla(alto), direccionX(1), direccionY(1) {
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
    int dx = direccionX;

    if (posX + dx < 0 || posX + dx > (anchoPantalla / escalado) - columnaMayor) {
        direccionX = -direccionX;
    }

    moverConParametros(direccionX, 0);
}

void EnemigoNiv1::moverConParametros(int dx, int dy) {
    int nuevoPosX = posX + dx;
    int nuevoPosY = posY + dy;

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
}

void EnemigoNiv1::dibujar() {
    dibujaFila(0, {"", "c_2", "", "", "c_2", ""});
    dibujaFila(1, {"c_1", "c_2", "", "", "c_2", "c_1"});
    dibujaFila(2, {"c_1", "c_1", "c_3", "c_3", "c_1", "c_1"});
    dibujaFila(3, {"", "c_1", "c_1", "c_1", "c_1", ""});
    dibujaFila(4, {"", "", "c_1", "c_1", "", ""});
    dibujaFila(5, {"", "", "c_1", "c_1", "", ""});

    for (const auto& bala : balas) {
        bala.dibujar();
    }
}

void EnemigoNiv1::disparar() {
    auto ahora = std::chrono::steady_clock::now();
    std::chrono::duration<double> tiempoTranscurrido = ahora - ultimoDisparo;

    if (tiempoTranscurrido.count() >= 2.0) {
        balas.emplace_back(posX * escalado + (columnaMayor * escalado) / 2, posY * escalado + filaMayor * escalado, 5, "c_1");
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