#ifndef COLORFLYWEIGHT_H
#define COLORFLYWEIGHT_H

#include "../../../lib/miniwin.h"
#include <string>
#include <unordered_map>
#include <vector>

using namespace miniwin;

class ColorFlyweight {
public:
    static ColorFlyweight& getInstance() {
        static ColorFlyweight instance;
        return instance;
    }

    void setColor_Player1(const std::string& color) {
        setColor(color, {
            {"c_1", {70, 157, 198}},
            {"c_2", {56, 86, 160}},
            {"c_3", {241, 168, 73}},
            {"c_4", {231, 50, 35}},
            {"c_5", {180, 37, 29}},
            {"c_6", {0, 0, 2}},
            {"c_7", {179, 179, 179}},
            {"c_8", {130, 130, 130}},
            {"c_9", {57, 85, 162}}
        });
    }

    void setColor_Bala(const std::string& color) {
        setColor(color, {{"c_1", {255, 0, 0}}, {"c_2", {0, 255, 0}}, {"c_3", {0, 0, 255}}});
    }

    void setColor_Enemigo1(const std::string& color) {
        setColor(color, {
                {"c_1", {209, 52, 42}},
                {"c_2", {100, 29, 31}},
                {"c_3", {192, 65, 30}},
                {"c_4", {201, 120, 43}},
                {"c_5", {235, 145, 54}},
                {"c_6", {51, 32, 5}},
                {"c_7", {191, 40, 27}},
                {"c_8", {157, 48, 23}},
                {"c_9", {195, 68, 31}},
                {"c_10", {26, 51, 99}},
                {"c_11", {163, 163, 165}},
                {"c_12", {224, 225, 227}},
                {"c_13", {254, 254, 255}},
        });
    }

private:
    ColorFlyweight() {}

    void setColor(const std::string& color, const std::unordered_map<std::string, std::vector<int>>& colorMap) {
        if (colorMap.find(color) != colorMap.end()) {
            auto rgb = colorMap.at(color);
            color_rgb(rgb[0], rgb[1], rgb[2]);
        }
    }
};

#endif // COLORFLYWEIGHT_H