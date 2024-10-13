cmake_minimum_required(VERSION 3.29)
project(g2d)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(g2d
    main.cpp
        lib/miniwin.cpp
        lib/miniwin.h
        game/escenario/Fondo.cpp
        game/escenario/Fondo.h
        game/jugador/skin/Player_1.cpp
        game/jugador/skin/Player_1.h
        game/jugador/skin/ColorFlyweight.cpp
        game/jugador/skin/ColorFlyweight.h
        game/enemigos/Enemigo.cpp
        game/enemigos/Enemigo.h
        game/enemigos/EnemigoNiv1/EnemigoNiv1.cpp
        game/enemigos/EnemigoNiv1/EnemigoNiv1.h
)