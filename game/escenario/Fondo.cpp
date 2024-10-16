#include "Fondo.h"
#include "../../lib/miniwin.h"
#include <windows.h>
#include "../enemigos/EnemigoNiv1/EnemigoNiv1.h"

using namespace miniwin;

Fondo::Fondo() : escalado(5) {
    anchoPantalla = 200 * escalado;
    altoPantalla = 150 * escalado;
    player = Player_1(anchoPantalla, altoPantalla);
    // Centrando al jugador en la pantalla
    int bajarImagen =  -20;
    player.mover((anchoPantalla / (2 * player.getEscalado())) - (player.getColumnaMayor()/2) , (altoPantalla / (2 * player.getEscalado())) + (player.getFilaMayor()/2) + bajarImagen);

    // Añadir enemigos
    EnemigoNiv1* enemigo1 = new EnemigoNiv1(anchoPantalla, altoPantalla);
    enemigo1->moverConParametros(1, 1);
    enemigos.push_back(enemigo1);

    EnemigoNiv1* enemigo2 = new EnemigoNiv1(anchoPantalla, altoPantalla);
    enemigo2->moverConParametros(100, 6);
    enemigos.push_back(enemigo2);

    EnemigoNiv1* enemigo3 = new EnemigoNiv1(anchoPantalla, altoPantalla);
    enemigo3->moverConParametros(190, 6);
    enemigos.push_back(enemigo3);
}

Fondo::~Fondo() {
    for (auto enemigo : enemigos) {
        delete enemigo;
    }
}

void Fondo::redimensionar() {
    vredimensiona(anchoPantalla, altoPantalla);
}

void Fondo::movimientoJugador() {
    if (!player.estaVivo()) {
        texto(anchoPantalla / 2, altoPantalla / 2, "perdiste");
        if (tecla() == ESPACIO) {
            // Reiniciar el juego
            player = Player_1(anchoPantalla, altoPantalla);
            player.mover((anchoPantalla / (2 * player.getEscalado())) - (player.getColumnaMayor()/2) , (altoPantalla / (2 * player.getEscalado())) + (player.getFilaMayor()/2) - 20);
        }
        return;
    }

    int velocidad = 5;

    bool izquierda = GetAsyncKeyState(VK_LEFT) & 0x8000;
    bool derecha = GetAsyncKeyState(VK_RIGHT) & 0x8000;

    int dx = 0, dy = 0;

    if (izquierda) dx -= velocidad;
    if (derecha) dx += velocidad;

    player.mover(dx, dy);
    player.dibujar();
    player.actualizarBalas();
}

void Fondo::actualizarEnemigos() {
    for (auto enemigoIt = enemigos.begin(); enemigoIt != enemigos.end();) {
        EnemigoNiv1* enemigo = static_cast<EnemigoNiv1*>(*enemigoIt);
        enemigo->mover();
        enemigo->dibujar();
        enemigo->disparar();
        enemigo->actualizarBalas();

        bool enemigoEliminado = false;
        for (auto balaIt = player.getBalas().begin(); balaIt != player.getBalas().end();) {
            if (balaIt->colisionaCon(enemigo->getPosX() * enemigo->getEscalado(), enemigo->getPosY() * enemigo->getEscalado(), enemigo->getColumnaMayor() * enemigo->getEscalado(), enemigo->getFilaMayor() * enemigo->getEscalado())) {
                balaIt = player.getBalas().erase(balaIt);
                enemigoIt = enemigos.erase(enemigoIt);
                enemigoEliminado = true;
                break;
            } else {
                ++balaIt;
            }
        }

        if (!enemigoEliminado) {
            ++enemigoIt;
        }

        // Verificar colisión de balas enemigas con el jugador
        for (const auto& bala : enemigo->getBalas()) {
            if (bala.colisionaCon(player.getPosX() * player.getEscalado(), player.getPosY() * player.getEscalado(), player.getColumnaMayor() * player.getEscalado(), player.getFilaMayor() * player.getEscalado())) {
                player.morir();
                return; // Terminar el juego
            }
        }
    }

    // Mostrar "ganaste" si no hay más enemigos
    if (enemigos.empty()) {
        float x = anchoPantalla / 2;
        float y = altoPantalla / 2;
        texto(x, y, "GANASTE - LEONARDO ESPEJO");
    }
}