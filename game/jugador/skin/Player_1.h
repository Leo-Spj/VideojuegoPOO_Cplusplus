//
// Created by Leo on 01/10/2024.
//

#ifndef PLAYER_1_H
#define PLAYER_1_H

#include <string>
#include <vector>

class Player_1 {
public:
    Player_1();
    void dibujar();

private:
    void colores(const std::string& color);
    void dibujaCuadrado(int a, int b, const std::string& colorRelleno);
    void dibujaFila(int fila, const std::vector<std::string>& colores);


};

#endif // PLAYER_1_H