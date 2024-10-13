//
// Created by Leo on 12/10/2024.
//

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

    void setColor(const std::string& color) {
        if (colorMap.find(color) == colorMap.end()) {
            if (color == "c_1") {
                colorMap[color] = {157, 133, 133};
            } else if (color == "c_2") {
                colorMap[color] = {240, 157, 157};
            }
        }
        auto rgb = colorMap[color];
        color_rgb(rgb[0], rgb[1], rgb[2]);
    }

private:
    ColorFlyweight() {}
    std::unordered_map<std::string, std::vector<int>> colorMap;
};

#endif // COLORFLYWEIGHT_H