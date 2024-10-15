#ifndef PLAYER_1_H
#define PLAYER_1_H

#include <string>
#include <vector>
#include "../../utilidades/Bala.h"

class Player_1 {
public:
    Player_1();
    Player_1(int ancho, int alto);
    void dibujar();
    void mover(int dx, int dy);
    void disparar();
    void actualizarBalas();
    int getEscalado() const { return escalado; }
    int getColumnaMayor() const { return anchoFigura; }
    int getFilaMayor() const { return altoFigura; }
    const std::vector<Bala>& getBalas() const { return balas; }
    std::vector<Bala>& getBalas() { return balas; } // Non-const version


private:
    void colores(const std::string& color);
    void dibujaCuadrado(int a, int b, const std::string& colorRelleno, int c, int d);
    void dibujaFila(int fila, const std::vector<std::string>& colores);

    int posX, posY;
    int escalado;
    bool pintarBorde;
    int anchoPantalla;
    int altoPantalla;
    int altoFigura;
    int anchoFigura;
    std::vector<Bala> balas;
};

#endif // PLAYER_1_H