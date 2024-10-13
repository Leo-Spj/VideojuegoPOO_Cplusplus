//
// Created by Leo on 12/10/2024.
//

#ifndef ENEMIGO_H
#define ENEMIGO_H

class Enemigo {
public:
    Enemigo(int x, int y, int escalado);
    virtual void mover() = 0;
    virtual void dibujar() = 0;

protected:
    int posX, posY;
    int escalado;
};

#endif // ENEMIGO_H