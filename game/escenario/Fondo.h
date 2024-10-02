//
// Created by Leo on 01/10/2024.
//

#ifndef FONDO_H
#define FONDO_H

class Fondo {
public:
    Fondo(int escalado);
    void redimensionar();

private:
    int anchoPantalla;
    int altoPantalla;
    int escalado;
};

#endif // FONDO_H