#include "Bala.h"
#include "../../lib/miniwin.h"
#include "../jugador/skin/ColorFlyweight.h"

using namespace miniwin;

Bala::Bala(int x, int y, int velocidad, const std::string& color)
    : posX(x), posY(y), velocidad(velocidad), color(color) {}

void Bala::mover() {
    posY += velocidad;
}

void Bala::dibujar() const {
    ColorFlyweight::getInstance().setColor_Bala(color);
    rectangulo_lleno(posX, posY, posX + 5, posY + 10);
}

bool Bala::fueraDePantalla(int anchoPantalla, int altoPantalla) const {
    return posY < 0 || posY > altoPantalla || posX < 0 || posX > anchoPantalla;
}

bool Bala::colisionaCon(int x, int y, int ancho, int alto) const {
    return posX < x + ancho && posX + 5 > x && posY < y + alto && posY + 10 > y;
}