#include "miniwin.h"
#include <string>

using namespace miniwin;
using namespace std;

const int escalado = 3;
const bool pintarBorde = false;

void colores(const string& color) {
        if (color == "color_1") {
            color_rgb(3, 2, 2);
        }
        if (color == "color_2") {
            color_rgb(46, 46, 46);
        }
        if (color == "color_3") {
            color_rgb(93, 94, 96);
        }
        if (color == "color_4") {
            color_rgb(104, 21, 23);
        }
        if (color == "color_5") {
            color_rgb(223, 43, 47);
        }
        if (color == "color_6") {
            color_rgb(27, 44, 80);
        }
        if (color == "color_7") {
            color_rgb(15, 53, 109);
        }
        if (color == "color_8") {
            color_rgb(224, 225, 227);
        }
        if (color == "color_9") {
            color_rgb(255, 253, 254);
        }
        if (color == "color_10") {
            color_rgb(211, 1, 9);
        }
        if (color == "color_11") {
            color_rgb(253, 157, 45);
        }
        if (color == "color_12") {
            color_rgb(227, 120, 30);
        }
        //Enemigo
        if (color == "color_13") { // 1
            color_rgb(0, 0, 0);
        }
        if (color == "color_14") { // 2
            color_rgb(157, 22, 22);
        }
        if (color == "color_15") { // 3
            color_rgb(0, 41, 255);
        }
        if (color == "color_16") { // 4
            color_rgb(142, 180, 231);
        }
        if (color == "color_17") { // 5
            color_rgb(255, 255, 255);
        }
        if (color == "color_18") { // 6
            color_rgb(0, 86, 255);
        }
        if (color == "color_19") { // 7
            color_rgb(187, 187, 187);
        }
        if (color == "color_20") { // 8
            color_rgb(158, 158, 158);
        }
        if (color == "color_21") { // 9
            color_rgb(96, 96, 96);
        }
        if (color == "color_22") { // 10
            color_rgb(81, 81, 81);
        }

}

void dibujaCuadrado(int a, int b, const string& colorRelleno, int c, int d) {
    const int x = a * escalado;
    const int y = b * escalado;

    colores(colorRelleno);

    rectangulo_lleno(x + c, y + d, (x + escalado) + c, (y + escalado) + d);

    if (pintarBorde) {
        color_rgb(100, 100, 100);
        linea(x, y, x, y + escalado);
        linea(x, y + escalado, x + escalado, y + escalado);
        linea(x + escalado, y + escalado, x + escalado, y);
        linea(x + escalado, y, x, y);
    }
}

void cuadrado(int c, int d){

    dibujaCuadrado(20, 10 , "color_1" , c, d);
    dibujaCuadrado(21, 10 , "color_1" , c, d);
    dibujaCuadrado(22, 10 , "color_1" , c, d);
    dibujaCuadrado(19, 11 , "color_1" , c, d);
    dibujaCuadrado(20, 11 , "color_3" , c, d);
    dibujaCuadrado(21, 11 , "color_3" , c, d);
    dibujaCuadrado(22, 11 , "color_3" , c, d);
    dibujaCuadrado(23, 11 , "color_1" , c, d);
    dibujaCuadrado(19, 12 , "color_1" , c, d);
    dibujaCuadrado(20, 12 , "color_3" , c, d);
    dibujaCuadrado(21, 12 , "color_9" , c, d);
    dibujaCuadrado(22, 12 , "color_9" , c, d);
    dibujaCuadrado(23, 12 , "color_1" , c, d);
    dibujaCuadrado(18, 13 , "color_1" , c, d);
    dibujaCuadrado(19, 13 , "color_3" , c, d);
    dibujaCuadrado(20, 13 , "color_9" , c, d);
    dibujaCuadrado(21, 13 , "color_1" , c, d);
    dibujaCuadrado(22, 13 , "color_9" , c, d);
    dibujaCuadrado(23, 13 , "color_8" , c, d);
    dibujaCuadrado(24, 13 , "color_1" , c, d);
    dibujaCuadrado(18, 14 , "color_1" , c, d);
    dibujaCuadrado(19, 14 , "color_9" , c, d);
    dibujaCuadrado(20, 14 , "color_1" , c, d);
    dibujaCuadrado(21, 14 , "color_1" , c, d);
    dibujaCuadrado(22, 14 , "color_1" , c, d);
    dibujaCuadrado(23, 14 , "color_8" , c, d);
    dibujaCuadrado(24, 14 , "color_1" , c, d);
    dibujaCuadrado(18, 15 , "color_1" , c, d);
    dibujaCuadrado(19, 15 , "color_9" , c, d);
    dibujaCuadrado(20, 15 , "color_1" , c, d);
    dibujaCuadrado(21, 15 , "color_9" , c, d);
    dibujaCuadrado(22, 15 , "color_1" , c, d);
    dibujaCuadrado(23, 15 , "color_8" , c, d);
    dibujaCuadrado(24, 15 , "color_1" , c, d);
    dibujaCuadrado(18, 16 , "color_1" , c, d);
    dibujaCuadrado(19, 16 , "color_9" , c, d);
    dibujaCuadrado(20, 16 , "color_9" , c, d);
    dibujaCuadrado(21, 16 , "color_8" , c, d);
    dibujaCuadrado(22, 16 , "color_8" , c, d);
    dibujaCuadrado(23, 16 , "color_8" , c, d);
    dibujaCuadrado(24, 16 , "color_1" , c, d);
    dibujaCuadrado(17, 17 , "color_1" , c, d);
    dibujaCuadrado(18, 17 , "color_3" , c, d);
    dibujaCuadrado(19, 17 , "color_3" , c, d);
    dibujaCuadrado(20, 17 , "color_9" , c, d);
    dibujaCuadrado(21, 17 , "color_8" , c, d);
    dibujaCuadrado(22, 17 , "color_8" , c, d);
    dibujaCuadrado(23, 17 , "color_3" , c, d);
    dibujaCuadrado(24, 17 , "color_3" , c, d);
    dibujaCuadrado(25, 17 , "color_1" , c, d);
    dibujaCuadrado(15, 18 , "color_1" , c, d);
    dibujaCuadrado(16, 18 , "color_1" , c, d);
    dibujaCuadrado(17, 18 , "color_7" , c, d);
    dibujaCuadrado(18, 18 , "color_3" , c, d);
    dibujaCuadrado(19, 18 , "color_9" , c, d);
    dibujaCuadrado(20, 18 , "color_3" , c, d);
    dibujaCuadrado(21, 18 , "color_3" , c, d);
    dibujaCuadrado(22, 18 , "color_3" , c, d);
    dibujaCuadrado(23, 18 , "color_8" , c, d);
    dibujaCuadrado(24, 18 , "color_3" , c, d);
    dibujaCuadrado(25, 18 , "color_7" , c, d);
    dibujaCuadrado(26, 18 , "color_1" , c, d);
    dibujaCuadrado(27, 18 , "color_1" , c, d);
    dibujaCuadrado(14, 19 , "color_1" , c, d);
    dibujaCuadrado(15, 19 , "color_7" , c, d);
    dibujaCuadrado(16, 19 , "color_7" , c, d);
    dibujaCuadrado(17, 19 , "color_6" , c, d);
    dibujaCuadrado(18, 19 , "color_3" , c, d);
    dibujaCuadrado(19, 19 , "color_9" , c, d);
    dibujaCuadrado(20, 19 , "color_9" , c, d);
    dibujaCuadrado(21, 19 , "color_9" , c, d);
    dibujaCuadrado(22, 19 , "color_8" , c, d);
    dibujaCuadrado(23, 19 , "color_8" , c, d);
    dibujaCuadrado(24, 19 , "color_3" , c, d);
    dibujaCuadrado(25, 19 , "color_6" , c, d);
    dibujaCuadrado(26, 19 , "color_7" , c, d);
    dibujaCuadrado(27, 19 , "color_7" , c, d);
    dibujaCuadrado(28, 19 , "color_1" , c, d);
    dibujaCuadrado(14, 20 , "color_1" , c, d);
    dibujaCuadrado(15, 20 , "color_7" , c, d);
    dibujaCuadrado(16, 20 , "color_6" , c, d);
    dibujaCuadrado(17, 20 , "color_9" , c, d);
    dibujaCuadrado(18, 20 , "color_3" , c, d);
    dibujaCuadrado(19, 20 , "color_9" , c, d);
    dibujaCuadrado(20, 20 , "color_9" , c, d);
    dibujaCuadrado(21, 20 , "color_9" , c, d);
    dibujaCuadrado(22, 20 , "color_8" , c, d);
    dibujaCuadrado(23, 20 , "color_8" , c, d);
    dibujaCuadrado(24, 20 , "color_3" , c, d);
    dibujaCuadrado(25, 20 , "color_9" , c, d);
    dibujaCuadrado(26, 20 , "color_6" , c, d);
    dibujaCuadrado(27, 20 , "color_7" , c, d);
    dibujaCuadrado(28, 20 , "color_1" , c, d);
    dibujaCuadrado(14, 21 , "color_1" , c, d);
    dibujaCuadrado(15, 21 , "color_7" , c, d);
    dibujaCuadrado(16, 21 , "color_6" , c, d);
    dibujaCuadrado(17, 21 , "color_9" , c, d);
    dibujaCuadrado(18, 21 , "color_3" , c, d);
    dibujaCuadrado(19, 21 , "color_9" , c, d);
    dibujaCuadrado(20, 21 , "color_9" , c, d);
    dibujaCuadrado(21, 21 , "color_8" , c, d);
    dibujaCuadrado(22, 21 , "color_8" , c, d);
    dibujaCuadrado(23, 21 , "color_8" , c, d);
    dibujaCuadrado(24, 21 , "color_3" , c, d);
    dibujaCuadrado(25, 21 , "color_9" , c, d);
    dibujaCuadrado(26, 21 , "color_6" , c, d);
    dibujaCuadrado(27, 21 , "color_7" , c, d);
    dibujaCuadrado(28, 21 , "color_1" , c, d);
    dibujaCuadrado(14, 22 , "color_1" , c, d);
    dibujaCuadrado(15, 22 , "color_7" , c, d);
    dibujaCuadrado(16, 22 , "color_6" , c, d);
    dibujaCuadrado(17, 22 , "color_9" , c, d);
    dibujaCuadrado(18, 22 , "color_3" , c, d);
    dibujaCuadrado(19, 22 , "color_3" , c, d);
    dibujaCuadrado(20, 22 , "color_9" , c, d);
    dibujaCuadrado(21, 22 , "color_8" , c, d);
    dibujaCuadrado(22, 22 , "color_8" , c, d);
    dibujaCuadrado(23, 22 , "color_3" , c, d);
    dibujaCuadrado(24, 22 , "color_3" , c, d);
    dibujaCuadrado(25, 22 , "color_9" , c, d);
    dibujaCuadrado(26, 22 , "color_6" , c, d);
    dibujaCuadrado(27, 22 , "color_7" , c, d);
    dibujaCuadrado(28, 22 , "color_1" , c, d);
    dibujaCuadrado(14, 23 , "color_1" , c, d);
    dibujaCuadrado(15, 23 , "color_7" , c, d);
    dibujaCuadrado(16, 23 , "color_6" , c, d);
    dibujaCuadrado(17, 23 , "color_9" , c, d);
    dibujaCuadrado(18, 23 , "color_3" , c, d);
    dibujaCuadrado(19, 23 , "color_9" , c, d);
    dibujaCuadrado(20, 23 , "color_3" , c, d);
    dibujaCuadrado(21, 23 , "color_3" , c, d);
    dibujaCuadrado(22, 23 , "color_3" , c, d);
    dibujaCuadrado(23, 23 , "color_8" , c, d);
    dibujaCuadrado(24, 23 , "color_3" , c, d);
    dibujaCuadrado(25, 23 , "color_9" , c, d);
    dibujaCuadrado(26, 23 , "color_6" , c, d);
    dibujaCuadrado(27, 23 , "color_7" , c, d);
    dibujaCuadrado(28, 23 , "color_1" , c, d);
    dibujaCuadrado(14, 24 , "color_1" , c, d);
    dibujaCuadrado(15, 24 , "color_7" , c, d);
    dibujaCuadrado(16, 24 , "color_6" , c, d);
    dibujaCuadrado(17, 24 , "color_9" , c, d);
    dibujaCuadrado(18, 24 , "color_3" , c, d);
    dibujaCuadrado(19, 24 , "color_9" , c, d);
    dibujaCuadrado(20, 24 , "color_9" , c, d);
    dibujaCuadrado(21, 24 , "color_8" , c, d);
    dibujaCuadrado(22, 24 , "color_8" , c, d);
    dibujaCuadrado(23, 24 , "color_8" , c, d);
    dibujaCuadrado(24, 24 , "color_3" , c, d);
    dibujaCuadrado(25, 24 , "color_9" , c, d);
    dibujaCuadrado(26, 24 , "color_6" , c, d);
    dibujaCuadrado(27, 24 , "color_7" , c, d);
    dibujaCuadrado(28, 24 , "color_1" , c, d);
    dibujaCuadrado(14, 25 , "color_1" , c, d);
    dibujaCuadrado(15, 25 , "color_7" , c, d);
    dibujaCuadrado(16, 25 , "color_6" , c, d);
    dibujaCuadrado(17, 25 , "color_9" , c, d);
    dibujaCuadrado(18, 25 , "color_3" , c, d);
    dibujaCuadrado(19, 25 , "color_9" , c, d);
    dibujaCuadrado(20, 25 , "color_9" , c, d);
    dibujaCuadrado(21, 25 , "color_8" , c, d);
    dibujaCuadrado(22, 25 , "color_8" , c, d);
    dibujaCuadrado(23, 25 , "color_8" , c, d);
    dibujaCuadrado(24, 25 , "color_3" , c, d);
    dibujaCuadrado(25, 25 , "color_9" , c, d);
    dibujaCuadrado(26, 25 , "color_9" , c, d);
    dibujaCuadrado(27, 25 , "color_6" , c, d);
    dibujaCuadrado(28, 25 , "color_7" , c, d);
    dibujaCuadrado(29, 25 , "color_1" , c, d);
    dibujaCuadrado(13, 26 , "color_1" , c, d);
    dibujaCuadrado(14, 26 , "color_7" , c, d);
    dibujaCuadrado(15, 26 , "color_6" , c, d);
    dibujaCuadrado(16, 26 , "color_9" , c, d);
    dibujaCuadrado(17, 26 , "color_9" , c, d);
    dibujaCuadrado(18, 26 , "color_3" , c, d);
    dibujaCuadrado(19, 26 , "color_9" , c, d);
    dibujaCuadrado(20, 26 , "color_3" , c, d);
    dibujaCuadrado(21, 26 , "color_8" , c, d);
    dibujaCuadrado(22, 26 , "color_3" , c, d);
    dibujaCuadrado(23, 26 , "color_8" , c, d);
    dibujaCuadrado(24, 26 , "color_3" , c, d);
    dibujaCuadrado(25, 26 , "color_9" , c, d);
    dibujaCuadrado(26, 26 , "color_9" , c, d);
    dibujaCuadrado(27, 26 , "color_9" , c, d);
    dibujaCuadrado(28, 26 , "color_6" , c, d);
    dibujaCuadrado(29, 26 , "color_7" , c, d);
    dibujaCuadrado(30, 26 , "color_1" , c, d);
    dibujaCuadrado(12, 27 , "color_1" , c, d);
    dibujaCuadrado(13, 27 , "color_7" , c, d);
    dibujaCuadrado(14, 27 , "color_6" , c, d);
    dibujaCuadrado(15, 27 , "color_9" , c, d);
    dibujaCuadrado(16, 27 , "color_9" , c, d);
    dibujaCuadrado(17, 27 , "color_8" , c, d);
    dibujaCuadrado(18, 27 , "color_3" , c, d);
    dibujaCuadrado(19, 27 , "color_9" , c, d);
    dibujaCuadrado(20, 27 , "color_3" , c, d);
    dibujaCuadrado(21, 27 , "color_8" , c, d);
    dibujaCuadrado(22, 27 , "color_3" , c, d);
    dibujaCuadrado(23, 27 , "color_8" , c, d);
    dibujaCuadrado(24, 27 , "color_3" , c, d);
    dibujaCuadrado(25, 27 , "color_9" , c, d);
    dibujaCuadrado(26, 27 , "color_9" , c, d);
    dibujaCuadrado(27, 27 , "color_9" , c, d);
    dibujaCuadrado(28, 27 , "color_9" , c, d);
    dibujaCuadrado(29, 27 , "color_6" , c, d);
    dibujaCuadrado(30, 27 , "color_7" , c, d);
    dibujaCuadrado(31, 27 , "color_1" , c, d);
    dibujaCuadrado(11, 28 , "color_1" , c, d);
    dibujaCuadrado(12, 28 , "color_7" , c, d);
    dibujaCuadrado(13, 28 , "color_6" , c, d);
    dibujaCuadrado(14, 28 , "color_9" , c, d);
    dibujaCuadrado(15, 28 , "color_9" , c, d);
    dibujaCuadrado(16, 28 , "color_8" , c, d);
    dibujaCuadrado(17, 28 , "color_8" , c, d);
    dibujaCuadrado(18, 28 , "color_3" , c, d);
    dibujaCuadrado(19, 28 , "color_9" , c, d);
    dibujaCuadrado(20, 28 , "color_3" , c, d);
    dibujaCuadrado(21, 28 , "color_8" , c, d);
    dibujaCuadrado(22, 28 , "color_3" , c, d);
    dibujaCuadrado(23, 28 , "color_8" , c, d);
    dibujaCuadrado(24, 28 , "color_3" , c, d);
    dibujaCuadrado(25, 28 , "color_9" , c, d);
    dibujaCuadrado(26, 28 , "color_9" , c, d);
    dibujaCuadrado(27, 28 , "color_9" , c, d);
    dibujaCuadrado(28, 28 , "color_8" , c, d);
    dibujaCuadrado(29, 28 , "color_8" , c, d);
    dibujaCuadrado(30, 28 , "color_6" , c, d);
    dibujaCuadrado(31, 28 , "color_7" , c, d);
    dibujaCuadrado(32, 28 , "color_1" , c, d);
    dibujaCuadrado(10, 29 , "color_1" , c, d);
    dibujaCuadrado(11, 29 , "color_7" , c, d);
    dibujaCuadrado(12, 29 , "color_6" , c, d);
    dibujaCuadrado(13, 29 , "color_9" , c, d);
    dibujaCuadrado(14, 29 , "color_9" , c, d);
    dibujaCuadrado(15, 29 , "color_9" , c, d);
    dibujaCuadrado(16, 29 , "color_8" , c, d);
    dibujaCuadrado(17, 29 , "color_8" , c, d);
    dibujaCuadrado(18, 29 , "color_3" , c, d);
    dibujaCuadrado(19, 29 , "color_9" , c, d);
    dibujaCuadrado(20, 29 , "color_9" , c, d);
    dibujaCuadrado(21, 29 , "color_8" , c, d);
    dibujaCuadrado(22, 29 , "color_8" , c, d);
    dibujaCuadrado(23, 29 , "color_8" , c, d);
    dibujaCuadrado(24, 29 , "color_3" , c, d);
    dibujaCuadrado(25, 29 , "color_9" , c, d);
    dibujaCuadrado(26, 29 , "color_9" , c, d);
    dibujaCuadrado(27, 29 , "color_9" , c, d);
    dibujaCuadrado(28, 29 , "color_8" , c, d);
    dibujaCuadrado(29, 29 , "color_8" , c, d);
    dibujaCuadrado(30, 29 , "color_8" , c, d);
    dibujaCuadrado(31, 29 , "color_6" , c, d);
    dibujaCuadrado(32, 29 , "color_7" , c, d);
    dibujaCuadrado(33, 29 , "color_1" , c, d);

    dibujaCuadrado(9, 30 , "color_1" , c, d);
    dibujaCuadrado(10, 30 , "color_7" , c, d);
    dibujaCuadrado(11, 30 , "color_6" , c, d);
    dibujaCuadrado(12, 30 , "color_9" , c, d);
    dibujaCuadrado(13, 30 , "color_9" , c, d);
    dibujaCuadrado(14, 30 , "color_9" , c, d);
    dibujaCuadrado(15, 30 , "color_8" , c, d);
    dibujaCuadrado(16, 30 , "color_8" , c, d);
    dibujaCuadrado(17, 30 , "color_8" , c, d);
    dibujaCuadrado(18, 30 , "color_3" , c, d);
    dibujaCuadrado(19, 30 , "color_8" , c, d);
    dibujaCuadrado(20, 30 , "color_8" , c, d);
    dibujaCuadrado(21, 30 , "color_8" , c, d);
    dibujaCuadrado(22, 30 , "color_8" , c, d);
    dibujaCuadrado(23, 30 , "color_8" , c, d);
    dibujaCuadrado(24, 30 , "color_3" , c, d);
    dibujaCuadrado(25, 30 , "color_9" , c, d);
    dibujaCuadrado(26, 30 , "color_9" , c, d);
    dibujaCuadrado(27, 30 , "color_9" , c, d);
    dibujaCuadrado(28, 30 , "color_8" , c, d);
    dibujaCuadrado(29, 30 , "color_8" , c, d);
    dibujaCuadrado(30, 30 , "color_8" , c, d);
    dibujaCuadrado(31, 30 , "color_8" , c, d);
    dibujaCuadrado(32, 30 , "color_6" , c, d);
    dibujaCuadrado(33, 30 , "color_7" , c, d);
    dibujaCuadrado(34, 30 , "color_1" , c, d);

    dibujaCuadrado(8, 31 , "color_1" , c, d);
    dibujaCuadrado(9, 31 , "color_7" , c, d);
    dibujaCuadrado(10, 31 , "color_6" , c, d);
    dibujaCuadrado(11, 31 , "color_9" , c, d);
    dibujaCuadrado(12, 31 , "color_9" , c, d);
    dibujaCuadrado(13, 31 , "color_9" , c, d);
    dibujaCuadrado(14, 31 , "color_8" , c, d);
    dibujaCuadrado(15, 31 , "color_8" , c, d);
    dibujaCuadrado(16, 31 , "color_8" , c, d);
    dibujaCuadrado(17, 31 , "color_8" , c, d);
    dibujaCuadrado(18, 31 , "color_3" , c, d);
    dibujaCuadrado(19, 31 , "color_8" , c, d);
    dibujaCuadrado(20, 31 , "color_8" , c, d);
    dibujaCuadrado(21, 31 , "color_8" , c, d);
    dibujaCuadrado(22, 31 , "color_8" , c, d);
    dibujaCuadrado(23, 31 , "color_8" , c, d);
    dibujaCuadrado(24, 31 , "color_3" , c, d);
    dibujaCuadrado(25, 31 , "color_9" , c, d);
    dibujaCuadrado(26, 31 , "color_9" , c, d);
    dibujaCuadrado(27, 31 , "color_8" , c, d);
    dibujaCuadrado(28, 31 , "color_8" , c, d);
    dibujaCuadrado(29, 31 , "color_8" , c, d);
    dibujaCuadrado(30, 31 , "color_8" , c, d);
    dibujaCuadrado(31, 31 , "color_8" , c, d);
    dibujaCuadrado(32, 31 , "color_6" , c, d);
    dibujaCuadrado(33, 31 , "color_6" , c, d);
    dibujaCuadrado(34, 31 , "color_7" , c, d);
    dibujaCuadrado(35, 31 , "color_1" , c, d);
    dibujaCuadrado(8, 32 , "color_1" , c, d);
    dibujaCuadrado(9, 32 , "color_7" , c, d);
    dibujaCuadrado(10, 32 , "color_6" , c, d);
    dibujaCuadrado(11, 32 , "color_9" , c, d);
    dibujaCuadrado(12, 32 , "color_9" , c, d);
    dibujaCuadrado(13, 32 , "color_9" , c, d);
    dibujaCuadrado(14, 32 , "color_8" , c, d);
    dibujaCuadrado(15, 32 , "color_8" , c, d);
    dibujaCuadrado(16, 32 , "color_8" , c, d);
    dibujaCuadrado(17, 32 , "color_8" , c, d);
    dibujaCuadrado(18, 32 , "color_3" , c, d);
    dibujaCuadrado(19, 32 , "color_3" , c, d);
    dibujaCuadrado(20, 32 , "color_3" , c, d);
    dibujaCuadrado(21, 32 , "color_3" , c, d);
    dibujaCuadrado(22, 32 , "color_3" , c, d);
    dibujaCuadrado(23, 32 , "color_3" , c, d);
    dibujaCuadrado(24, 32 , "color_3" , c, d);
    dibujaCuadrado(25, 32 , "color_9" , c, d);
    dibujaCuadrado(26, 32 , "color_8" , c, d);
    dibujaCuadrado(27, 32 , "color_8" , c, d);
    dibujaCuadrado(28, 32 , "color_8" , c, d);
    dibujaCuadrado(29, 32 , "color_8" , c, d);
    dibujaCuadrado(30, 32 , "color_8" , c, d);
    dibujaCuadrado(31, 32 , "color_8" , c, d);
    dibujaCuadrado(32, 32 , "color_8" , c, d);
    dibujaCuadrado(33, 32 , "color_6" , c, d);
    dibujaCuadrado(34, 32 , "color_7" , c, d);
    dibujaCuadrado(35, 32 , "color_1" , c, d);
    dibujaCuadrado(8, 33 , "color_1" , c, d);
    dibujaCuadrado(9, 33 , "color_7" , c, d);
    dibujaCuadrado(10, 33 , "color_6" , c, d);
    dibujaCuadrado(11, 33 , "color_9" , c, d);
    dibujaCuadrado(12, 33 , "color_9" , c, d);
    dibujaCuadrado(13, 33 , "color_8" , c, d);
    dibujaCuadrado(14, 33 , "color_8" , c, d);
    dibujaCuadrado(15, 33 , "color_8" , c, d);
    dibujaCuadrado(16, 33 , "color_8" , c, d);
    dibujaCuadrado(17, 33 , "color_4" , c, d);
    dibujaCuadrado(18, 33 , "color_5" , c, d);
    dibujaCuadrado(19, 33 , "color_5" , c, d);
    dibujaCuadrado(20, 33 , "color_5" , c, d);
    dibujaCuadrado(21, 33 , "color_5" , c, d);
    dibujaCuadrado(22, 33 , "color_5" , c, d);
    dibujaCuadrado(23, 33 , "color_5" , c, d);
    dibujaCuadrado(24, 33 , "color_5" , c, d);
    dibujaCuadrado(25, 33 , "color_4" , c, d);
    dibujaCuadrado(26, 33 , "color_8" , c, d);
    dibujaCuadrado(27, 33 , "color_8" , c, d);
    dibujaCuadrado(28, 33 , "color_8" , c, d);
    dibujaCuadrado(29, 33 , "color_8" , c, d);
    dibujaCuadrado(30, 33 , "color_8" , c, d);
    dibujaCuadrado(31, 33 , "color_8" , c, d);
    dibujaCuadrado(32, 33 , "color_8" , c, d);
    dibujaCuadrado(33, 33 , "color_6" , c, d);
    dibujaCuadrado(34, 33 , "color_7" , c, d);
    dibujaCuadrado(35, 33 , "color_1" , c, d);
    dibujaCuadrado(9, 34 , "color_1" , c, d);
    dibujaCuadrado(10, 34 , "color_9" , c, d);
    dibujaCuadrado(11, 34 , "color_9" , c, d);
    dibujaCuadrado(12, 34 , "color_9" , c, d);
    dibujaCuadrado(13, 34 , "color_8" , c, d);
    dibujaCuadrado(14, 34 , "color_8" , c, d);
    dibujaCuadrado(15, 34 , "color_2" , c, d);
    dibujaCuadrado(16, 34 , "color_8" , c, d);
    dibujaCuadrado(17, 34 , "color_4" , c, d);
    dibujaCuadrado(18, 34 , "color_4" , c, d);
    dibujaCuadrado(19, 34 , "color_4" , c, d);
    dibujaCuadrado(20, 34 , "color_4" , c, d);
    dibujaCuadrado(21, 34 , "color_4" , c, d);
    dibujaCuadrado(22, 34 , "color_4" , c, d);
    dibujaCuadrado(23, 34 , "color_4" , c, d);
    dibujaCuadrado(24, 34 , "color_4" , c, d);
    dibujaCuadrado(25, 34 , "color_4" , c, d);
    dibujaCuadrado(26, 34 , "color_8" , c, d);
    dibujaCuadrado(27, 34 , "color_8" , c, d);
    dibujaCuadrado(28, 34 , "color_2" , c, d);
    dibujaCuadrado(29, 34 , "color_8" , c, d);
    dibujaCuadrado(30, 34 , "color_8" , c, d);
    dibujaCuadrado(31, 34 , "color_8" , c, d);
    dibujaCuadrado(32, 34 , "color_8" , c, d);
    dibujaCuadrado(33, 34 , "color_8" , c, d);
    dibujaCuadrado(34, 34 , "color_1" , c, d);
    dibujaCuadrado(9, 35 , "color_1" , c, d);
    dibujaCuadrado(10, 35 , "color_9" , c, d);
    dibujaCuadrado(11, 35 , "color_2" , c, d);
    dibujaCuadrado(12, 35 , "color_2" , c, d);
    dibujaCuadrado(13, 35 , "color_2" , c, d);
    dibujaCuadrado(14, 35 , "color_2" , c, d);
    dibujaCuadrado(15, 35 , "color_2" , c, d);
    dibujaCuadrado(16, 35 , "color_8" , c, d);
    dibujaCuadrado(17, 35 , "color_3" , c, d);
    dibujaCuadrado(18, 35 , "color_9" , c, d);
    dibujaCuadrado(19, 35 , "color_9" , c, d);
    dibujaCuadrado(20, 35 , "color_8" , c, d);
    dibujaCuadrado(21, 35 , "color_3" , c, d);
    dibujaCuadrado(22, 35 , "color_9" , c, d);
    dibujaCuadrado(23, 35 , "color_9" , c, d);
    dibujaCuadrado(24, 35 , "color_8" , c, d);
    dibujaCuadrado(25, 35 , "color_3" , c, d);
    dibujaCuadrado(26, 35 , "color_8" , c, d);
    dibujaCuadrado(27, 35 , "color_8" , c, d);
    dibujaCuadrado(28, 35 , "color_2" , c, d);
    dibujaCuadrado(29, 35 , "color_2" , c, d);
    dibujaCuadrado(30, 35 , "color_2" , c, d);
    dibujaCuadrado(31, 35 , "color_2" , c, d);
    dibujaCuadrado(32, 35 , "color_2" , c, d);
    dibujaCuadrado(33, 35 , "color_8" , c, d);
    dibujaCuadrado(34, 35 , "color_1" , c, d);
    dibujaCuadrado(9, 36 , "color_1" , c, d);
    dibujaCuadrado(10, 36 , "color_8" , c, d);
    dibujaCuadrado(11, 36 , "color_8" , c, d);
    dibujaCuadrado(12, 36 , "color_8" , c, d);
    dibujaCuadrado(13, 36 , "color_8" , c, d);
    dibujaCuadrado(14, 36 , "color_8" , c, d);
    dibujaCuadrado(15, 36 , "color_8" , c, d);
    dibujaCuadrado(16, 36 , "color_8" , c, d);
    dibujaCuadrado(17, 36 , "color_3" , c, d);
    dibujaCuadrado(18, 36 , "color_9" , c, d);
    dibujaCuadrado(19, 36 , "color_9" , c, d);
    dibujaCuadrado(20, 36 , "color_8" , c, d);

    dibujaCuadrado(21, 36 , "color_3" , c, d);
    dibujaCuadrado(22, 36 , "color_9" , c, d);
    dibujaCuadrado(23, 36 , "color_9" , c, d);
    dibujaCuadrado(24, 36 , "color_8" , c, d);
    dibujaCuadrado(25, 36 , "color_3" , c, d);
    dibujaCuadrado(26, 36 , "color_8" , c, d);
    dibujaCuadrado(27, 36 , "color_8" , c, d);
    dibujaCuadrado(28, 36 , "color_8" , c, d);
    dibujaCuadrado(29, 36 , "color_8" , c, d);
    dibujaCuadrado(30, 36 , "color_8" , c, d);
    dibujaCuadrado(31, 36 , "color_8" , c, d);
    dibujaCuadrado(32, 36 , "color_8" , c, d);
    dibujaCuadrado(33, 36 , "color_8" , c, d);
    dibujaCuadrado(34, 36 , "color_1" , c, d);
    dibujaCuadrado(10, 37 , "color_1" , c, d);
    dibujaCuadrado(11, 37 , "color_1" , c, d);
    dibujaCuadrado(12, 37 , "color_1" , c, d);
    dibujaCuadrado(13, 37 , "color_1" , c, d);
    dibujaCuadrado(14, 37 , "color_1" , c, d);
    dibujaCuadrado(15, 37 , "color_1" , c, d);
    dibujaCuadrado(16, 37 , "color_1" , c, d);
    dibujaCuadrado(17, 37 , "color_3" , c, d);
    dibujaCuadrado(18, 37 , "color_8" , c, d);
    dibujaCuadrado(19, 37 , "color_8" , c, d);
    dibujaCuadrado(20, 37 , "color_8" , c, d);
    dibujaCuadrado(21, 37 , "color_3" , c, d);
    dibujaCuadrado(22, 37 , "color_9" , c, d);
    dibujaCuadrado(23, 37 , "color_8" , c, d);
    dibujaCuadrado(24, 37 , "color_8" , c, d);
    dibujaCuadrado(25, 37 , "color_3" , c, d);
    dibujaCuadrado(26, 37 , "color_1" , c, d);
    dibujaCuadrado(27, 37 , "color_1" , c, d);
    dibujaCuadrado(28, 37 , "color_1" , c, d);
    dibujaCuadrado(29, 37 , "color_1" , c, d);
    dibujaCuadrado(30, 37 , "color_1" , c, d);
    dibujaCuadrado(31, 37 , "color_1" , c, d);
    dibujaCuadrado(32, 37 , "color_1" , c, d);
    dibujaCuadrado(33, 37 , "color_1" , c, d);
    dibujaCuadrado(11, 38 , "color_10", c, d);
    dibujaCuadrado(12, 38 , "color_11", c, d);
    dibujaCuadrado(13, 38 , "color_11", c, d);
    dibujaCuadrado(14, 38 , "color_12", c, d);
    dibujaCuadrado(15, 38 , "color_10", c, d);

    dibujaCuadrado(17, 38 , "color_1" , c, d);
    dibujaCuadrado(18, 38 , "color_8" , c, d);
    dibujaCuadrado(19, 38 , "color_8" , c, d);
    dibujaCuadrado(20, 38 , "color_8" , c, d);
    dibujaCuadrado(21, 38 , "color_3" , c, d);
    dibujaCuadrado(22, 38 , "color_8" , c, d);
    dibujaCuadrado(23, 38 , "color_8" , c, d);
    dibujaCuadrado(24, 38 , "color_8" , c, d);
    dibujaCuadrado(25, 38 , "color_1" , c, d);
    dibujaCuadrado(27, 38 , "color_10", c, d);
    dibujaCuadrado(28, 38 , "color_11", c, d);
    dibujaCuadrado(29, 38 , "color_11", c, d);
    dibujaCuadrado(30, 38 , "color_12", c, d);
    dibujaCuadrado(31, 38 , "color_10", c, d);
    dibujaCuadrado(10, 39 , "color_10", c, d);
    dibujaCuadrado(11, 39 , "color_11", c, d);
    dibujaCuadrado(12, 39 , "color_11", c, d);
    dibujaCuadrado(13, 39 , "color_11", c, d);
    dibujaCuadrado(14, 39 , "color_11", c, d);
    dibujaCuadrado(15, 39 , "color_12", c, d);
    dibujaCuadrado(16, 39 , "color_10", c, d);

    dibujaCuadrado(18, 39 , "color_1" , c, d);
    dibujaCuadrado(19, 39 , "color_1" , c, d);
    dibujaCuadrado(20, 39 , "color_1" , c, d);
    dibujaCuadrado(21, 39 , "color_1" , c, d);
    dibujaCuadrado(22, 39 , "color_1" , c, d);
    dibujaCuadrado(23, 39 , "color_1" , c, d);
    dibujaCuadrado(24, 39 , "color_1" , c, d);
    dibujaCuadrado(26, 39 , "color_10", c, d);
    dibujaCuadrado(27, 39 , "color_11", c, d);
    dibujaCuadrado(28, 39 , "color_11", c, d);
    dibujaCuadrado(29, 39 , "color_11", c, d);
    dibujaCuadrado(30, 39 , "color_11", c, d);
    dibujaCuadrado(31, 39 , "color_12", c, d);
    dibujaCuadrado(32, 39 , "color_10", c, d);
    dibujaCuadrado(10, 40 , "color_10", c, d);
    dibujaCuadrado(11, 40 , "color_11", c, d);
    dibujaCuadrado(12, 40 , "color_11", c, d);
    dibujaCuadrado(13, 40 , "color_11", c, d);
    dibujaCuadrado(14, 40 , "color_11", c, d);
    dibujaCuadrado(15, 40 , "color_12", c, d);
    dibujaCuadrado(16, 40 , "color_10", c, d);
    dibujaCuadrado(26, 40 , "color_10", c, d);
    dibujaCuadrado(27, 40 , "color_11", c, d);
    dibujaCuadrado(28, 40 , "color_11", c, d);
    dibujaCuadrado(29, 40 , "color_11", c, d);
    dibujaCuadrado(30, 40 , "color_11", c, d);
    dibujaCuadrado(31, 40 , "color_12", c, d);
    dibujaCuadrado(32, 40 , "color_10", c, d);
    dibujaCuadrado(11, 41 , "color_10", c, d);
    dibujaCuadrado(12, 41 , "color_11", c, d);
    dibujaCuadrado(13, 41 , "color_11", c, d);
    dibujaCuadrado(14, 41 , "color_12", c, d);
    dibujaCuadrado(15, 41 , "color_10", c, d);
    dibujaCuadrado(27, 41 , "color_10", c, d);
    dibujaCuadrado(28, 41 , "color_11", c, d);
    dibujaCuadrado(29, 41 , "color_11", c, d);
    dibujaCuadrado(30, 41 , "color_12", c, d);
    dibujaCuadrado(31, 41 , "color_10", c, d);
    dibujaCuadrado(11, 42 , "color_10", c, d);
    dibujaCuadrado(12, 42 , "color_11", c, d);
    dibujaCuadrado(13, 42 , "color_11", c, d);
    dibujaCuadrado(14, 42 , "color_12", c, d);
    dibujaCuadrado(15, 42 , "color_10", c, d);
    dibujaCuadrado(27, 42 , "color_10", c, d);
    dibujaCuadrado(28, 42 , "color_11", c, d);
    dibujaCuadrado(29, 42 , "color_11", c, d);
    dibujaCuadrado(30, 42 , "color_12", c, d);
    dibujaCuadrado(31, 42 , "color_10", c, d);
    dibujaCuadrado(12, 43 , "color_10", c, d);
    dibujaCuadrado(13, 43 , "color_12", c, d);
    dibujaCuadrado(14, 43 , "color_10", c, d);
    dibujaCuadrado(28, 43 , "color_10", c, d);
    dibujaCuadrado(29, 43 , "color_12", c, d);
    dibujaCuadrado(30, 43 , "color_10", c, d);
    dibujaCuadrado(12, 44 , "color_10", c, d);
    dibujaCuadrado(13, 44 , "color_12", c, d);
    dibujaCuadrado(14, 44 , "color_10", c, d);
    dibujaCuadrado(28, 44 , "color_10", c, d);
    dibujaCuadrado(29, 44 , "color_12", c, d);
    dibujaCuadrado(30, 44 , "color_10", c, d);
    dibujaCuadrado(13, 45 , "color_10", c, d);
    dibujaCuadrado(29, 45 , "color_10", c, d);
}

void enemigo(int v, int z){

    dibujaCuadrado(16, 0 , "color_15", v, z);
    dibujaCuadrado(17, 0 , "color_15", v, z);
    dibujaCuadrado(18, 0 , "color_15", v, z);
    dibujaCuadrado(19, 0 , "color_15", v, z);
    dibujaCuadrado(15, 1 , "color_15", v, z);
    dibujaCuadrado(16, 1 , "color_15", v, z);
    dibujaCuadrado(17, 1 , "color_15", v, z);
    dibujaCuadrado(18, 1 , "color_15", v, z);
    dibujaCuadrado(19, 1 , "color_15", v, z);
    dibujaCuadrado(20, 1 , "color_15", v, z);
    dibujaCuadrado(14, 2 , "color_15", v, z);
    dibujaCuadrado(15, 2 , "color_15", v, z);
    dibujaCuadrado(16, 2 , "color_15", v, z);
    dibujaCuadrado(17, 2 , "color_16", v, z);
    dibujaCuadrado(18, 2 , "color_16", v, z);
    dibujaCuadrado(19, 2 , "color_15", v, z);
    dibujaCuadrado(20, 2 , "color_15", v, z);
    dibujaCuadrado(21, 2 , "color_15", v, z);
    dibujaCuadrado(6, 3 , "color_15" , v, z);
    dibujaCuadrado(14, 3 , "color_15", v, z);
    dibujaCuadrado(15, 3 , "color_15", v, z);
    dibujaCuadrado(16, 3 , "color_16", v, z);
    dibujaCuadrado(17, 3 , "color_17", v, z);
    dibujaCuadrado(18, 3 , "color_17", v, z);
    dibujaCuadrado(19, 3 , "color_16", v, z);
    dibujaCuadrado(20, 3 , "color_15", v, z);
    dibujaCuadrado(21, 3 , "color_15", v, z);
    dibujaCuadrado(29, 3 , "color_15", v, z);
    dibujaCuadrado(5, 4 , "color_15" , v, z);
    dibujaCuadrado(6, 4 , "color_16" , v, z);
    dibujaCuadrado(7, 4 , "color_15" , v, z);
    dibujaCuadrado(14, 4 , "color_15", v, z);
    dibujaCuadrado(15, 4 , "color_15", v, z);
    dibujaCuadrado(16, 4 , "color_16", v, z);
    dibujaCuadrado(17, 4 , "color_17", v, z);
    dibujaCuadrado(18, 4 , "color_17", v, z);
    dibujaCuadrado(19, 4 , "color_16", v, z);
    dibujaCuadrado(20, 4 , "color_15", v, z);
    dibujaCuadrado(21, 4 , "color_15", v, z);
    dibujaCuadrado(28, 4 , "color_15", v, z);
    dibujaCuadrado(29, 4 , "color_16", v, z);
    dibujaCuadrado(30, 4 , "color_15", v, z);
    dibujaCuadrado(5, 5 , "color_15" , v, z);
    dibujaCuadrado(6, 5 , "color_17" , v, z);
    dibujaCuadrado(7, 5 , "color_15" , v, z);
    dibujaCuadrado(14, 5 , "color_15", v, z);
    dibujaCuadrado(15, 5 , "color_15", v, z);
    dibujaCuadrado(16, 5 , "color_16", v, z);
    dibujaCuadrado(17, 5 , "color_17", v, z);
    dibujaCuadrado(18, 5 , "color_17", v, z);
    dibujaCuadrado(19, 5 , "color_16", v, z);
    dibujaCuadrado(20, 5 , "color_15", v, z);
    dibujaCuadrado(21, 5 , "color_15", v, z);
    dibujaCuadrado(28, 5 , "color_15", v, z);
    dibujaCuadrado(29, 5 , "color_17", v, z);
    dibujaCuadrado(30, 5 , "color_15", v, z);
    dibujaCuadrado(5, 6 , "color_15" , v, z);
    dibujaCuadrado(6, 6 , "color_17" , v, z);
    dibujaCuadrado(7, 6 , "color_15" , v, z);
    dibujaCuadrado(14, 6 , "color_15", v, z);
    dibujaCuadrado(15, 6 , "color_15", v, z);
    dibujaCuadrado(16, 6 , "color_16", v, z);
    dibujaCuadrado(17, 6 , "color_17", v, z);
    dibujaCuadrado(18, 6 , "color_17", v, z);
    dibujaCuadrado(19, 6 , "color_16", v, z);
    dibujaCuadrado(20, 6 , "color_15", v, z);
    dibujaCuadrado(21, 6 , "color_15", v, z);
    dibujaCuadrado(28, 6 , "color_15", v, z);
    dibujaCuadrado(29, 6 , "color_17", v, z);
    dibujaCuadrado(30, 6 , "color_15", v, z);
    dibujaCuadrado(3, 7 , "color_13 ", v, z);
    dibujaCuadrado(4, 7 , "color_13 ", v, z);
    dibujaCuadrado(5, 7 , "color_13 ", v, z);
    dibujaCuadrado(6, 7 , "color_13 ", v, z);
    dibujaCuadrado(7, 7 , "color_13 ", v, z);
    dibujaCuadrado(8, 7 , "color_13 ", v, z);
    dibujaCuadrado(9, 7 , "color_13 ", v, z);
    dibujaCuadrado(14, 7 , "color_15", v, z);
    dibujaCuadrado(15, 7 , "color_15", v, z);
    dibujaCuadrado(16, 7 , "color_15", v, z);
    dibujaCuadrado(17, 7 , "color_17", v, z);
    dibujaCuadrado(18, 7 , "color_17", v, z);
    dibujaCuadrado(19, 7 , "color_15", v, z);
    dibujaCuadrado(20, 7 , "color_15", v, z);
    dibujaCuadrado(21, 7 , "color_15", v, z);
    dibujaCuadrado(26, 7 , "color_13", v, z);
    dibujaCuadrado(27, 7 , "color_13", v, z);
    dibujaCuadrado(28, 7 , "color_13", v, z);
    dibujaCuadrado(29, 7 , "color_13", v, z);
    dibujaCuadrado(30, 7 , "color_13", v, z);
    dibujaCuadrado(31, 7 , "color_13", v, z);
    dibujaCuadrado(32, 7 , "color_13", v, z);
    dibujaCuadrado(3, 8 , "color_13" , v, z);
    dibujaCuadrado(4, 8 , "color_14" , v, z);
    dibujaCuadrado(5, 8 , "color_14" , v, z);
    dibujaCuadrado(6, 8 , "color_14" , v, z);
    dibujaCuadrado(7, 8 , "color_21" , v, z);
    dibujaCuadrado(8, 8 , "color_15" , v, z);
    dibujaCuadrado(9, 8 , "color_13" , v, z);
    dibujaCuadrado(10, 8 , "color_13", v, z);
    dibujaCuadrado(11, 8 , "color_13", v, z);
    dibujaCuadrado(12, 8 , "color_13", v, z);
    dibujaCuadrado(14, 8 , "color_15", v, z);
    dibujaCuadrado(15, 8 , "color_15", v, z);
    dibujaCuadrado(16, 8 , "color_15", v, z);
    dibujaCuadrado(17, 8 , "color_17", v, z);
    dibujaCuadrado(18, 8 , "color_17", v, z);
    dibujaCuadrado(19, 8 , "color_15", v, z);
    dibujaCuadrado(20, 8 , "color_15", v, z);
    dibujaCuadrado(21, 8 , "color_15", v, z);
    dibujaCuadrado(23, 8 , "color_13", v, z);
    dibujaCuadrado(24, 8 , "color_13", v, z);
    dibujaCuadrado(25, 8 , "color_13", v, z);
    dibujaCuadrado(26, 8 , "color_13", v, z);
    dibujaCuadrado(27, 8 , "color_15", v, z);
    dibujaCuadrado(28, 8 ,"color_22", v, z);
    dibujaCuadrado(29, 8 , "color_14", v, z);
    dibujaCuadrado(30, 8 , "color_14", v, z);
    dibujaCuadrado(31, 8 , "color_14", v, z);
    dibujaCuadrado(32, 8 , "color_13", v, z);
    dibujaCuadrado(3, 9 , "color_13" , v, z);
    dibujaCuadrado(4, 9 , "color_14" , v, z);
    dibujaCuadrado(5, 9 , "color_14" , v, z);
    dibujaCuadrado(6, 9 , "color_21" , v, z);
    dibujaCuadrado(7, 9 , "color_21" , v, z);
    dibujaCuadrado(8, 9 , "color_15" , v, z);
    dibujaCuadrado(9, 9 , "color_18" , v, z);
    dibujaCuadrado(10, 9 , "color_15", v, z);
    dibujaCuadrado(11, 9 , "color_21", v, z);
    dibujaCuadrado(12, 9 , "color_13", v, z);
    dibujaCuadrado(13, 9 , "color_13", v, z);
    dibujaCuadrado(14, 9 , "color_13", v, z);
    dibujaCuadrado(15, 9 , "color_13", v, z);
    dibujaCuadrado(16, 9 , "color_15", v, z);
    dibujaCuadrado(17, 9 , "color_15", v, z);
    dibujaCuadrado(18, 9 , "color_15", v, z);
    dibujaCuadrado(19, 9 , "color_15", v, z);
    dibujaCuadrado(20, 9 , "color_13", v, z);
    dibujaCuadrado(21, 9 , "color_13", v, z);
    dibujaCuadrado(22, 9 , "color_13", v, z);
    dibujaCuadrado(23, 9 , "color_13", v, z);
    dibujaCuadrado(24, 9 ,"color_22", v, z);
    dibujaCuadrado(25, 9 , "color_15", v, z);
    dibujaCuadrado(26, 9 , "color_18", v, z);
    dibujaCuadrado(27, 9 , "color_15", v, z);
    dibujaCuadrado(28, 9 ,"color_22", v, z);
    dibujaCuadrado(29, 9 ,"color_22", v, z);
    dibujaCuadrado(30, 9 , "color_14", v, z);
    dibujaCuadrado(31, 9 , "color_14", v, z);
    dibujaCuadrado(32, 9 , "color_13", v, z);
    dibujaCuadrado(3, 10 , "color_13", v, z);
    dibujaCuadrado(4, 10 , "color_14", v, z);
    dibujaCuadrado(5, 10 , "color_21", v, z);
    dibujaCuadrado(6, 10 , "color_21", v, z);
    dibujaCuadrado(7, 10 , "color_21", v, z);
    dibujaCuadrado(8, 10 , "color_15", v, z);
    dibujaCuadrado(9, 10 , "color_18", v, z);
    dibujaCuadrado(10, 10 ,"color_15", v, z);
    dibujaCuadrado(11, 10 ,"color_21", v, z);
    dibujaCuadrado(12, 10,"color_22", v, z);
    dibujaCuadrado(13, 10,"color_22", v, z);
    dibujaCuadrado(14, 10,"color_22", v, z);
    dibujaCuadrado(15, 10, "color_13", v, z);
    dibujaCuadrado(16, 10, "color_13", v, z);
    dibujaCuadrado(17, 10, "color_13", v, z);
    dibujaCuadrado(18, 10, "color_13", v, z);
    dibujaCuadrado(19, 10, "color_13", v, z);
    dibujaCuadrado(20, 10, "color_13", v, z);
    dibujaCuadrado(21, 10,"color_22", v, z);
    dibujaCuadrado(22, 10,"color_22", v, z);
    dibujaCuadrado(23, 10,"color_22", v, z);
    dibujaCuadrado(24, 10,"color_22", v, z);
    dibujaCuadrado(25, 10, "color_15", v, z);
    dibujaCuadrado(26, 10, "color_18", v, z);
    dibujaCuadrado(27, 10, "color_15", v, z);
    dibujaCuadrado(28, 10,"color_22", v, z);
    dibujaCuadrado(29, 10,"color_22", v, z);
    dibujaCuadrado(30, 10,"color_22", v, z);
    dibujaCuadrado(31, 10 ,"color_14", v, z);
    dibujaCuadrado(32, 10 ,"color_13", v, z);
    dibujaCuadrado(3, 11 , "color_13", v, z);
    dibujaCuadrado(4, 11 , "color_13", v, z);
    dibujaCuadrado(5, 11 , "color_21", v, z);
    dibujaCuadrado(6, 11 , "color_21", v, z);
    dibujaCuadrado(7, 11 , "color_21", v, z);
    dibujaCuadrado(8, 11 , "color_15", v, z);
    dibujaCuadrado(9, 11 , "color_18", v, z);
    dibujaCuadrado(10, 11 ,"color_15", v, z);
    dibujaCuadrado(11, 11 ,"color_21", v, z);
    dibujaCuadrado(12, 11 ,"color_21", v, z);
    dibujaCuadrado(13, 11 ,"color_21", v, z);
    dibujaCuadrado(14, 11 ,"color_21", v, z);
    dibujaCuadrado(15, 11,"color_22", v, z);
    dibujaCuadrado(16, 11,"color_22", v, z);
    dibujaCuadrado(17, 11,"color_22", v, z);
    dibujaCuadrado(18, 11, "color_21", v, z);
    dibujaCuadrado(19, 11,"color_22", v, z);
    dibujaCuadrado(20, 11,"color_22", v, z);
    dibujaCuadrado(21, 11,"color_22", v, z);
    dibujaCuadrado(22, 11,"color_22", v, z);
    dibujaCuadrado(23, 11,"color_22", v, z);
    dibujaCuadrado(24, 11,"color_22", v, z);
    dibujaCuadrado(25, 11, "color_15", v, z);
    dibujaCuadrado(26, 11 ,"color_18", v, z);
    dibujaCuadrado(27, 11 ,"color_15", v, z);
    dibujaCuadrado(28, 11,"color_22", v, z);
    dibujaCuadrado(29, 11,"color_22", v, z);
    dibujaCuadrado(30, 11,"color_22", v, z);
    dibujaCuadrado(31, 11 ,"color_13", v, z);
    dibujaCuadrado(32, 11 ,"color_13", v, z);
    dibujaCuadrado(4, 12 , "color_13", v, z);
    dibujaCuadrado(5, 12 , "color_21", v, z);
    dibujaCuadrado(6, 12 , "color_21", v, z);
    dibujaCuadrado(7, 12 , "color_21", v, z);
    dibujaCuadrado(8, 12 , "color_15", v, z);
    dibujaCuadrado(9, 12 , "color_18", v, z);
    dibujaCuadrado(10, 12 ,"color_15", v, z);
    dibujaCuadrado(11, 12 ,"color_21", v, z);
    dibujaCuadrado(12, 12 ,"color_21", v, z);
    dibujaCuadrado(13, 12 ,"color_21", v, z);
    dibujaCuadrado(14, 12 ,"color_21", v, z);
    dibujaCuadrado(15, 12 ,"color_21", v, z);
    dibujaCuadrado(16, 12 ,"color_21", v, z);
    dibujaCuadrado(17, 12 ,"color_21", v, z);
    dibujaCuadrado(18, 12 ,"color_21", v, z);
    dibujaCuadrado(19, 12 ,"color_21", v, z);
    dibujaCuadrado(20, 12,"color_22", v, z);
    dibujaCuadrado(21, 12,"color_22", v, z);
    dibujaCuadrado(22, 12,"color_22", v, z);
    dibujaCuadrado(23, 12,"color_22", v, z);
    dibujaCuadrado(24, 12,"color_22", v, z);
    dibujaCuadrado(25, 12 ,"color_15", v, z);
    dibujaCuadrado(26, 12 ,"color_18", v, z);
    dibujaCuadrado(27, 12 ,"color_15", v, z);
    dibujaCuadrado(28, 12,"color_22", v, z);
    dibujaCuadrado(29, 12,"color_22", v, z);
    dibujaCuadrado(30, 12,"color_22", v, z);
    dibujaCuadrado(31, 12 ,"color_13", v, z);
    dibujaCuadrado(4, 13 , "color_13", v, z);
    dibujaCuadrado(5, 13 , "color_13", v, z);
    dibujaCuadrado(6, 13 , "color_21", v, z);
    dibujaCuadrado(7, 13 , "color_21", v, z);
    dibujaCuadrado(8, 13 , "color_15", v, z);
    dibujaCuadrado(9, 13 , "color_15", v, z);
    dibujaCuadrado(10, 13 ,"color_15", v, z);
    dibujaCuadrado(11, 13 ,"color_21", v, z);
    dibujaCuadrado(12, 13 ,"color_21", v, z);
    dibujaCuadrado(13, 13 ,"color_21", v, z);
    dibujaCuadrado(14, 13 ,"color_21", v, z);
    dibujaCuadrado(15, 13 ,"color_21", v, z);
    dibujaCuadrado(16, 13 ,"color_21", v, z);
    dibujaCuadrado(17, 13 ,"color_21", v, z);
    dibujaCuadrado(18, 13 ,"color_21", v, z);
    dibujaCuadrado(19, 13 ,"color_21", v, z);
    dibujaCuadrado(20, 13 ,"color_21", v, z);
    dibujaCuadrado(21, 13,"color_22", v, z);
    dibujaCuadrado(22, 13,"color_22", v, z);
    dibujaCuadrado(23, 13,"color_22", v, z);
    dibujaCuadrado(24, 13,"color_22", v, z);
    dibujaCuadrado(25, 13 ,"color_15", v, z);
    dibujaCuadrado(26, 13 ,"color_18", v, z);
    dibujaCuadrado(27, 13 ,"color_15", v, z);
    dibujaCuadrado(28, 13,"color_22", v, z);
    dibujaCuadrado(29, 13,"color_22", v, z);
    dibujaCuadrado(30, 13 ,"color_13", v, z);
    dibujaCuadrado(31, 13 ,"color_13", v, z);
    dibujaCuadrado(5, 14 , "color_13", v, z);
    dibujaCuadrado(6, 14 , "color_13", v, z);
    dibujaCuadrado(7, 14 , "color_13", v, z);
    dibujaCuadrado(8, 14 , "color_13", v, z);
    dibujaCuadrado(9, 14 , "color_13", v, z);
    dibujaCuadrado(10, 14 ,"color_13", v, z);
    dibujaCuadrado(11, 14 ,"color_21", v, z);
    dibujaCuadrado(12, 14 ,"color_21", v, z);
    dibujaCuadrado(13, 14 ,"color_21", v, z);
    dibujaCuadrado(14, 14 ,"color_21", v, z);
    dibujaCuadrado(15, 14 ,"color_21", v, z);
    dibujaCuadrado(16, 14 ,"color_21", v, z);
    dibujaCuadrado(17, 14 ,"color_21", v, z);
    dibujaCuadrado(18, 14 ,"color_21", v, z);
    dibujaCuadrado(19, 14 ,"color_21", v, z);
    dibujaCuadrado(20, 14 ,"color_21", v, z);
    dibujaCuadrado(21, 14 ,"color_21", v, z);
    dibujaCuadrado(22, 14,"color_22", v, z);
    dibujaCuadrado(23, 14,"color_22", v, z);
    dibujaCuadrado(24, 14,"color_22", v, z);
    dibujaCuadrado(25, 14 ,"color_13", v, z);
    dibujaCuadrado(26, 14 ,"color_13", v, z);
    dibujaCuadrado(27, 14 ,"color_13", v, z);
    dibujaCuadrado(28, 14 ,"color_13", v, z);
    dibujaCuadrado(29, 14 ,"color_13", v, z);
    dibujaCuadrado(30, 14 ,"color_13", v, z);
    dibujaCuadrado(10, 15 ,"color_13", v, z);
    dibujaCuadrado(11, 15 ,"color_13", v, z);
    dibujaCuadrado(12, 15 ,"color_13", v, z);
    dibujaCuadrado(13, 15 ,"color_14", v, z);
    dibujaCuadrado(14, 15 ,"color_14", v, z);
    dibujaCuadrado(15, 15 ,"color_21", v, z);
    dibujaCuadrado(16, 15 ,"color_21", v, z);
    dibujaCuadrado(17, 15 ,"color_21", v, z);
    dibujaCuadrado(18, 15 ,"color_21", v, z);
    dibujaCuadrado(19, 15 ,"color_21", v, z);
    dibujaCuadrado(20, 15 ,"color_21", v, z);
    dibujaCuadrado(21, 15 ,"color_14", v, z);
    dibujaCuadrado(22, 15 ,"color_14", v, z);
    dibujaCuadrado(23, 15 ,"color_13", v, z);
    dibujaCuadrado(24, 15 ,"color_13", v, z);
    dibujaCuadrado(25, 15 ,"color_13", v, z);
    dibujaCuadrado(12, 16 ,"color_13", v, z);
    dibujaCuadrado(13, 16 ,"color_14", v, z);
    dibujaCuadrado(14, 16 ,"color_14", v, z);
    dibujaCuadrado(15, 16 ,"color_14", v, z);
    dibujaCuadrado(16, 16 ,"color_21", v, z);
    dibujaCuadrado(17, 16 ,"color_21", v, z);
    dibujaCuadrado(18, 16 ,"color_21", v, z);
    dibujaCuadrado(19, 16 ,"color_21", v, z);
    dibujaCuadrado(20, 16 ,"color_14", v, z);
    dibujaCuadrado(21, 16 ,"color_14", v, z);
    dibujaCuadrado(22, 16 ,"color_14", v, z);
    dibujaCuadrado(23, 16 ,"color_13", v, z);
    dibujaCuadrado(12, 17 ,"color_13", v, z);
    dibujaCuadrado(13, 17 ,"color_19", v, z);
    dibujaCuadrado(14, 17 ,"color_19", v, z);
    dibujaCuadrado(15, 17 ,"color_14", v, z);
    dibujaCuadrado(16, 17 ,"color_14", v, z);
    dibujaCuadrado(17, 17 ,"color_14", v, z);
    dibujaCuadrado(18, 17 ,"color_14", v, z);
    dibujaCuadrado(19, 17 ,"color_14", v, z);
    dibujaCuadrado(20, 17 ,"color_14", v, z);
    dibujaCuadrado(21, 17 ,"color_20", v, z);
    dibujaCuadrado(22, 17 ,"color_20", v, z);
    dibujaCuadrado(23, 17 ,"color_13", v, z);
    dibujaCuadrado(12, 18 ,"color_13", v, z);
    dibujaCuadrado(13, 18 ,"color_13", v, z);
    dibujaCuadrado(14, 18 ,"color_19", v, z);
    dibujaCuadrado(15, 18 ,"color_19", v, z);
    dibujaCuadrado(16, 18 ,"color_14", v, z);
    dibujaCuadrado(17, 18 ,"color_14", v, z);
    dibujaCuadrado(18, 18 ,"color_14", v, z);
    dibujaCuadrado(19, 18 ,"color_14", v, z);
    dibujaCuadrado(20, 18 ,"color_20", v, z);
    dibujaCuadrado(21, 18 ,"color_20", v, z);
    dibujaCuadrado(22, 18 ,"color_20", v, z);
    dibujaCuadrado(23, 18 ,"color_13", v, z);
    dibujaCuadrado(13, 19 ,"color_13", v, z);
    dibujaCuadrado(14, 19 ,"color_19", v, z);
    dibujaCuadrado(15, 19 ,"color_19", v, z);
    dibujaCuadrado(16, 19 ,"color_20", v, z);
    dibujaCuadrado(17, 19 ,"color_20", v, z);
    dibujaCuadrado(18, 19 ,"color_20", v, z);
    dibujaCuadrado(19, 19 ,"color_20", v, z);
    dibujaCuadrado(20, 19 ,"color_20", v, z);
    dibujaCuadrado(21, 19 ,"color_20", v, z);
    dibujaCuadrado(22, 19 ,"color_13", v, z);
    dibujaCuadrado(13, 20 ,"color_13", v, z);
    dibujaCuadrado(14, 20 ,"color_13", v, z);
    dibujaCuadrado(15, 20 ,"color_19", v, z);
    dibujaCuadrado(16, 20 ,"color_19", v, z);
    dibujaCuadrado(17, 20 ,"color_20", v, z);
    dibujaCuadrado(18, 20 ,"color_20", v, z);
    dibujaCuadrado(19, 20 ,"color_20", v, z);
    dibujaCuadrado(20, 20 ,"color_20", v, z);
    dibujaCuadrado(21, 20 ,"color_13", v, z);
    dibujaCuadrado(22, 20 ,"color_13", v, z);
    dibujaCuadrado(14, 21 ,"color_13", v, z);
    dibujaCuadrado(15, 21 ,"color_19", v, z);
    dibujaCuadrado(16, 21 ,"color_19", v, z);
    dibujaCuadrado(17, 21 ,"color_19", v, z);
    dibujaCuadrado(18, 21 ,"color_20", v, z);
    dibujaCuadrado(19, 21 ,"color_20", v, z);
    dibujaCuadrado(20, 21 ,"color_20", v, z);
    dibujaCuadrado(21, 21 ,"color_13", v, z);
    dibujaCuadrado(14, 22 ,"color_13", v, z);
    dibujaCuadrado(15, 22 ,"color_13", v, z);
    dibujaCuadrado(16, 22 ,"color_19", v, z);
    dibujaCuadrado(17, 22 ,"color_19", v, z);
    dibujaCuadrado(18, 22 ,"color_19", v, z);
    dibujaCuadrado(19, 22 ,"color_20", v, z);
    dibujaCuadrado(20, 22 ,"color_13", v, z);
    dibujaCuadrado(21, 22 ,"color_13", v, z);
    dibujaCuadrado(15, 23 ,"color_13", v, z);
    dibujaCuadrado(16, 23 ,"color_13", v, z);
    dibujaCuadrado(17, 23 ,"color_14", v, z);
    dibujaCuadrado(18, 23 ,"color_14", v, z);
    dibujaCuadrado(19, 23 ,"color_13", v, z);
    dibujaCuadrado(20, 23 ,"color_13", v, z);
    dibujaCuadrado(16, 24 ,"color_13", v, z);
    dibujaCuadrado(17, 24 ,"color_13", v, z);
    dibujaCuadrado(18, 24 ,"color_13", v, z);
    dibujaCuadrado(19, 24 ,"color_13", v, z);
    dibujaCuadrado(17, 25 ,"color_13", v, z);
    dibujaCuadrado(18, 25 ,"color_13", v, z);

}

int main() {
    int anchoPantalla = 250 * escalado;
    int altoPantalla = 200 * escalado;

    vredimensiona(anchoPantalla, altoPantalla);

    int c = 300, d = 460;
    int v = 10, z = 10;

    int v1 = 500, z1 = 100;
    int p1, di1;
    int t = tecla();

    int p, di;

    while (t != ESCAPE) {
        if (t == IZQUIERDA) {
            if (c - 5 >= -25) {
                c = c - 5;
            }
        } else if (t == DERECHA) {
            if (c + 5 + escalado <= 650) {
                c = c + 5;
            }
        } else if (t == ARRIBA) {
            if (d - 5 >= -30) {
                d = d - 5;
            }
        } else if (t == ABAJO) {
            if (d + 5 + escalado <= 465) {
                d = d + 5;
            }
        }

        p = rand() % 50;  // Genera un número aleatorio entre 0 y 49.
        if (p == 0) {
            di = IZQUIERDA;
        } else if (p == 1) {
            di = DERECHA;
        }

        if (di == IZQUIERDA) {
            if (v > 20) {
                v -= 15;
            }
        } else if (di == DERECHA) {
            if (v < 640) {
                v += 15;  // Cambio el valor para un movimiento más suave
            }
        }

        p1 = rand() % 50;  // Genera un número aleatorio entre 0 y 49.
        if (p1 == 0) {
            di1 = IZQUIERDA;
        } else if (p1 == 1) {
            di1 = DERECHA;
        }

        if (di1 == IZQUIERDA) {
            if (v1 > 20) {
                v1 -= 10;
            }
        } else if (di == DERECHA) {
            if (v1 < 640) {
                v1 += 10;  // Cambio el valor para un movimiento más suave
            }
        }

        borra();
        cuadrado(c, d);
        enemigo(v, z);
        enemigo(v1, z1);
        refresca();
        espera(10);
        t = tecla();
    }

    return 0;
}
