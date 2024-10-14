#ifndef ENEMIGONIV1_H
#define ENEMIGONIV1_H

#include "../Enemigo.h"
#include <vector>
#include <string>
#include "../../utilidades/Bala.h"
#include <chrono>

class EnemigoNiv1 : public Enemigo {
public:
    EnemigoNiv1();
    EnemigoNiv1(int ancho, int alto);
    void mover() override;
    void moverConParametros(int dx, int dy);
    void dibujar() override;
    void disparar();
    void actualizarBalas();
    int getEscalado() const { return escalado; }
    int getColumnaMayor() const { return columnaMayor; }
    int getFilaMayor() const { return filaMayor; }

private:
    void colores(const std::string& color);
    void dibujaCuadrado(int a, int b, const std::string& colorRelleno, int c, int d);
    void dibujaFila(int fila, const std::vector<std::string>& colores);

    int anchoPantalla;
    int altoPantalla;
    int filaMayor;
    int columnaMayor;
    std::vector<Bala> balas;
    std::chrono::time_point<std::chrono::steady_clock> ultimoDisparo;
    int direccionX;
    int direccionY;
};

#endif // ENEMIGONIV1_H