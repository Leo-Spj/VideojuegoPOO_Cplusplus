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
        setColor(color, {{"c_1", {255, 0, 0}}, {"c_2", {0, 255, 0}}, {"c_3", {0, 0, 255}}});
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