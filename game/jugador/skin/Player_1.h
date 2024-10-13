#ifndef PLAYER_1_H
#define PLAYER_1_H

#include <string>
#include <vector>

class Player_1 {
public:
    Player_1();
    Player_1(int ancho, int alto);
    void dibujar();
    void mover(int dx, int dy);
    int getEscalado() const { return escalado; }
    int getColumnaMayor() const { return columnaMayor; }
    int getFilaMayor() const { return filaMayor; }


private:
    void colores(const std::string& color);
    void dibujaCuadrado(int a, int b, const std::string& colorRelleno, int c, int d);
    void dibujaFila(int fila, const std::vector<std::string>& colores);

    int posX, posY;
    int escalado;
    bool pintarBorde;
    int anchoPantalla;
    int altoPantalla;
    int filaMayor;
    int columnaMayor;
};

#endif // PLAYER_1_H