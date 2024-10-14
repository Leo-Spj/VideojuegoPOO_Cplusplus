
#ifndef BALA_H
#define BALA_H

#include <string>

class Bala {
public:
    Bala(int x, int y, int velocidad, const std::string& color);
    void mover();
    void dibujar() const;
    bool fueraDePantalla(int anchoPantalla, int altoPantalla) const;

private:
    int posX, posY;
    int velocidad;
    std::string color;
};

#endif // BALA_H
