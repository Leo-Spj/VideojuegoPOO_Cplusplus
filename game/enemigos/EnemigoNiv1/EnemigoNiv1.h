//
// Created by Leo on 12/10/2024.
//

#ifndef ENEMIGONIV1_H
#define ENEMIGONIV1_H

#include "../Enemigo.h"
#include <vector>
#include <string>

class EnemigoNiv1 : public Enemigo {
public:
    EnemigoNiv1();
    EnemigoNiv1(int x, int y, int escalado);
    void mover() override;
    void dibujar() override;
    void setEscalado(int nuevoEscalado);

private:
    void colores(const std::string& color);
    void dibujaCuadrado(int a, int b, const std::string& colorRelleno, int c, int d);
    void dibujaFila(int fila, const std::vector<std::string>& colores);
};

#endif // ENEMIGONIV1_H